///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/SoldierCustomizationAsset.h>

namespace fb {
	class CustomizationTable;
}

namespace fb {
	class VeniceSoldierCustomizationAsset : public SoldierCustomizationAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VeniceSoldierCustomizationAsset"); }
		virtual ~VeniceSoldierCustomizationAsset() override {}
		VeniceSoldierCustomizationAsset() {
		};

		CtrRef<CustomizationTable> m_classSpecializationTable; // 0x60 (96)
	}; // 0x68 (104)
}

