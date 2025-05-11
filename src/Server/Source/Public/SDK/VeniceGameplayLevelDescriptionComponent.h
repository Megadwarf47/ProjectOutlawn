///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/LevelDescriptionComponent.h>
#include <fb/Vec4.h>

namespace fb {
	class VeniceGameplayLevelDescriptionComponent : public LevelDescriptionComponent {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VeniceGameplayLevelDescriptionComponent"); }
		virtual ~VeniceGameplayLevelDescriptionComponent() override {}
		VeniceGameplayLevelDescriptionComponent() {
			m_defaultTeam1Faction = 0;
			m_defaultTeam2Faction = 1;
			m_defaultTeam3Faction = 0;
			m_defaultTeam4Faction = 1;
			m_allowParachuteFromMobileSpawnpoint = true;
		};

		s32 m_defaultTeam1Faction; // 0x10 (16)
		s32 m_defaultTeam2Faction; // 0x14 (20)
		Vec4 m_adaptiveCamoColor1; // 0x20 (32)
		Vec4 m_adaptiveCamoColor2; // 0x30 (48)
		Vec4 m_adaptiveCamoColor3; // 0x40 (64)
		Vec4 m_adaptiveCamoColor4; // 0x50 (80)
		s32 m_defaultTeam3Faction; // 0x60 (96)
		s32 m_defaultTeam4Faction; // 0x64 (100)
		bool m_allowParachuteFromMobileSpawnpoint; // 0x68 (104)
	}; // 0x70 (112)
}

