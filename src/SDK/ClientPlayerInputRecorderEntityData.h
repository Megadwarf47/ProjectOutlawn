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
	class ClientPlayerInputRecorderEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ClientPlayerInputRecorderEntityData"); }
		virtual ~ClientPlayerInputRecorderEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		ClientPlayerInputRecorderEntityData() {
			m_realm = Realm::Realm_Client;
		};

		Realm m_realm; // 0x18 (24)
		String m_fileNameBase; // 0x20 (32)
		String m_testName; // 0x28 (40)
	}; // 0x30 (48)
}

