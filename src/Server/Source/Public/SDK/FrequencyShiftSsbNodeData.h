///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioGraphNodeData.h>
#include <fb/AudioGraphNodePort.h>
#include <fb/FrequencyShiftSsbFilter.h>
#include <fb/SoundGraphPluginRef.h>

namespace fb {
	class FrequencyShiftSsbNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("FrequencyShiftSsbNodeData"); }
		virtual ~FrequencyShiftSsbNodeData() override {}
		FrequencyShiftSsbNodeData() {
			m_filter = FrequencyShiftSsbFilter::FrequencyShiftSsbFilter_Fir64;
		};

		AudioGraphNodePort m_in; // 0x10 (16)
		AudioGraphNodePort m_frequency; // 0x18 (24)
		AudioGraphNodePort m_out; // 0x20 (32)
		FrequencyShiftSsbFilter m_filter; // 0x28 (40)
		SoundGraphPluginRef m_plugin; // 0x2C (44)
	}; // 0x30 (48)
}

