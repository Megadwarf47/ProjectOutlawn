///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CharacterCustomizationAsset.h>
#include <fb/CtrRef.h>

namespace fb {
	class CustomizationTable;
}

namespace fb {
	class SoldierCustomizationAsset : public CharacterCustomizationAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoldierCustomizationAsset"); }
		virtual ~SoldierCustomizationAsset() override {}
		SoldierCustomizationAsset() {
		};

		CtrRef<CustomizationTable> m_weaponTable; // 0x58 (88)
	}; // 0x60 (96)
}

