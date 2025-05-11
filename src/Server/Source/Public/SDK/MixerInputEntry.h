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
#include <fb/MixerValueAccumulateMode.h>

namespace fb {
	class AudioGraphParameter;
}

namespace fb {
	class MixerInputEntry : public AudioGraphNodePortGroup {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MixerInputEntry"); }
		virtual ~MixerInputEntry() override {}
		MixerInputEntry() {
			m_accumulateMode = MixerValueAccumulateMode::MixerValueAccumulateMode_None;
			m_keepValue = false;
		};

		AudioGraphNodePort m_out; // 0x10 (16)
		CtrRef<AudioGraphParameter> m_source; // 0x18 (24)
		MixerValueAccumulateMode m_accumulateMode; // 0x20 (32)
		bool m_keepValue; // 0x24 (36)
	}; // 0x28 (40)
}

