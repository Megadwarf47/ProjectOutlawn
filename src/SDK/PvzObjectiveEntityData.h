///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CrazyDaveType.h>
#include <fb/EntityData.h>
#include <fb/String.h>
#include <fb/TeamId.h>

namespace fb {
	class PvzObjectiveEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PvzObjectiveEntityData"); }
		virtual ~PvzObjectiveEntityData() override {}
		PvzObjectiveEntityData() {
			m_displayTime = -1.f;
			m_teamId = TeamId::TeamNeutral;
			m_crazyDave = CrazyDaveType::CrazyDaveType_None;
			m_showZombieMsg = true;
			m_useZomboss = false;
		};

		float m_displayTime; // 0x18 (24)
		String m_objectiveSid; // 0x20 (32)
		String m_locationId; // 0x28 (40)
		TeamId m_teamId; // 0x30 (48)
		CrazyDaveType m_crazyDave; // 0x34 (52)
		bool m_showZombieMsg; // 0x38 (56)
		bool m_useZomboss; // 0x39 (57)
	}; // 0x40 (64)
}

