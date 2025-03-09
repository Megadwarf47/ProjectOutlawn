///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/EntityData.h>
#include <fb/MessageReciever.h>
#include <fb/ObjectiveType.h>
#include <fb/SquadId.h>
#include <fb/String.h>
#include <fb/TeamId.h>

namespace fb {
	class MissionObjectiveHudData;
}

namespace fb {
	class ObjectiveEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ObjectiveEntityData"); }
		virtual ~ObjectiveEntityData() override {}
		virtual bool getIsNetworkedResource() const override { return true; }
		ObjectiveEntityData() {
			m_objectiveType = ObjectiveType::OTPrimary;
			m_displayTime = -1.f;
			m_delayTime = 0.f;
			m_reciever = MessageReciever::MrAll;
			m_teamId = TeamId::TeamNeutral;
			m_squadId = SquadId::SquadNone;
			m_tutorial = false;
			m_retriggerSuccessOnShowObjective = false;
			m_displaySuccess = true;
		};

		CtrRef<MissionObjectiveHudData> m_hudData; // 0x18 (24)
		ObjectiveType m_objectiveType; // 0x20 (32)
		float m_displayTime; // 0x24 (36)
		float m_delayTime; // 0x28 (40)
		String m_objectiveSid; // 0x30 (48)
		String m_objectiveBriefSid; // 0x38 (56)
		String m_successSid; // 0x40 (64)
		MessageReciever m_reciever; // 0x48 (72)
		TeamId m_teamId; // 0x4C (76)
		SquadId m_squadId; // 0x50 (80)
		bool m_tutorial; // 0x54 (84)
		bool m_retriggerSuccessOnShowObjective; // 0x55 (85)
		bool m_displaySuccess; // 0x56 (86)
	}; // 0x58 (88)
}

