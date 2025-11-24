#pragma once
#include <Base/Types.h>
#include <Base/Util/DebugHandler.h>

#include <vector>
#include <string>
#include <memory>

struct ma_engine;
struct ma_sound;

namespace Audio
{
    enum class AudioFormat : u8
    {
        WAV,
        MP3,
        FLAC,
        OGG,
        Unknown
    };

    enum class AudioState : u8
    {
        Stopped,
        Playing,
        Paused
    };

    struct AudioSourceID
    {
        u32 id = 0;

        bool IsValid() const { return id != 0; }
        void Reset() { id = 0; }

        bool operator==(const AudioSourceID& other) const { return id == other.id; }
        bool operator!=(const AudioSourceID& other) const { return id != other.id; }
    };

    struct AudioSourceDesc
    {
        std::string filePath;
        bool isLooping = false;
        bool is3D = false;
        f32 volume = 1.0f;
        f32 pitch = 1.0f;
        vec3 position = vec3(0.0f, 0.0f, 0.0f);
    };

    class AudioEngine
    {
    public:
        AudioEngine();
        ~AudioEngine();

        // Core lifecycle
        bool Init();
        void Update(f32 deltaTime);
        void Shutdown();

        // Master controls
        void SetMasterVolume(f32 volume);
        f32 GetMasterVolume() const { return _masterVolume; }

        // Source management
        AudioSourceID CreateSource(const AudioSourceDesc& desc);
        void DestroySource(AudioSourceID id);

        // Playback controls
        bool Play(AudioSourceID id);
        bool Pause(AudioSourceID id);
        bool Stop(AudioSourceID id);
        bool IsPlaying(AudioSourceID id) const;

        // Source properties
        void SetVolume(AudioSourceID id, f32 volume);
        void SetPitch(AudioSourceID id, f32 pitch);
        void SetLooping(AudioSourceID id, bool looping);
        void SetPosition(AudioSourceID id, const vec3& position);

        f32 GetVolume(AudioSourceID id) const;
        f32 GetPitch(AudioSourceID id) const;
        bool IsLooping(AudioSourceID id) const;
        vec3 GetPosition(AudioSourceID id) const;

        // Listener (for 3D audio)
        void SetListenerPosition(const vec3& position);
        void SetListenerDirection(const vec3& forward, const vec3& up);
        vec3 GetListenerPosition() const { return _listenerPosition; }

        // Utility
        bool IsInitialized() const { return _isInitialized; }

    private:
        struct AudioSource
        {
            AudioSourceID id;
            ma_sound* sound = nullptr;
            AudioSourceDesc desc;
            bool isValid = false;
        };

        AudioSource* GetSource(AudioSourceID id);
        const AudioSource* GetSource(AudioSourceID id) const;
        u32 AllocateSourceID();

    private:
        bool _isInitialized = false;
        ma_engine* _engine = nullptr;
        f32 _masterVolume = 1.0f;

        std::vector<AudioSource> _sources;
        u32 _nextSourceID = 1;

        vec3 _listenerPosition = vec3(0.0f, 0.0f, 0.0f);
        vec3 _listenerForward = vec3(0.0f, 0.0f, 1.0f);
        vec3 _listenerUp = vec3(0.0f, 1.0f, 0.0f);
    };
}
