///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIWidgetEntityData.h>

namespace fb {
	class UIBasicLoadingIndicatorWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIBasicLoadingIndicatorWidgetData"); }
		virtual ~UIBasicLoadingIndicatorWidgetData() override {}
		UIBasicLoadingIndicatorWidgetData() {
			m_startVisible = false;
		};

		bool m_startVisible; // 0x68 (104)
	}; // 0x70 (112)
}

