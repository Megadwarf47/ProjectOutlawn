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
	class IntEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("IntEntityData"); }
		virtual ~IntEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		IntEntityData() {
			m_realm = Realm::Realm_Server;
			m_defaultValue = 0;
			m_incDecValue = 1;
			m_in = 0;
		};

		Realm m_realm; // 0x18 (24)
		s32 m_defaultValue; // 0x1C (28)
		s32 m_incDecValue; // 0x20 (32)
		s32 m_in; // 0x24 (36)
	}; // 0x28 (40)
}

