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
	class RoundOverEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RoundOverEntityData"); }
		virtual ~RoundOverEntityData() override {}
		RoundOverEntityData() {
			m_team = TeamId::TeamNeutral;
		};

		TeamId m_team; // 0x18 (24)
	}; // 0x20 (32)
}

