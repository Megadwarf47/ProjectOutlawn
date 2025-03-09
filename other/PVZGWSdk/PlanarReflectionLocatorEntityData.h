///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/SpatialEntityData.h>

namespace fb {
	class PlanarReflectionLocatorEntityData : public SpatialEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PlanarReflectionLocatorEntityData"); }
		virtual ~PlanarReflectionLocatorEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		PlanarReflectionLocatorEntityData() {
			m_enable = true;
		};

		bool m_enable; // 0x60 (96)
	}; // 0x70 (112)
}

