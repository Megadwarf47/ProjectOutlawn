///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class WeaponOffsetData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WeaponOffsetData"); }
		virtual ~WeaponOffsetData() override {}
		WeaponOffsetData() {
			m_weaponOffsetX = 0.f;
			m_weaponOffsetY = 0.f;
			m_weaponOffsetZ = 0.f;
			m_weaponZoomedOffsetX = 0.f;
			m_weaponZoomedOffsetY = 0.f;
			m_weaponZoomedOffsetZ = 0.f;
		};

		float m_weaponOffsetX; // 0x10 (16)
		float m_weaponOffsetY; // 0x14 (20)
		float m_weaponOffsetZ; // 0x18 (24)
		float m_weaponZoomedOffsetX; // 0x1C (28)
		float m_weaponZoomedOffsetY; // 0x20 (32)
		float m_weaponZoomedOffsetZ; // 0x24 (36)
	}; // 0x28 (40)
}

