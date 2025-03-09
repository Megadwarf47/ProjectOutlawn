///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainerPolicyAsset.h>

namespace fb {
	class CustomizationTable;
}

namespace fb {
	class VehicleCustomizationAsset : public DataContainerPolicyAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VehicleCustomizationAsset"); }
		virtual ~VehicleCustomizationAsset() override {}
		VehicleCustomizationAsset() {
		};

		CtrRef<CustomizationTable> m_customization; // 0x18 (24)
	}; // 0x20 (32)
}

