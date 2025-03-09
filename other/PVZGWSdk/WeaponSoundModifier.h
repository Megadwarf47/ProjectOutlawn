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
	class SoundAsset;
}

namespace fb {
	class WeaponSoundModifier : public WeaponModifierBase {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WeaponSoundModifier"); }
		virtual ~WeaponSoundModifier() override {}
		WeaponSoundModifier() {
		};

		CtrRef<SoundAsset> m_sound; // 0x18 (24)
	}; // 0x20 (32)
}

