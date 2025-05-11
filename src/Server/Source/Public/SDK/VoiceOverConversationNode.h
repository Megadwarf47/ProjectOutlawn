///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CtrRef.h>
#include <fb/RefArray.h>
#include <fb/VoiceOverContainerConditionMode.h>
#include <fb/VoiceOverConversationInfo.h>
#include <fb/VoiceOverStructureNode.h>
#include <fb/VoiceOverValueConnection.h>

namespace fb {
	class VoiceOverIntervalNode;
	class VoiceOverStructureNode;
}

namespace fb {
	class VoiceOverConversationNode : public VoiceOverStructureNode {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VoiceOverConversationNode"); }
		virtual ~VoiceOverConversationNode() override {}
		VoiceOverConversationNode() {
			m_conditionMode = VoiceOverContainerConditionMode::VoiceOverContainerConditionMode_All;
			m_probability = 100.f;
		};

		Array<VoiceOverValueConnection> m_condition; // 0x18 (24)
		VoiceOverValueConnection m_pronunciationIndex; // 0x20 (32)
		CtrRef<VoiceOverIntervalNode> m_interval; // 0x30 (48)
		RefArray<VoiceOverStructureNode> m_finishedRelationship; // 0x38 (56)
		RefArray<VoiceOverStructureNode> m_blockedRelationship; // 0x40 (64)
		VoiceOverContainerConditionMode m_conditionMode; // 0x48 (72)
		float m_probability; // 0x4C (76)
		VoiceOverConversationInfo m_conversation; // 0x50 (80)
	}; // 0x80 (128)
}

