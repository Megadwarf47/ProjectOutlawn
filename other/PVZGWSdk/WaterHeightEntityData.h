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
	class WaterHeightEntityData : public SpatialEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WaterHeightEntityData"); }
		virtual ~WaterHeightEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		WaterHeightEntityData() {
			m_realm = Realm::Realm_ClientAndServer;
			m_autoStart = true;
		};

		Realm m_realm; // 0x60 (96)
		bool m_autoStart; // 0x64 (100)
	}; // 0x70 (112)
}

