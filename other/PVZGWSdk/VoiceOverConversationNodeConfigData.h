///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/VoiceOverContainerConditionMode.h>
#include <fb/VoiceOverConversationInfo.h>
#include <fb/VoiceOverNodeConfigData.h>

namespace fb {
	class VoiceOverConversationNodeConfigData : public VoiceOverNodeConfigData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VoiceOverConversationNodeConfigData"); }
		virtual ~VoiceOverConversationNodeConfigData() override {}
		VoiceOverConversationNodeConfigData() {
			m_conditionMode = VoiceOverContainerConditionMode::VoiceOverContainerConditionMode_All;
			m_probability = 100.f;
		};

		VoiceOverContainerConditionMode m_conditionMode; // 0x18 (24)
		float m_probability; // 0x1C (28)
		VoiceOverConversationInfo m_conversation; // 0x20 (32)
	}; // 0x50 (80)
}

