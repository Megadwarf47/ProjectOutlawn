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
	class GunshipDeployActionData : public CommanderActionBaseData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("GunshipDeployActionData"); }
		virtual ~GunshipDeployActionData() override {}
		GunshipDeployActionData() {
			m_damageFromEnemyOwnershipFrequency = 1.f;
			m_damageFromEnemyOwnershipPerSecond = 100.f;

			m_actionType = CommanderActionType::CommanderActionType_GunshipDeploy;
			m_executionDuration = -1.f;
		};

		CtrRef<PrefabBlueprint> m_gunshipPrefabBlueprint; // 0x30 (48)
		float m_damageFromEnemyOwnershipFrequency; // 0x38 (56)
		float m_damageFromEnemyOwnershipPerSecond; // 0x3C (60)
	}; // 0x40 (64)
}

