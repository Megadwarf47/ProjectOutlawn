///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioGraphNodePort.h>
#include <fb/AudioGraphNodePortGroup.h>
#include <fb/CtrRef.h>

namespace fb {
	class AudioGraphParameter;
	class MixerAsset;
}

namespace fb {
	class MixerSendEntry : public AudioGraphNodePortGroup {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MixerSendEntry"); }
		virtual ~MixerSendEntry() override {}
		MixerSendEntry() {
		};

		AudioGraphNodePort m_in; // 0x10 (16)
		CtrRef<AudioGraphParameter> m_target; // 0x18 (24)
		CtrRef<MixerAsset> m_mixer; // 0x20 (32)
	}; // 0x28 (40)
}

