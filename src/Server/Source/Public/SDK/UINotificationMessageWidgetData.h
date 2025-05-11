///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIWidgetEntityData.h>

namespace fb {
	class UINotificationMessageWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UINotificationMessageWidgetData"); }
		virtual ~UINotificationMessageWidgetData() override {}
		UINotificationMessageWidgetData() {
			m_messageDuration = 3.f;
			m_fadeDuration = 0.5f;
			m_messageMinDuration = 0.1f;
		};

		float m_messageDuration; // 0x68 (104)
		float m_fadeDuration; // 0x6C (108)
		float m_messageMinDuration; // 0x70 (112)
	}; // 0x78 (120)
}

