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
	class SoldierFallbackEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoldierFallbackEntityData"); }
		virtual ~SoldierFallbackEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		SoldierFallbackEntityData() {
			m_targetTeam = TeamId::Team2;
			m_triggerTeleportInput = 1573615674;
			m_holdTime = 1.f;
		};

		TeamId m_targetTeam; // 0x18 (24)
		s32 m_triggerTeleportInput; // 0x1C (28)
		float m_holdTime; // 0x20 (32)
	}; // 0x28 (40)
}

