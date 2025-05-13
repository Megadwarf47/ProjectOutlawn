///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CtrRef.h>
#include <fb/GameComponentEntityData.h>
#include <fb/WeaponClassEnum.h>
#include <fb/WeaponStateData.h>

namespace fb {
	class GameAIWeaponData;
	class WeaponData;
	class WeaponFiringData;
}

namespace fb {
	class WeaponEntityData : public GameComponentEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WeaponEntityData"); }
		virtual ~WeaponEntityData() override {}
		WeaponEntityData() {
			m_weaponClass = WeaponClassEnum::wc12gauge;
		};

		WeaponClassEnum m_weaponClass; // 0x80 (128)
		Array<WeaponStateData> m_weaponStates; // 0x88 (136)
		CtrRef<WeaponFiringData> m_weaponFiring; // 0x90 (144)
		CtrRef<WeaponData> m_customWeaponType; // 0x98 (152)
		CtrRef<GameAIWeaponData> m_aiData; // 0xA0 (160)
	}; // 0xB0 (176)
}

