///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentData.h>
#include <fb/TeamId.h>
#include <fb/Vec3.h>

namespace fb {
	class AimAssistNodeComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AimAssistNodeComponentData"); }
		virtual ~AimAssistNodeComponentData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		AimAssistNodeComponentData() {
			m_team = TeamId::Team2;
			m_enabled = true;
			m_getTeamFromOwner = true;
			m_colorPlayerReticle = true;
		};

		Vec3 m_stickyCenterOffset; // 0x70 (112)
		TeamId m_team; // 0x80 (128)
		bool m_enabled; // 0x84 (132)
		bool m_getTeamFromOwner; // 0x85 (133)
		bool m_colorPlayerReticle; // 0x86 (134)
	}; // 0x90 (144)
}

