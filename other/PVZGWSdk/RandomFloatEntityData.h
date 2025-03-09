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
	class RandomFloatEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RandomFloatEntityData"); }
		virtual ~RandomFloatEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		RandomFloatEntityData() {
			m_realm = Realm::Realm_Client;
			m_min = 0.f;
			m_max = 1.f;
		};

		Realm m_realm; // 0x18 (24)
		float m_min; // 0x1C (28)
		float m_max; // 0x20 (32)
	}; // 0x28 (40)
}

