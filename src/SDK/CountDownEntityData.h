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
	class CountDownEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CountDownEntityData"); }
		virtual ~CountDownEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		CountDownEntityData() {
			m_startValue = 2;
			m_realm = Realm::Realm_Client;
			m_runOnce = true;
		};

		s32 m_startValue; // 0x18 (24)
		Realm m_realm; // 0x1C (28)
		bool m_runOnce; // 0x20 (32)
	}; // 0x28 (40)
}

