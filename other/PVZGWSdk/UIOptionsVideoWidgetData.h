///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/UIOptionsListWidgetData.h>

namespace fb {
	class UIOptionsVideoWidgetData : public UIOptionsListWidgetData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIOptionsVideoWidgetData"); }
		virtual ~UIOptionsVideoWidgetData() override {}
		UIOptionsVideoWidgetData() {
			m_advancedListStartIndex = 0;
		};

		u32 m_advancedListStartIndex; // 0x90 (144)
	}; // 0x98 (152)
}

