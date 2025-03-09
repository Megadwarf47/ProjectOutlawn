///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/AudioGraphData.h>
#include <fb/MixerInputInfo.h>
#include <fb/RefArray.h>

namespace fb {
	class AudioGraphParameter;
}

namespace fb {
	class MixerGraphData : public AudioGraphData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MixerGraphData"); }
		virtual ~MixerGraphData() override {}
		MixerGraphData() {
		};

		RefArray<AudioGraphParameter> m_inputs; // 0x38 (56)
		Array<MixerInputInfo> m_mixerInputInfos; // 0x40 (64)
		RefArray<AudioGraphParameter> m_outputs; // 0x48 (72)
	}; // 0x50 (80)
}

