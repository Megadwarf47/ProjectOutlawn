///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentData.h>
#include <fb/MaterialDecl.h>

namespace fb {
	class RadialDamageWeaponComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RadialDamageWeaponComponentData"); }
		virtual ~RadialDamageWeaponComponentData() override {}
		RadialDamageWeaponComponentData() {
			m_damage = 0.f;
			m_radius = 0.f;
			m_enabled = true;
		};

		float m_damage; // 0x70 (112)
		float m_radius; // 0x74 (116)
		MaterialDecl m_materialPair; // 0x78 (120)
		bool m_enabled; // 0x7C (124)
	}; // 0x80 (128)
}

