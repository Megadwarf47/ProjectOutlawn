///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Asset.h>
#include <fb/RefArray.h>
#include <fb/UIFontMapping.h>

namespace fb {
	class UITextDatabase;
}

namespace fb {
	class UIFontMappingCollection : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIFontMappingCollection"); }
		virtual ~UIFontMappingCollection() override {}
		UIFontMappingCollection() {
		};

		Array<UIFontMapping> m_fonts; // 0x18 (24)
		RefArray<UITextDatabase> m_textDatabase; // 0x20 (32)
	}; // 0x28 (40)
}

