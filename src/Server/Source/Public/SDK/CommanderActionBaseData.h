///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CommanderActionType.h>
#include <fb/EntityData.h>

namespace fb {
	class CommanderActionBaseData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CommanderActionBaseData"); }
		virtual ~CommanderActionBaseData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		CommanderActionBaseData() {
			m_actionType = CommanderActionType::CommanderActionType_SectorScan;
			m_warmUpDuration = 0.f;
			m_executionDuration = 0.f;
			m_coolDownDurationAfterExecution = 10.f;
			m_coolDownDurationAfterEnabling = 0.f;
			m_coolDownDurationAfterAbortingWarmUp = 5.f;
		};

		CommanderActionType m_actionType; // 0x18 (24)
		float m_warmUpDuration; // 0x1C (28)
		float m_executionDuration; // 0x20 (32)
		float m_coolDownDurationAfterExecution; // 0x24 (36)
		float m_coolDownDurationAfterEnabling; // 0x28 (40)
		float m_coolDownDurationAfterAbortingWarmUp; // 0x2C (44)
	}; // 0x30 (48)
}

