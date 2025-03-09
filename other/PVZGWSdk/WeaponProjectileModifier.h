///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/WeaponModifierBase.h>

namespace fb {
	class ProjectileEntityData;
}

namespace fb {
	class WeaponProjectileModifier : public WeaponModifierBase {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WeaponProjectileModifier"); }
		virtual ~WeaponProjectileModifier() override {}
		WeaponProjectileModifier() {
			m_maxCount = -1;
		};

		CtrRef<ProjectileEntityData> m_projectileData; // 0x18 (24)
		s32 m_maxCount; // 0x20 (32)
	}; // 0x28 (40)
}

