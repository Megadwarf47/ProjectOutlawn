///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentData.h>
#include <fb/Realm.h>

namespace fb {
	class LocatorComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("LocatorComponentData"); }
		virtual ~LocatorComponentData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		LocatorComponentData() {
			m_realm = Realm::Realm_ClientAndServer;
		};

		Realm m_realm; // 0x70 (112)
	}; // 0x80 (128)
}

