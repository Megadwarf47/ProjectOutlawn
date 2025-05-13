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
#include <fb/Vec3.h>

namespace fb {
	class WeaponUnlockAsset;
}

namespace fb {
	class BulldozerTrapezoidAuraBuffEffectData : public BuffEffectData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BulldozerTrapezoidAuraBuffEffectData"); }
		virtual ~BulldozerTrapezoidAuraBuffEffectData() override {}
		BulldozerTrapezoidAuraBuffEffectData() {
			m_damage = 0.f;
			m_damageType = DamageType::DamageType_Normal;
			m_period = 1.f;
			m_length = 0.f;
			m_nearWidth = 0.f;
			m_farWidth = 0.f;
			m_maxYDifference = 0.f;
			m_minPowerThreshold = 0.f;
			m_maxPowerThreshold = 1.f;
			m_mechanicalDeviceDamageOnly = false;
		};

		CtrRef<WeaponUnlockAsset> m_weaponUnlock; // 0x10 (16)
		float m_damage; // 0x18 (24)
		Vec3 m_offset; // 0x20 (32)
		DamageType m_damageType; // 0x30 (48)
		MaterialDecl m_material; // 0x34 (52)
		float m_period; // 0x38 (56)
		float m_length; // 0x3C (60)
		float m_nearWidth; // 0x40 (64)
		float m_farWidth; // 0x44 (68)
		float m_maxYDifference; // 0x48 (72)
		float m_minPowerThreshold; // 0x4C (76)
		float m_maxPowerThreshold; // 0x50 (80)
		bool m_mechanicalDeviceDamageOnly; // 0x54 (84)
	}; // 0x60 (96)
}

