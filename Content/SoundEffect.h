// This class plays a sound using XAudio2.  It uses a mastering voice provided
// from the Audio class.  The sound data can be read from disk using the MediaReader
// class.
#pragma once

ref class SoundEffect
{
internal:
    SoundEffect();

    void Initialize(
        _In_ IXAudio2* masteringEngine,
        _In_ WAVEFORMATEX* sourceFormat,
        _In_ Platform::Array<byte>^ soundData
    );

    void PlaySound(_In_ float volume);

protected private:
    bool                    m_audioAvailable;
    IXAudio2SourceVoice* m_sourceVoice;
    Platform::Array<byte>^ m_soundData;
};
