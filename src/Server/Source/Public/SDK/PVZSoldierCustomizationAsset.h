///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/SoldierCustomizationAsset.h>
#include <fb/String.h>

namespace fb {
	class GestureTable;
	class WeaponVisualTable;
}

namespace fb {
	class PVZSoldierCustomizationAsset : public SoldierCustomizationAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZSoldierCustomizationAsset"); }
		virtual ~PVZSoldierCustomizationAsset() override {}
		PVZSoldierCustomizationAsset() {
		};

		CtrRef<WeaponVisualTable> m_weaponVisualTable; // 0x60 (96)
		CtrRef<GestureTable> m_gestureTable; // 0x68 (104)
		String m_classTutorialSid; // 0x70 (112)
	}; // 0x78 (120)
}

