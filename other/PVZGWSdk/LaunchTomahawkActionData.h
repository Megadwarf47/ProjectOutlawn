///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CommanderActionBaseData.h>
#include <fb/CtrRef.h>
#include <fb/LinearTransform.h>

namespace fb {
	class ProjectileBlueprint;
	class SoldierWeaponUnlockAsset;
}

namespace fb {
	class LaunchTomahawkActionData : public CommanderActionBaseData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("LaunchTomahawkActionData"); }
		virtual ~LaunchTomahawkActionData() override {}
		LaunchTomahawkActionData() {
			m_initialSpeed = 20.f;

			m_actionType = CommanderActionType::CommanderActionType_LaunchTomahawk;
		};

		CtrRef<ProjectileBlueprint> m_projectile; // 0x30 (48)
		CtrRef<SoldierWeaponUnlockAsset> m_weapon; // 0x38 (56)
		float m_initialSpeed; // 0x40 (64)
		LinearTransform m_launchTransform; // 0x50 (80)
	}; // 0x90 (144)
}

