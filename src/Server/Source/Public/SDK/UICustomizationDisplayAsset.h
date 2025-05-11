///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/UICustomizationDisplay.h>

namespace fb {
	class UICustomizationDisplayAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UICustomizationDisplayAsset"); }
		virtual ~UICustomizationDisplayAsset() override {}
		UICustomizationDisplayAsset() {
		};

		UICustomizationDisplay m_soldierWeapon; // 0x18 (24)
		UICustomizationDisplay m_driver; // 0x20 (32)
		UICustomizationDisplay m_gunner; // 0x28 (40)
	}; // 0x30 (48)
}

