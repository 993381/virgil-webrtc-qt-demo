#ifndef VIRGIL_VOIP_PLATFORM_AUDIO_WEBRTC_H_INCLUDED
#define VIRGIL_VOIP_PLATFORM_AUDIO_WEBRTC_H_INCLUDED

#include "PlatformAudio.h"

#include <webrtc/modules/audio_device/include/audio_device.h>

#include <memory>

namespace virgil {
namespace voip {

//
// Implementation based on the WebRTC class "AudioDeviceModule".
//
class PlatformAudioWebRtc : public PlatformAudio {
public:
    explicit PlatformAudioWebRtc(rtc::scoped_refptr<webrtc::AudioDeviceModule> audioDeviceModule);

    //
    // Speaker control.
    //
    virtual bool
    hasSpeaker() const override;

    virtual void
    setSpeakerOn(bool on) override;

private:
    rtc::scoped_refptr<webrtc::AudioDeviceModule> audioDeviceModule_;
};

} // namespace voip
} // namespace virgil


#endif /* VIRGIL_VOIP_PLATFORM_AUDIO_WEBRTC_H_INCLUDED */
