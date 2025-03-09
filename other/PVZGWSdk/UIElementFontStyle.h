///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/CtrRef.h>

namespace fb {
	class UIElementFontDefinition;
}

namespace fb {
	class UIElementFontStyle : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIElementFontStyle"); }
		virtual ~UIElementFontStyle() override {}
		UIElementFontStyle() {
		};

		CtrRef<UIElementFontDefinition> m_hd; // 0x18 (24)
		CtrRef<UIElementFontDefinition> m_hdColorBlind; // 0x20 (32)
		CtrRef<UIElementFontDefinition> m_sd; // 0x28 (40)
		CtrRef<UIElementFontDefinition> m_sdColorBlind; // 0x30 (48)
	}; // 0x38 (56)
}

