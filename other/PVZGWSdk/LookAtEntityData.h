///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/SpatialEntityData.h>

namespace fb {
	class LookAtEntityData : public SpatialEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("LookAtEntityData"); }
		virtual ~LookAtEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		LookAtEntityData() {
			m_runOnce = true;
			m_useStaticDirection = false;
			m_enabled = true;
		};

		bool m_runOnce; // 0x60 (96)
		bool m_useStaticDirection; // 0x61 (97)
		bool m_enabled; // 0x62 (98)
	}; // 0x70 (112)
}

