///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/EntityData.h>
#include <fb/TeamId.h>

namespace fb {
	class TeamData;
}

namespace fb {
	class TeamEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TeamEntityData"); }
		virtual ~TeamEntityData() override {}
		TeamEntityData() {
			m_id = TeamId::TeamNeutral;
		};

		CtrRef<TeamData> m_team; // 0x18 (24)
		TeamId m_id; // 0x20 (32)
	}; // 0x28 (40)
}

