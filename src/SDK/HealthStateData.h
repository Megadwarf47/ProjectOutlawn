///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainer.h>
#include <fb/RefArray.h>

namespace fb {
	class BangerSpawnImpulseParams;
	class GameObjectData;
	class NetworkableLoosePartPhysicsData;
	class ObjectBlueprint;
}

namespace fb {
	class HealthStateData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("HealthStateData"); }
		virtual ~HealthStateData() override {}
		HealthStateData() {
			m_health = 100.f;
			m_partIndex = 4294967295;
			m_copyDamageToBanger = true;
			m_physicsEnabled = true;
			m_indestructable = false;
			m_canSupportOtherParts = true;
		};

		RefArray<GameObjectData> m_objects; // 0x10 (16)
		RefArray<NetworkableLoosePartPhysicsData> m_loosePartPhysics; // 0x18 (24)
		CtrRef<ObjectBlueprint> m_spawnedBangerBlueprint; // 0x20 (32)
		CtrRef<BangerSpawnImpulseParams> m_spawnedBangerImpulseParams; // 0x28 (40)
		float m_health; // 0x30 (48)
		u32 m_partIndex; // 0x34 (52)
		bool m_copyDamageToBanger; // 0x38 (56)
		bool m_physicsEnabled; // 0x39 (57)
		bool m_indestructable; // 0x3A (58)
		bool m_canSupportOtherParts; // 0x3B (59)
	}; // 0x40 (64)
}

