///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/GameComponentData.h>
#include <fb/KnockbackForce.h>

namespace fb {
	class ExplosionEntityData;
}

namespace fb {
	class KnockbackWeaponComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("KnockbackWeaponComponentData"); }
		virtual ~KnockbackWeaponComponentData() override {}
		KnockbackWeaponComponentData() {
			m_knockbackRadius = 2.f;
		};

		float m_knockbackRadius; // 0x70 (112)
		KnockbackForce m_humanKnockback; // 0x74 (116)
		KnockbackForce m_aiKnockback; // 0x7C (124)
		CtrRef<ExplosionEntityData> m_explosion; // 0x88 (136)
	}; // 0x90 (144)
}

