///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/RefArray.h>
#include <fb/String.h>

namespace fb {
	class UnlockAssetBase;
}

namespace fb {
	class CustomizationUnlockParts : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CustomizationUnlockParts"); }
		virtual ~CustomizationUnlockParts() override {}
		CustomizationUnlockParts() {
			m_defaultSelectionIndex = 0;
			m_selectable = true;
		};

		String m_uiCategorySid; // 0x10 (16)
		u32 m_defaultSelectionIndex; // 0x18 (24)
		RefArray<UnlockAssetBase> m_selectableUnlocks; // 0x20 (32)
		bool m_selectable; // 0x28 (40)
	}; // 0x30 (48)
}

