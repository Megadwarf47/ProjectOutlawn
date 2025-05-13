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
	class BoolEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BoolEntityData"); }
		virtual ~BoolEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		BoolEntityData() {
			m_realm = Realm::Realm_Server;
			m_defaultValue = false;
		};

		Realm m_realm; // 0x18 (24)
		bool m_defaultValue; // 0x1C (28)
	}; // 0x20 (32)
}

