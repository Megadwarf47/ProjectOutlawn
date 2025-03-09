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
	class PlayerTakeOverTriggerEntityData : public SpatialEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PlayerTakeOverTriggerEntityData"); }
		virtual ~PlayerTakeOverTriggerEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		PlayerTakeOverTriggerEntityData() {
			m_teamId = TeamId::TeamNeutral;
			m_timeToLoseControl = 0.f;
		};

		TeamId m_teamId; // 0x60 (96)
		float m_timeToLoseControl; // 0x64 (100)
	}; // 0x70 (112)
}

