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
#include <fb/VoiceOverStructureNode.h>
#include <fb/VoiceOverValueConnection.h>

namespace fb {
	class VoiceOverIntervalNode;
	class VoiceOverStructureNode;
}

namespace fb {
	class VoiceOverContainerNode : public VoiceOverStructureNode {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VoiceOverContainerNode"); }
		virtual ~VoiceOverContainerNode() override {}
		VoiceOverContainerNode() {
			m_conditionMode = VoiceOverContainerConditionMode::VoiceOverContainerConditionMode_All;
			m_probability = 100.f;
			m_alwaysResetInterval = false;
		};

		Array<VoiceOverValueConnection> m_condition; // 0x18 (24)
		CtrRef<VoiceOverIntervalNode> m_interval; // 0x20 (32)
		RefArray<VoiceOverStructureNode> m_trueRelationship; // 0x28 (40)
		RefArray<VoiceOverStructureNode> m_falseRelationship; // 0x30 (48)
		VoiceOverContainerConditionMode m_conditionMode; // 0x38 (56)
		float m_probability; // 0x3C (60)
		bool m_alwaysResetInterval; // 0x40 (64)
	}; // 0x48 (72)
}

