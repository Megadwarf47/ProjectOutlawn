///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CommanderActionBaseData.h>
#include <fb/CtrRef.h>

namespace fb {
	class PrefabBlueprint;
}

namespace fb {
	class VehicleSpawnActionData : public CommanderActionBaseData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VehicleSpawnActionData"); }
		virtual ~VehicleSpawnActionData() override {}
		VehicleSpawnActionData() {

			m_actionType = CommanderActionType::CommanderActionType_VehicleSpawn;
		};

		CtrRef<PrefabBlueprint> m_landVehiclePrefabBlueprint; // 0x30 (48)
		CtrRef<PrefabBlueprint> m_seaVehiclePrefabBlueprint; // 0x38 (56)
	}; // 0x40 (64)
}

