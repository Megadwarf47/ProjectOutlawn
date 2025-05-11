///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DamageModifierComponentData.h>

namespace fb {
	class TeamDamageModifierComponentData : public DamageModifierComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TeamDamageModifierComponentData"); }
		virtual ~TeamDamageModifierComponentData() override {}
		TeamDamageModifierComponentData() {
			m_modifierForFriendly = 1.f;
			m_modifierForNeutral = 1.f;
			m_modifierForHostile = 1.f;
			m_healModifierForFriendly = 1.f;
			m_healModifierForNeutral = 1.f;
			m_healModifierForHostile = 1.f;
		};

		float m_modifierForFriendly; // 0x70 (112)
		float m_modifierForNeutral; // 0x74 (116)
		float m_modifierForHostile; // 0x78 (120)
		float m_healModifierForFriendly; // 0x7C (124)
		float m_healModifierForNeutral; // 0x80 (128)
		float m_healModifierForHostile; // 0x84 (132)
	}; // 0x90 (144)
}

