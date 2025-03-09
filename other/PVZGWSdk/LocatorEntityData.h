///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Realm.h>
#include <fb/SpatialEntityData.h>

namespace fb {
	class LocatorEntityData : public SpatialEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("LocatorEntityData"); }
		virtual ~LocatorEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		LocatorEntityData() {
			m_realm = Realm::Realm_ClientAndServer;
		};

		Realm m_realm; // 0x60 (96)
	}; // 0x70 (112)
}

