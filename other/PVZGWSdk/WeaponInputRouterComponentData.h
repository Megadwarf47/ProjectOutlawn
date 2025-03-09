///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentData.h>

namespace fb {
	class WeaponInputRouterComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WeaponInputRouterComponentData"); }
		virtual ~WeaponInputRouterComponentData() override {}
		WeaponInputRouterComponentData() {
			m_maxFireRate = 2.f;
			m_rotationCount = 1;
		};

		float m_maxFireRate; // 0x70 (112)
		u32 m_rotationCount; // 0x74 (116)
	}; // 0x80 (128)
}

