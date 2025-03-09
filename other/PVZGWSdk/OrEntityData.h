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
	class OrEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("OrEntityData"); }
		virtual ~OrEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		OrEntityData() {
			m_realm = Realm::Realm_Client;
			m_inputCount = 2;
		};

		Realm m_realm; // 0x18 (24)
		u32 m_inputCount; // 0x1C (28)
	}; // 0x20 (32)
}

