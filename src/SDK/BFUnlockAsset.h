///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/InventoryType.h>
#include <fb/UnlockAsset.h>

namespace fb {
	class BFUnlockAsset : public UnlockAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BFUnlockAsset"); }
		virtual ~BFUnlockAsset() override {}
		BFUnlockAsset() {
			m_inventoryType = InventoryType::IT_None;
			m_zoomLevelStandard = 0;
			m_zoomLevelToggled = 14;
			m_useListAsExclusion = true;
		};

		Array<u32> m_compatibilityIdentifiers; // 0x40 (64)
		InventoryType m_inventoryType; // 0x48 (72)
		u32 m_zoomLevelStandard; // 0x4C (76)
		u32 m_zoomLevelToggled; // 0x50 (80)
		bool m_useListAsExclusion; // 0x54 (84)
	}; // 0x58 (88)
}

