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
	class FloatCacheEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("FloatCacheEntityData"); }
		virtual ~FloatCacheEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		FloatCacheEntityData() {
			m_realm = Realm::Realm_Server;
			m_inValue = 0.f;
		};

		Realm m_realm; // 0x18 (24)
		float m_inValue; // 0x1C (28)
	}; // 0x20 (32)
}

