///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/RefArray.h>

namespace fb {
	class TeamLogoMapping;
}

namespace fb {
	class PlayerLogoEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PlayerLogoEntityData"); }
		virtual ~PlayerLogoEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		PlayerLogoEntityData() {
		};

		RefArray<TeamLogoMapping> m_teamGroundVehicleLogos; // 0x18 (24)
		RefArray<TeamLogoMapping> m_teamAirVehicleLogos; // 0x20 (32)
	}; // 0x28 (40)
}

