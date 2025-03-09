///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/Realm.h>
#include <fb/String.h>

namespace fb {
	class PropertyCastEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PropertyCastEntityData"); }
		virtual ~PropertyCastEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		PropertyCastEntityData() {
			m_realm = Realm::Realm_Server;
			m_floatValue = 0.f;
			m_intValue = 0;
			m_boolValue = false;
		};

		Realm m_realm; // 0x18 (24)
		float m_floatValue; // 0x1C (28)
		s32 m_intValue; // 0x20 (32)
		String m_stringValue; // 0x28 (40)
		bool m_boolValue; // 0x30 (48)
	}; // 0x38 (56)
}

