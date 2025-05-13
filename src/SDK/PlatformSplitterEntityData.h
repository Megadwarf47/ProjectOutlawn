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
	class PlatformSplitterEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PlatformSplitterEntityData"); }
		virtual ~PlatformSplitterEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		PlatformSplitterEntityData() {
			m_realm = Realm::Realm_Server;
			m_runOnce = false;
		};

		Realm m_realm; // 0x18 (24)
		bool m_runOnce; // 0x1C (28)
	}; // 0x20 (32)
}

