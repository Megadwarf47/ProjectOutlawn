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
	class VisibleAreaEntityData : public SpatialEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VisibleAreaEntityData"); }
		virtual ~VisibleAreaEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		VisibleAreaEntityData() {
			m_realm = Realm::Realm_Client;
			m_visualCullScreenArea = 0.02f;
			m_hideTreshold = 10;
		};

		Realm m_realm; // 0x60 (96)
		float m_visualCullScreenArea; // 0x64 (100)
		u32 m_hideTreshold; // 0x68 (104)
	}; // 0x70 (112)
}

