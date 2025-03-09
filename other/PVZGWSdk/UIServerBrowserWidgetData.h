///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIWidgetEntityData.h>
#include <fb/CtrRef.h>

namespace fb {
	class UIElementScrollbarStyle;
	class UIWidgetBlueprint;
}

namespace fb {
	class UIServerBrowserWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIServerBrowserWidgetData"); }
		virtual ~UIServerBrowserWidgetData() override {}
		UIServerBrowserWidgetData() {
			m_scrollbarWidth = 0;
			m_scrollbarMargin = 5;
		};

		CtrRef<UIWidgetBlueprint> m_rowTemplate; // 0x68 (104)
		CtrRef<UIElementScrollbarStyle> m_scrollBarStyle; // 0x70 (112)
		u32 m_scrollbarWidth; // 0x78 (120)
		u32 m_scrollbarMargin; // 0x7C (124)
	}; // 0x80 (128)
}

