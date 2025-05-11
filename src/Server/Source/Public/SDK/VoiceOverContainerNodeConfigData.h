///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/VoiceOverContainerConditionMode.h>
#include <fb/VoiceOverNodeConfigData.h>

namespace fb {
	class VoiceOverContainerNodeConfigData : public VoiceOverNodeConfigData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VoiceOverContainerNodeConfigData"); }
		virtual ~VoiceOverContainerNodeConfigData() override {}
		VoiceOverContainerNodeConfigData() {
			m_conditionMode = VoiceOverContainerConditionMode::VoiceOverContainerConditionMode_All;
			m_probability = 100.f;
			m_alwaysResetInterval = false;
		};

		VoiceOverContainerConditionMode m_conditionMode; // 0x18 (24)
		float m_probability; // 0x1C (28)
		bool m_alwaysResetInterval; // 0x20 (32)
	}; // 0x28 (40)
}

