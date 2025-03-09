///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ExplosionPackEntityData.h>
#include <fb/SupplyData.h>

namespace fb {
	class SupplySphereEntityData : public ExplosionPackEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SupplySphereEntityData"); }
		virtual ~SupplySphereEntityData() override {}
		SupplySphereEntityData() {
		};

		SupplyData m_supplyData; // 0x190 (400)
	}; // 0x1B0 (432)
}

