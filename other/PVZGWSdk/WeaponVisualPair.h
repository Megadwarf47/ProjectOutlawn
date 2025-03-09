///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainer.h>
#include <fb/RefArray.h>

namespace fb {
	class CustomizationTable;
	class UnlockAssetBase;
	class VisualUnlockAsset;
}

namespace fb {
	class WeaponVisualPair : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WeaponVisualPair"); }
		virtual ~WeaponVisualPair() override {}
		WeaponVisualPair() {
		};

		CtrRef<UnlockAssetBase> m_weapon; // 0x10 (16)
		RefArray<VisualUnlockAsset> m_visuals; // 0x18 (24)
		CtrRef<CustomizationTable> m_addonVisualTable; // 0x20 (32)
	}; // 0x28 (40)
}

