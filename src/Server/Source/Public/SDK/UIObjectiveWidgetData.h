///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/UIObjectiveWidgetBaseData.h>

namespace fb {
	class UIObjectiveWidgetData : public UIObjectiveWidgetBaseData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIObjectiveWidgetData"); }
		virtual ~UIObjectiveWidgetData() override {}
		UIObjectiveWidgetData() {
			m_animationSpeed = 1.f;
			m_textFadeInSpeed = 1.f;
			m_delayBeforeFadingIn = 0.f;
			m_delayBeforeFadingOut = 5.f;
			m_cursorFrameRate = 30.f;
		};

		float m_animationSpeed; // 0x68 (104)
		float m_textFadeInSpeed; // 0x6C (108)
		float m_delayBeforeFadingIn; // 0x70 (112)
		float m_delayBeforeFadingOut; // 0x74 (116)
		float m_cursorFrameRate; // 0x78 (120)
	}; // 0x80 (128)
}

