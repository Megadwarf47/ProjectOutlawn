///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/EntityData.h>

namespace fb {
	class AllowedVehiclesData;
	class CombatAreaTriggerEntityData;
}

namespace fb {
	class SurroundingGeometryEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SurroundingGeometryEntityData"); }
		virtual ~SurroundingGeometryEntityData() override {}
		SurroundingGeometryEntityData() {
			m_combatAreaIndex = 0;
			m_enabled = true;
		};

		CtrRef<AllowedVehiclesData> m_allowedVehicleList; // 0x18 (24)
		CtrRef<CombatAreaTriggerEntityData> m_combatArea; // 0x20 (32)
		u32 m_combatAreaIndex; // 0x28 (40)
		bool m_enabled; // 0x2C (44)
	}; // 0x30 (48)
}

