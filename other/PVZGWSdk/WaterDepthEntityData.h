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
	class WaterDepthEntityData : public SpatialEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WaterDepthEntityData"); }
		virtual ~WaterDepthEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		WaterDepthEntityData() {
			m_realm = Realm::Realm_Client;
			m_defaultEnabled = false;
		};

		Realm m_realm; // 0x60 (96)
		bool m_defaultEnabled; // 0x64 (100)
	}; // 0x70 (112)
}

