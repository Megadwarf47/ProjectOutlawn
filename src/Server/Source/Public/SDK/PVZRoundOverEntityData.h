///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/TeamId.h>

namespace fb {
	class PVZRoundOverEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZRoundOverEntityData"); }
		virtual ~PVZRoundOverEntityData() override {}
		PVZRoundOverEntityData() {
			m_team = TeamId::TeamNeutral;
		};

		TeamId m_team; // 0x18 (24)
	}; // 0x20 (32)
}

