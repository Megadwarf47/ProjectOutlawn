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
	class DamageOverTimeBuffEffectData : public BuffEffectData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DamageOverTimeBuffEffectData"); }
		virtual ~DamageOverTimeBuffEffectData() override {}
		DamageOverTimeBuffEffectData() {
			m_damage = 0.f;
			m_damageType = DamageType::DamageType_Normal;
			m_period = 1.f;
		};

		CtrRef<WeaponUnlockAsset> m_weaponUnlock; // 0x10 (16)
		float m_damage; // 0x18 (24)
		DamageType m_damageType; // 0x1C (28)
		MaterialDecl m_material; // 0x20 (32)
		float m_period; // 0x24 (36)
	}; // 0x28 (40)
}

