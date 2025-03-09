///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GamePhysicsEntityData.h>
#include <fb/MaterialDecl.h>
#include <fb/TeamId.h>

namespace fb {
	class ControllableEntityData : public GamePhysicsEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ControllableEntityData"); }
		virtual ~ControllableEntityData() override {}
		virtual bool getIsEntityOwner() const override { return true; }
		ControllableEntityData() {
			m_defaultTeam = TeamId::TeamNeutral;
			m_lowHealthThreshold = 50.f;
			m_usePrediction = true;
			m_resetTeamOnLastPlayerExits = true;
			m_immortal = false;
			m_fakeImmortal = false;
			m_forceForegroundRendering = false;
		};

		TeamId m_defaultTeam; // 0x90 (144)
		float m_lowHealthThreshold; // 0x94 (148)
		MaterialDecl m_materialPair; // 0x98 (152)
		bool m_usePrediction; // 0x9C (156)
		bool m_resetTeamOnLastPlayerExits; // 0x9D (157)
		bool m_immortal; // 0x9E (158)
		bool m_fakeImmortal; // 0x9F (159)
		bool m_forceForegroundRendering; // 0xA0 (160)
	}; // 0xB0 (176)
}

