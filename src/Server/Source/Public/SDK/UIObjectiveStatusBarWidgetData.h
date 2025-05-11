///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIWidgetEntityData.h>

namespace fb {
	class UIObjectiveStatusBarWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIObjectiveStatusBarWidgetData"); }
		virtual ~UIObjectiveStatusBarWidgetData() override {}
		UIObjectiveStatusBarWidgetData() {
			m_blinkRate = 0.2f;
		};

		float m_blinkRate; // 0x68 (104)
	}; // 0x70 (112)
}

