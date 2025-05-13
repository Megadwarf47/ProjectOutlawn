///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AnimatedFireEnum.h>
#include <fb/WeaponModifierBase.h>

namespace fb {
	class WeaponAnimatedFireTypeModifier : public WeaponModifierBase {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WeaponAnimatedFireTypeModifier"); }
		virtual ~WeaponAnimatedFireTypeModifier() override {}
		WeaponAnimatedFireTypeModifier() {
			m_animatedFireType = AnimatedFireEnum::AnimatedFireAutomatic;
		};

		AnimatedFireEnum m_animatedFireType; // 0x18 (24)
	}; // 0x20 (32)
}

