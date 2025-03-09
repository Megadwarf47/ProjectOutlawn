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
	class RandomIntEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RandomIntEntityData"); }
		virtual ~RandomIntEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		RandomIntEntityData() {
			m_realm = Realm::Realm_Client;
			m_start = 0;
			m_count = 1;
		};

		Realm m_realm; // 0x18 (24)
		s32 m_start; // 0x1C (28)
		s32 m_count; // 0x20 (32)
	}; // 0x28 (40)
}

