///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentData.h>

namespace fb {
	class PVZReviveSphereComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZReviveSphereComponentData"); }
		virtual ~PVZReviveSphereComponentData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		PVZReviveSphereComponentData() {
			m_radius = 4.f;
			m_maxRadius = 4.f;
			m_radiusChangeTime = 0.f;
			m_reviveTime = 3.f;
			m_reviveHPModifier = 1.f;
			m_teamSpecific = true;
			m_excludeSelf = true;
			m_enabled = true;
		};

		float m_radius; // 0x70 (112)
		float m_maxRadius; // 0x74 (116)
		float m_radiusChangeTime; // 0x78 (120)
		float m_reviveTime; // 0x7C (124)
		float m_reviveHPModifier; // 0x80 (128)
		bool m_teamSpecific; // 0x84 (132)
		bool m_excludeSelf; // 0x85 (133)
		bool m_enabled; // 0x86 (134)
	}; // 0x90 (144)
}

