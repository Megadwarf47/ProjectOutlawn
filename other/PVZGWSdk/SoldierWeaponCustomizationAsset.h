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
	class SoldierWeaponCustomizationAsset : public DataContainerPolicyAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoldierWeaponCustomizationAsset"); }
		virtual ~SoldierWeaponCustomizationAsset() override {}
		SoldierWeaponCustomizationAsset() {
		};

		CtrRef<CustomizationTable> m_customization; // 0x18 (24)
	}; // 0x20 (32)
}

