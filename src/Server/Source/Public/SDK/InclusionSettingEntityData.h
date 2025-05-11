///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/EntityData.h>
#include <fb/Realm.h>
#include <fb/String.h>

namespace fb {
	class InclusionSettingEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("InclusionSettingEntityData"); }
		virtual ~InclusionSettingEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		InclusionSettingEntityData() {
			m_realm = Realm::Realm_Server;
		};

		Realm m_realm; // 0x18 (24)
		String m_setting; // 0x20 (32)
		Array<String> m_settings; // 0x28 (40)
	}; // 0x30 (48)
}

