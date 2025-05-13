///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Vec3.h>
#include <fb/WeaponModifierBase.h>

namespace fb {
	class WeaponShotModifier : public WeaponModifierBase {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WeaponShotModifier"); }
		virtual ~WeaponShotModifier() override {}
		WeaponShotModifier() {
			m_numberOfBulletsPerShell = -1;
		};

		s32 m_numberOfBulletsPerShell; // 0x18 (24)
		Vec3 m_initialSpeed; // 0x20 (32)
	}; // 0x30 (48)
}

