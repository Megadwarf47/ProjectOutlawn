///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/EntityData.h>
#include <fb/TeamId.h>

namespace fb {
	class AreaPlayerCountEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AreaPlayerCountEntityData"); }
		virtual ~AreaPlayerCountEntityData() override {}
		AreaPlayerCountEntityData() {
			m_enabled = true;
			m_invertAreaTest = false;
		};

		Array<TeamId> m_humanPlayerTeams; // 0x18 (24)
		Array<TeamId> m_aiPlayerTeams; // 0x20 (32)
		Array<TeamId> m_ignoreImmortalCharactersOnTeam; // 0x28 (40)
		bool m_enabled; // 0x30 (48)
		bool m_invertAreaTest; // 0x31 (49)
	}; // 0x38 (56)
}

