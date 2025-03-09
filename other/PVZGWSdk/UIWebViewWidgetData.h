///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIWidgetEntityData.h>
#include <fb/String.h>

namespace fb {
	class UIWebViewWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIWebViewWidgetData"); }
		virtual ~UIWebViewWidgetData() override {}
		UIWebViewWidgetData() {
			m_persistent = false;
		};

		String m_url; // 0x68 (104)
		bool m_persistent; // 0x70 (112)
	}; // 0x78 (120)
}

