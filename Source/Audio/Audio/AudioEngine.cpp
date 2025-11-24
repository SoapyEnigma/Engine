#include "AudioEngine.h"

#define MINIAUDIO_IMPLEMENTATION
#include <miniaudio.h>

#include <algorithm>

namespace Audio
{
    AudioEngine::AudioEngine()
    {
    }

    AudioEngine::~AudioEngine()
    {
        Shutdown();
    }

    bool AudioEngine::Init()
    {
        if (_isInitialized)
        {
            DebugHandler::PrintWarning("AudioEngine::Init() called but already initialized");
            return true;
        }

        _engine = new ma_engine();

        ma_result result = ma_engine_init(nullptr, _engine);
        if (result != MA_SUCCESS)
        {
            DebugHandler::PrintError("Failed to initialize miniaudio engine");
            delete _engine;
            _engine = nullptr;
            return false;
        }

        _isInitialized = true;
        DebugHandler::Print("Audio Engine initialized successfully");
        return true;
    }

    void AudioEngine::Update(f32 deltaTime)
    {
        if (!_isInitialized)
            return;

        // Clean up finished non-looping sources
        for (auto& source : _sources)
        {
            if (source.isValid && source.sound && !source.desc.isLooping)
            {
                if (ma_sound_at_end(source.sound))
                {
                    ma_sound_uninit(source.sound);
                    delete source.sound;
                    source.sound = nullptr;
                    source.isValid = false;
                }
            }
        }
    }

    void AudioEngine::Shutdown()
    {
        if (!_isInitialized)
            return;

        // Clean up all sources
        for (auto& source : _sources)
        {
            if (source.sound)
            {
                ma_sound_uninit(source.sound);
                delete source.sound;
            }
        }
        _sources.clear();

        // Shutdown engine
        if (_engine)
        {
            ma_engine_uninit(_engine);
            delete _engine;
            _engine = nullptr;
        }

        _isInitialized = false;
        DebugHandler::Print("Audio Engine shut down");
    }

    void AudioEngine::SetMasterVolume(f32 volume)
    {
        _masterVolume = std::clamp(volume, 0.0f, 1.0f);

        if (_isInitialized && _engine)
        {
            ma_engine_set_volume(_engine, _masterVolume);
        }
    }

    AudioSourceID AudioEngine::CreateSource(const AudioSourceDesc& desc)
    {
        if (!_isInitialized)
        {
            DebugHandler::PrintError("AudioEngine::CreateSource() called but not initialized");
            return AudioSourceID{};
        }

        AudioSource newSource;
        newSource.id.id = AllocateSourceID();
        newSource.desc = desc;
        newSource.sound = new ma_sound();

        u32 flags = 0;
        if (!desc.is3D)
        {
            flags |= MA_SOUND_FLAG_NO_SPATIALIZATION;
        }

        ma_result result = ma_sound_init_from_file(
            _engine,
            desc.filePath.c_str(),
            flags,
            nullptr,
            nullptr,
            newSource.sound
        );

        if (result != MA_SUCCESS)
        {
            DebugHandler::PrintError("Failed to load audio file: %s", desc.filePath.c_str());
            delete newSource.sound;
            return AudioSourceID{};
        }

        // Set initial properties
        ma_sound_set_volume(newSource.sound, desc.volume);
        ma_sound_set_pitch(newSource.sound, desc.pitch);
        ma_sound_set_looping(newSource.sound, desc.isLooping ? MA_TRUE : MA_FALSE);

        if (desc.is3D)
        {
            ma_sound_set_position(newSource.sound, desc.position.x, desc.position.y, desc.position.z);
        }

        newSource.isValid = true;
        _sources.push_back(newSource);

        return newSource.id;
    }

    void AudioEngine::DestroySource(AudioSourceID id)
    {
        if (!_isInitialized)
            return;

        for (auto& source : _sources)
        {
            if (source.id == id && source.isValid)
            {
                if (source.sound)
                {
                    ma_sound_uninit(source.sound);
                    delete source.sound;
                }
                source.sound = nullptr;
                source.isValid = false;
                return;
            }
        }
    }

    bool AudioEngine::Play(AudioSourceID id)
    {
        AudioSource* source = GetSource(id);
        if (!source || !source->sound)
            return false;

        ma_result result = ma_sound_start(source->sound);
        return result == MA_SUCCESS;
    }

    bool AudioEngine::Pause(AudioSourceID id)
    {
        AudioSource* source = GetSource(id);
        if (!source || !source->sound)
            return false;

        ma_result result = ma_sound_stop(source->sound);
        return result == MA_SUCCESS;
    }

    bool AudioEngine::Stop(AudioSourceID id)
    {
        AudioSource* source = GetSource(id);
        if (!source || !source->sound)
            return false;

        ma_sound_stop(source->sound);
        ma_sound_seek_to_pcm_frame(source->sound, 0);
        return true;
    }

    bool AudioEngine::IsPlaying(AudioSourceID id) const
    {
        const AudioSource* source = GetSource(id);
        if (!source || !source->sound)
            return false;

        return ma_sound_is_playing(source->sound) == MA_TRUE;
    }

    void AudioEngine::SetVolume(AudioSourceID id, f32 volume)
    {
        AudioSource* source = GetSource(id);
        if (!source || !source->sound)
            return;

        volume = std::clamp(volume, 0.0f, 1.0f);
        source->desc.volume = volume;
        ma_sound_set_volume(source->sound, volume);
    }

    void AudioEngine::SetPitch(AudioSourceID id, f32 pitch)
    {
        AudioSource* source = GetSource(id);
        if (!source || !source->sound)
            return;

        pitch = std::clamp(pitch, 0.1f, 10.0f);
        source->desc.pitch = pitch;
        ma_sound_set_pitch(source->sound, pitch);
    }

    void AudioEngine::SetLooping(AudioSourceID id, bool looping)
    {
        AudioSource* source = GetSource(id);
        if (!source || !source->sound)
            return;

        source->desc.isLooping = looping;
        ma_sound_set_looping(source->sound, looping ? MA_TRUE : MA_FALSE);
    }

    void AudioEngine::SetPosition(AudioSourceID id, const vec3& position)
    {
        AudioSource* source = GetSource(id);
        if (!source || !source->sound)
            return;

        source->desc.position = position;
        ma_sound_set_position(source->sound, position.x, position.y, position.z);
    }

    f32 AudioEngine::GetVolume(AudioSourceID id) const
    {
        const AudioSource* source = GetSource(id);
        if (!source)
            return 0.0f;

        return source->desc.volume;
    }

    f32 AudioEngine::GetPitch(AudioSourceID id) const
    {
        const AudioSource* source = GetSource(id);
        if (!source)
            return 1.0f;

        return source->desc.pitch;
    }

    bool AudioEngine::IsLooping(AudioSourceID id) const
    {
        const AudioSource* source = GetSource(id);
        if (!source)
            return false;

        return source->desc.isLooping;
    }

    vec3 AudioEngine::GetPosition(AudioSourceID id) const
    {
        const AudioSource* source = GetSource(id);
        if (!source)
            return vec3(0.0f);

        return source->desc.position;
    }

    void AudioEngine::SetListenerPosition(const vec3& position)
    {
        _listenerPosition = position;

        if (_isInitialized && _engine)
        {
            ma_engine_listener_set_position(_engine, 0, position.x, position.y, position.z);
        }
    }

    void AudioEngine::SetListenerDirection(const vec3& forward, const vec3& up)
    {
        _listenerForward = forward;
        _listenerUp = up;

        if (_isInitialized && _engine)
        {
            ma_engine_listener_set_direction(_engine, 0, forward.x, forward.y, forward.z);
            ma_engine_listener_set_world_up(_engine, 0, up.x, up.y, up.z);
        }
    }

    AudioEngine::AudioSource* AudioEngine::GetSource(AudioSourceID id)
    {
        for (auto& source : _sources)
        {
            if (source.id == id && source.isValid)
                return &source;
        }
        return nullptr;
    }

    const AudioEngine::AudioSource* AudioEngine::GetSource(AudioSourceID id) const
    {
        for (const auto& source : _sources)
        {
            if (source.id == id && source.isValid)
                return &source;
        }
        return nullptr;
    }

    u32 AudioEngine::AllocateSourceID()
    {
        return _nextSourceID++;
    }
}
