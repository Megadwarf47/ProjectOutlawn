///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentData.h>
#include <fb/TeamId.h>

namespace fb {
	class HealthBarComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("HealthBarComponentData"); }
		virtual ~HealthBarComponentData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		HealthBarComponentData() {
			m_team = TeamId::TeamNeutral;
			m_showForFriendlyRange = 20.f;
			m_showForEnemyRange = 20.f;
			m_health = 0.f;
			m_maxHealth = 0.f;
			m_showAtZeroHealth = false;
			m_hideHealthbarUIForHealer = false;
		};

		TeamId m_team; // 0x70 (112)
		float m_showForFriendlyRange; // 0x74 (116)
		float m_showForEnemyRange; // 0x78 (120)
		float m_health; // 0x7C (124)
		float m_maxHealth; // 0x80 (128)
		bool m_showAtZeroHealth; // 0x84 (132)
		bool m_hideHealthbarUIForHealer; // 0x85 (133)
	}; // 0x90 (144)
}

