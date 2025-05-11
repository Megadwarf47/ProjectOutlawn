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
	class FloatEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("FloatEntityData"); }
		virtual ~FloatEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		FloatEntityData() {
			m_realm = Realm::Realm_Server;
			m_defaultValue = 0.f;
			m_incDecValue = 1.f;
		};

		Realm m_realm; // 0x18 (24)
		float m_defaultValue; // 0x1C (28)
		float m_incDecValue; // 0x20 (32)
	}; // 0x28 (40)
}

