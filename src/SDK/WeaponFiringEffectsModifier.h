///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/FireEffectData.h>
#include <fb/WeaponModifierBase.h>

namespace fb {
	class WeaponFiringEffectsModifier : public WeaponModifierBase {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WeaponFiringEffectsModifier"); }
		virtual ~WeaponFiringEffectsModifier() override {}
		WeaponFiringEffectsModifier() {
		};

		Array<FireEffectData> m_fireEffects1p; // 0x18 (24)
		Array<FireEffectData> m_fireEffects3p; // 0x20 (32)
	}; // 0x28 (40)
}

