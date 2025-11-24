# Audio Module

An MVP audio engine for Novus Engine using miniaudio. Provides 2D and 3D audio playback capabilities without voice/microphone systems.

## Features

- **Audio Playback**: Load and play audio files (WAV, MP3, FLAC, OGG)
- **2D Audio**: Simple stereo audio playback
- **3D Audio**: Positional audio with listener support
- **Volume Control**: Master volume and per-source volume control
- **Pitch Control**: Adjust playback speed/pitch
- **Looping**: Support for looping audio sources
- **Async Cleanup**: Automatic cleanup of finished audio sources

## Usage Example

### Basic Initialization

```cpp
#include <Audio/AudioEngine.h>

// Create and initialize the audio engine
Audio::AudioEngine audioEngine;
if (!audioEngine.Init())
{
    // Handle initialization failure
    return;
}

// Set master volume (0.0 - 1.0)
audioEngine.SetMasterVolume(0.8f);
```

### Playing 2D Audio

```cpp
// Create a 2D audio source
Audio::AudioSourceDesc desc;
desc.filePath = "path/to/sound.wav";
desc.volume = 1.0f;
desc.pitch = 1.0f;
desc.isLooping = false;
desc.is3D = false;

Audio::AudioSourceID sourceId = audioEngine.CreateSource(desc);
if (sourceId.IsValid())
{
    // Play the audio
    audioEngine.Play(sourceId);
}
```

### Playing 3D Audio

```cpp
// Create a 3D audio source
Audio::AudioSourceDesc desc;
desc.filePath = "path/to/sound.wav";
desc.volume = 1.0f;
desc.is3D = true;
desc.position = vec3(10.0f, 0.0f, 5.0f);

Audio::AudioSourceID sourceId = audioEngine.CreateSource(desc);
if (sourceId.IsValid())
{
    audioEngine.Play(sourceId);
}

// Update listener position (typically camera position)
audioEngine.SetListenerPosition(vec3(0.0f, 0.0f, 0.0f));
audioEngine.SetListenerDirection(vec3(0.0f, 0.0f, 1.0f), vec3(0.0f, 1.0f, 0.0f));
```

### Controlling Playback

```cpp
// Play
audioEngine.Play(sourceId);

// Pause
audioEngine.Pause(sourceId);

// Stop (resets position to start)
audioEngine.Stop(sourceId);

// Check if playing
if (audioEngine.IsPlaying(sourceId))
{
    // Audio is currently playing
}
```

### Adjusting Source Properties

```cpp
// Volume (0.0 - 1.0)
audioEngine.SetVolume(sourceId, 0.5f);

// Pitch (0.1 - 10.0)
audioEngine.SetPitch(sourceId, 1.5f);

// Looping
audioEngine.SetLooping(sourceId, true);

// Position (3D audio only)
audioEngine.SetPosition(sourceId, vec3(20.0f, 5.0f, 10.0f));
```

### Game Loop Integration

```cpp
void GameUpdate(f32 deltaTime)
{
    // Update audio engine (handles cleanup of finished sounds)
    audioEngine.Update(deltaTime);

    // Update listener position to match camera
    vec3 cameraPos = camera.GetPosition();
    vec3 cameraForward = camera.GetForward();
    vec3 cameraUp = camera.GetUp();

    audioEngine.SetListenerPosition(cameraPos);
    audioEngine.SetListenerDirection(cameraForward, cameraUp);
}
```

### Cleanup

```cpp
// Destroy individual sources
audioEngine.DestroySource(sourceId);

// Shutdown the engine (cleans up all sources)
audioEngine.Shutdown();
```

## Supported Audio Formats

- **WAV**: Uncompressed audio
- **MP3**: MPEG audio
- **FLAC**: Lossless compressed audio
- **OGG**: Vorbis compressed audio

## Architecture

The Audio module consists of:

- **AudioEngine**: Main audio engine managing all audio playback
- **AudioSourceID**: Type-safe handle for audio sources
- **AudioSourceDesc**: Descriptor for creating audio sources
- **AudioFormat/AudioState**: Enums for audio formats and playback states

## Technical Details

- Built on [miniaudio](https://miniaud.io/) - a single-file audio playback library
- Header-only integration for easy deployment
- Automatic cleanup of finished non-looping sources
- Support for multiple concurrent audio sources
- 3D audio spatialization with listener-relative positioning

## Dependencies

- **Base**: Core engine utilities (Types, DebugHandler)
- **MiniAudio**: Audio playback library (v0.11+)

## Integration

To use the Audio module in your project:

1. Add `audio` to your module dependencies in your `.lua` build file:
   ```lua
   local mod = Solution.Util.CreateModuleTable("YourModule", { "base", "audio" })
   ```

2. Include the header:
   ```cpp
   #include <Audio/AudioEngine.h>
   ```

## Limitations (MVP)

- No voice chat/microphone support
- No advanced DSP effects
- No audio streaming for very large files
- Basic 3D audio (no advanced HRTF/reverb)

## Future Enhancements

Potential features for future versions:
- Audio streaming for large files
- Audio groups/categories for volume control
- Advanced 3D audio effects (reverb, occlusion)
- Audio compression/decompression
- Audio resource management/caching
