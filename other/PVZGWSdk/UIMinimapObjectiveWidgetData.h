///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/UIObjectiveWidgetBaseData.h>

namespace fb {
	class UIMinimapObjectiveWidgetData : public UIObjectiveWidgetBaseData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIMinimapObjectiveWidgetData"); }
		virtual ~UIMinimapObjectiveWidgetData() override {}
		UIMinimapObjectiveWidgetData() {
			m_animationSpeed = 1.f;
			m_textAlphaSpeed = 15.f;
			m_delayBeforeComplted = 0.f;
			m_delayBeforeRemoved = 5.f;
			m_cursorFrameRate = 30.f;
			m_backplateFadeSpeed = 1.f;
			m_textFadeInSpeed = 1.f;
			m_backplateOffsetWhenHidden = 32.f;
		};

		float m_animationSpeed; // 0x68 (104)
		float m_textAlphaSpeed; // 0x6C (108)
		float m_delayBeforeComplted; // 0x70 (112)
		float m_delayBeforeRemoved; // 0x74 (116)
		float m_cursorFrameRate; // 0x78 (120)
		float m_backplateFadeSpeed; // 0x7C (124)
		float m_textFadeInSpeed; // 0x80 (128)
		float m_backplateOffsetWhenHidden; // 0x84 (132)
	}; // 0x88 (136)
}

