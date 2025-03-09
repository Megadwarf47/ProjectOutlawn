///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/PVZCommanderActionType.h>
#include <fb/String.h>

namespace fb {
	class PVZCommanderActionBaseData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZCommanderActionBaseData"); }
		virtual ~PVZCommanderActionBaseData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		PVZCommanderActionBaseData() {
			m_actionType = PVZCommanderActionType::PVZCommanderActionType_SpotTargets;
			m_coolDownDurationAfterExecution = 10.f;
			m_cost = 0;
			m_cameraViewDuration = 8.f;
		};

		PVZCommanderActionType m_actionType; // 0x18 (24)
		float m_coolDownDurationAfterExecution; // 0x1C (28)
		String m_displayName; // 0x20 (32)
		u32 m_cost; // 0x28 (40)
		float m_cameraViewDuration; // 0x2C (44)
	}; // 0x30 (48)
}

