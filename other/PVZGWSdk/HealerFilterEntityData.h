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
	class HealerFilterEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("HealerFilterEntityData"); }
		virtual ~HealerFilterEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		HealerFilterEntityData() {
			m_targetTeam = TeamId::Team1;
		};

		TeamId m_targetTeam; // 0x18 (24)
	}; // 0x20 (32)
}

