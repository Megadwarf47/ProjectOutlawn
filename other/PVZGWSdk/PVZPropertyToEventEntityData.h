///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/Realm.h>

namespace fb {
	class PVZPropertyToEventEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZPropertyToEventEntityData"); }
		virtual ~PVZPropertyToEventEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		PVZPropertyToEventEntityData() {
			m_realm = Realm::Realm_Client;
			m_inFloat = 0.f;
			m_inInt = 0;
			m_inBool = false;
		};

		Realm m_realm; // 0x18 (24)
		float m_inFloat; // 0x1C (28)
		s32 m_inInt; // 0x20 (32)
		bool m_inBool; // 0x24 (36)
	}; // 0x28 (40)
}

