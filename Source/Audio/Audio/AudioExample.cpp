// Example usage of the Audio Engine
// This file is not compiled, it's just for reference

#include "AudioEngine.h"

void AudioEngineExample()
{
    // Initialize the audio engine
    Audio::AudioEngine audioEngine;
    if (!audioEngine.Init())
    {
        // Handle initialization failure
        return;
    }

    // Set master volume
    audioEngine.SetMasterVolume(0.8f);

    // Example 1: Play a simple 2D sound effect
    {
        Audio::AudioSourceDesc desc;
        desc.filePath = "sounds/explosion.wav";
        desc.volume = 1.0f;
        desc.pitch = 1.0f;
        desc.isLooping = false;
        desc.is3D = false;

        Audio::AudioSourceID explosionSound = audioEngine.CreateSource(desc);
        if (explosionSound.IsValid())
        {
            audioEngine.Play(explosionSound);
        }
    }

    // Example 2: Play background music with looping
    {
        Audio::AudioSourceDesc desc;
        desc.filePath = "music/background.mp3";
        desc.volume = 0.5f;
        desc.isLooping = true;
        desc.is3D = false;

        Audio::AudioSourceID musicSource = audioEngine.CreateSource(desc);
        if (musicSource.IsValid())
        {
            audioEngine.Play(musicSource);

            // Can adjust volume during playback
            audioEngine.SetVolume(musicSource, 0.3f);
        }
    }

    // Example 3: Play 3D positional audio
    {
        Audio::AudioSourceDesc desc;
        desc.filePath = "sounds/ambient.ogg";
        desc.volume = 1.0f;
        desc.is3D = true;
        desc.position = vec3(10.0f, 0.0f, 5.0f); // Position in world space

        Audio::AudioSourceID ambientSource = audioEngine.CreateSource(desc);
        if (ambientSource.IsValid())
        {
            audioEngine.Play(ambientSource);

            // Update source position dynamically
            audioEngine.SetPosition(ambientSource, vec3(15.0f, 2.0f, 8.0f));
        }
    }

    // Example 4: Update listener (typically in your game loop)
    {
        // Set listener position (typically your camera position)
        vec3 cameraPos = vec3(0.0f, 1.6f, 0.0f);
        audioEngine.SetListenerPosition(cameraPos);

        // Set listener direction (typically your camera forward and up vectors)
        vec3 forward = vec3(0.0f, 0.0f, 1.0f);
        vec3 up = vec3(0.0f, 1.0f, 0.0f);
        audioEngine.SetListenerDirection(forward, up);
    }

    // Example 5: Game loop integration
    {
        f32 deltaTime = 0.016f; // 60 FPS

        // Call update each frame to clean up finished sounds
        audioEngine.Update(deltaTime);
    }

    // Example 6: Controlling playback
    {
        Audio::AudioSourceDesc desc;
        desc.filePath = "sounds/door_open.wav";
        desc.is3D = false;

        Audio::AudioSourceID doorSound = audioEngine.CreateSource(desc);
        if (doorSound.IsValid())
        {
            // Play
            audioEngine.Play(doorSound);

            // Check if playing
            if (audioEngine.IsPlaying(doorSound))
            {
                // Pause
                audioEngine.Pause(doorSound);

                // Resume
                audioEngine.Play(doorSound);

                // Stop (resets to beginning)
                audioEngine.Stop(doorSound);
            }

            // Clean up
            audioEngine.DestroySource(doorSound);
        }
    }

    // Shutdown when done
    audioEngine.Shutdown();
}

// Example: Managing multiple sounds in a game
class GameAudioManager
{
public:
    GameAudioManager() = default;

    void Init()
    {
        _audioEngine.Init();
        _audioEngine.SetMasterVolume(1.0f);

        // Load common sounds
        LoadSound("player_jump", "sounds/jump.wav", false, false);
        LoadSound("ambient_wind", "sounds/wind.ogg", true, true);
    }

    void Update(f32 deltaTime, const vec3& listenerPos, const vec3& listenerForward, const vec3& listenerUp)
    {
        _audioEngine.Update(deltaTime);
        _audioEngine.SetListenerPosition(listenerPos);
        _audioEngine.SetListenerDirection(listenerForward, listenerUp);
    }

    void PlaySound(const std::string& name, const vec3& position = vec3(0.0f))
    {
        auto it = _sounds.find(name);
        if (it != _sounds.end())
        {
            const SoundData& soundData = it->second;

            Audio::AudioSourceDesc desc;
            desc.filePath = soundData.filePath;
            desc.volume = soundData.volume;
            desc.isLooping = soundData.isLooping;
            desc.is3D = soundData.is3D;
            desc.position = position;

            Audio::AudioSourceID sourceId = _audioEngine.CreateSource(desc);
            if (sourceId.IsValid())
            {
                _audioEngine.Play(sourceId);
                _activeSources.push_back(sourceId);
            }
        }
    }

    void SetMasterVolume(f32 volume)
    {
        _audioEngine.SetMasterVolume(volume);
    }

    void Shutdown()
    {
        // Clean up all active sources
        for (auto& sourceId : _activeSources)
        {
            _audioEngine.DestroySource(sourceId);
        }
        _activeSources.clear();
        _sounds.clear();

        _audioEngine.Shutdown();
    }

private:
    struct SoundData
    {
        std::string filePath;
        f32 volume = 1.0f;
        bool isLooping = false;
        bool is3D = false;
    };

    void LoadSound(const std::string& name, const std::string& filePath, bool looping, bool is3D)
    {
        SoundData data;
        data.filePath = filePath;
        data.isLooping = looping;
        data.is3D = is3D;
        data.volume = 1.0f;

        _sounds[name] = data;
    }

private:
    Audio::AudioEngine _audioEngine;
    std::unordered_map<std::string, SoundData> _sounds;
    std::vector<Audio::AudioSourceID> _activeSources;
};
