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
	class DynamicSettingEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DynamicSettingEntityData"); }
		virtual ~DynamicSettingEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		DynamicSettingEntityData() {
			m_realm = Realm::Realm_ClientAndServer;
		};

		Realm m_realm; // 0x18 (24)
		String m_boolSettingName; // 0x20 (32)
		String m_intSettingName; // 0x28 (40)
		String m_uIntSettingName; // 0x30 (48)
		String m_floatSettingName; // 0x38 (56)
	}; // 0x40 (64)
}

