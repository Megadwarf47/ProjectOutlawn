///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/Realm.h>
#include <fb/TeamId.h>

namespace fb {
	class SpottingEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SpottingEntityData"); }
		virtual ~SpottingEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		SpottingEntityData() {
			m_realm = Realm::Realm_Server;
			m_teamToSpot = TeamId::TeamNeutral;
			m_enabled = true;
		};

		Realm m_realm; // 0x18 (24)
		TeamId m_teamToSpot; // 0x1C (28)
		bool m_enabled; // 0x20 (32)
	}; // 0x28 (40)
}

