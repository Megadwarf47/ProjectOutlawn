///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/String.h>
#include <fb/UIElementEntityData.h>
#include <fb/UIElementText.h>

namespace fb {
	class UIElementFontStyle;
	class UIElementGenericStyle;
}

namespace fb {
	class UIElementCustomEntityData : public UIElementEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIElementCustomEntityData"); }
		virtual ~UIElementCustomEntityData() override {}
		UIElementCustomEntityData() {
		};

		CtrRef<UIElementGenericStyle> m_style; // 0xD0 (208)
		UIElementText m_text; // 0xD8 (216)
		CtrRef<UIElementFontStyle> m_fontStyle; // 0xF8 (248)
		String m_textureId; // 0x100 (256)
	}; // 0x110 (272)
}

