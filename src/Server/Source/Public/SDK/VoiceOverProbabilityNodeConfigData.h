///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/VoiceOverNodeConfigData.h>

namespace fb {
	class VoiceOverProbabilityNodeConfigData : public VoiceOverNodeConfigData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VoiceOverProbabilityNodeConfigData"); }
		virtual ~VoiceOverProbabilityNodeConfigData() override {}
		VoiceOverProbabilityNodeConfigData() {
			m_probability = 100.f;
		};

		float m_probability; // 0x18 (24)
	}; // 0x20 (32)
}

