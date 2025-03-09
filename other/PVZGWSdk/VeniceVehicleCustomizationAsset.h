///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/String.h>
#include <fb/VehicleCategory.h>
#include <fb/VehicleCustomizationAsset.h>

namespace fb {
	class VeniceVehicleCustomizationAsset : public VehicleCustomizationAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VeniceVehicleCustomizationAsset"); }
		virtual ~VeniceVehicleCustomizationAsset() override {}
		VeniceVehicleCustomizationAsset() {
			m_category = VehicleCategory::VehicleCategory_Land;
			m_spacerIndex = 0;
		};

		VehicleCategory m_category; // 0x20 (32)
		String m_nameSid; // 0x28 (40)
		s32 m_spacerIndex; // 0x30 (48)
	}; // 0x38 (56)
}

