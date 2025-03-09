///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/BFUIWidgetEntityData.h>
#include <fb/CellTemplateData.h>
#include <fb/CtrRef.h>

namespace fb {
	class UIElementScrollbarStyle;
}

namespace fb {
	class UIServerBrowserFiltersWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIServerBrowserFiltersWidgetData"); }
		virtual ~UIServerBrowserFiltersWidgetData() override {}
		UIServerBrowserFiltersWidgetData() {
			m_scrollbarWidth = 0;
			m_scrollbarMargin = 5;
		};

		Array<CellTemplateData> m_cellTemplates; // 0x68 (104)
		CtrRef<UIElementScrollbarStyle> m_scrollBarStyle; // 0x70 (112)
		u32 m_scrollbarWidth; // 0x78 (120)
		u32 m_scrollbarMargin; // 0x7C (124)
	}; // 0x80 (128)
}

