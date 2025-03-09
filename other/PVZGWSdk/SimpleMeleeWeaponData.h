///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/String.h>
#include <fb/WeaponData.h>

namespace fb {
	class SimpleMeleeWeaponData : public WeaponData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SimpleMeleeWeaponData"); }
		virtual ~SimpleMeleeWeaponData() override {}
		SimpleMeleeWeaponData() {
			m_attackRangeMultiplier = 1.f;
			m_useCannedAnimation = false;
		};

		String m_meleeTypeID; // 0x20 (32)
		float m_attackRangeMultiplier; // 0x28 (40)
		bool m_useCannedAnimation; // 0x2C (44)
	}; // 0x30 (48)
}

