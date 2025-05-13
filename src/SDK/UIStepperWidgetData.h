///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIWidgetEntityData.h>
#include <fb/UIElementColor.h>

namespace fb {
	class UIStepperWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIStepperWidgetData"); }
		virtual ~UIStepperWidgetData() override {}
		UIStepperWidgetData() {
			m_cellSpacing = 2;
			m_cellWidth = 300;
			m_arrowWidth = 30.f;
			m_arrowHeight = 45.f;
		};

		s32 m_cellSpacing; // 0x68 (104)
		s32 m_cellWidth; // 0x6C (108)
		UIElementColor m_arrowColor; // 0x70 (112)
		float m_arrowWidth; // 0x90 (144)
		float m_arrowHeight; // 0x94 (148)
	}; // 0xA0 (160)
}

