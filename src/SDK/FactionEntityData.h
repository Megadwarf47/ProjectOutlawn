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
	class FactionEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("FactionEntityData"); }
		virtual ~FactionEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		FactionEntityData() {
			m_realm = Realm::Realm_ClientAndServer;
			m_teamId = TeamId::Team1;
		};

		Realm m_realm; // 0x18 (24)
		TeamId m_teamId; // 0x1C (28)
	}; // 0x20 (32)
}

