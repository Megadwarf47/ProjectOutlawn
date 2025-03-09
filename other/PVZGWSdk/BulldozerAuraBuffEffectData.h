///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BuffEffectData.h>
#include <fb/CtrRef.h>
#include <fb/DamageType.h>
#include <fb/MaterialDecl.h>

namespace fb {
	class WeaponUnlockAsset;
}

namespace fb {
	class BulldozerAuraBuffEffectData : public BuffEffectData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BulldozerAuraBuffEffectData"); }
		virtual ~BulldozerAuraBuffEffectData() override {}
		BulldozerAuraBuffEffectData() {
			m_damage = 0.f;
			m_damageType = DamageType::DamageType_Normal;
			m_period = 1.f;
			m_radius = 0.f;
			m_verticalOffset = 0.f;
			m_fieldOfView = 360.f;
			m_minPowerThreshold = 0.f;
			m_maxPowerThreshold = 1.f;
			m_mechanicalDeviceDamageOnly = false;
		};

		CtrRef<WeaponUnlockAsset> m_weaponUnlock; // 0x10 (16)
		float m_damage; // 0x18 (24)
		DamageType m_damageType; // 0x1C (28)
		MaterialDecl m_material; // 0x20 (32)
		float m_period; // 0x24 (36)
		float m_radius; // 0x28 (40)
		float m_verticalOffset; // 0x2C (44)
		float m_fieldOfView; // 0x30 (48)
		float m_minPowerThreshold; // 0x34 (52)
		float m_maxPowerThreshold; // 0x38 (56)
		bool m_mechanicalDeviceDamageOnly; // 0x3C (60)
	}; // 0x40 (64)
}

