///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CharacterSpawnTemplateData.h>
#include <fb/String.h>

namespace fb {
	class BFNamedCharacterSpawnTemplateData : public CharacterSpawnTemplateData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BFNamedCharacterSpawnTemplateData"); }
		virtual ~BFNamedCharacterSpawnTemplateData() override {}
		BFNamedCharacterSpawnTemplateData() {
			m_onHumanSquad = false;
			m_isSquadLeader = false;
		};

		String m_displayName; // 0x48 (72)
		bool m_onHumanSquad; // 0x50 (80)
		bool m_isSquadLeader; // 0x51 (81)
	}; // 0x58 (88)
}

