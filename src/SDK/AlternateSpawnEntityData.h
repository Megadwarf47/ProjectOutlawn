///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/SpatialEntityData.h>
#include <fb/TeamId.h>

namespace fb {
	class AlternateSpawnEntityData : public SpatialEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AlternateSpawnEntityData"); }
		virtual ~AlternateSpawnEntityData() override {}
		AlternateSpawnEntityData() {
			m_team = TeamId::TeamNeutral;
			m_priority = 1.f;
			m_enabled = true;
		};

		TeamId m_team; // 0x60 (96)
		float m_priority; // 0x64 (100)
		bool m_enabled; // 0x68 (104)
	}; // 0x70 (112)
}

