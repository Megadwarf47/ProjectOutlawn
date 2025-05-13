///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUICppScreenData.h>

namespace fb {
	class UIWorldIconsScreenData : public BFUICppScreenData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIWorldIconsScreenData"); }
		virtual ~UIWorldIconsScreenData() override {}
		UIWorldIconsScreenData() {
			m_iconBorderMarginLeft = 0.f;
			m_iconBorderMarginRight = 0.f;
			m_iconBorderMarginTop = 0.f;
			m_iconBorderMarginBottom = 0.f;
			m_drawDeathFlowIcons = false;
		};

		float m_iconBorderMarginLeft; // 0x30 (48)
		float m_iconBorderMarginRight; // 0x34 (52)
		float m_iconBorderMarginTop; // 0x38 (56)
		float m_iconBorderMarginBottom; // 0x3C (60)
		bool m_drawDeathFlowIcons; // 0x40 (64)
	}; // 0x48 (72)
}

