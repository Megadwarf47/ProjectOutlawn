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
	class BoolHubEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BoolHubEntityData"); }
		virtual ~BoolHubEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		BoolHubEntityData() {
			m_realm = Realm::Realm_Client;
			m_inputSelect = 0;
		};

		Realm m_realm; // 0x18 (24)
		s32 m_inputSelect; // 0x1C (28)
	}; // 0x20 (32)
}

