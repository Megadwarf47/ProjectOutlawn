///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/GhostedProjectileEntityData.h>

namespace fb {
	class CharacterSpawnTemplateData;
	class SoldierBlueprint;
}

namespace fb {
	class SoldierProjectileEntityData : public GhostedProjectileEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoldierProjectileEntityData"); }
		virtual ~SoldierProjectileEntityData() override {}
		virtual bool getIsNetworkedResource() const override { return true; }
		SoldierProjectileEntityData() {
			m_soldierCount = 1;
			m_radius = 1.f;
			m_managedBlueprintIndex = 0;
			m_followShooter = false;
			m_destroyOnShooterKilled = true;
			m_canPickUp = false;
			m_managedByWaveSpawner = false;
		};

		CtrRef<SoldierBlueprint> m_soldier; // 0x130 (304)
		CtrRef<CharacterSpawnTemplateData> m_template; // 0x138 (312)
		s32 m_soldierCount; // 0x140 (320)
		float m_radius; // 0x144 (324)
		s32 m_managedBlueprintIndex; // 0x148 (328)
		bool m_followShooter; // 0x14C (332)
		bool m_destroyOnShooterKilled; // 0x14D (333)
		bool m_canPickUp; // 0x14E (334)
		bool m_managedByWaveSpawner; // 0x14F (335)
	}; // 0x150 (336)
}

