///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIWidgetEntityData.h>

namespace fb {
	class UICommanderPresenceWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UICommanderPresenceWidgetData"); }
		virtual ~UICommanderPresenceWidgetData() override {}
		UICommanderPresenceWidgetData() {
			m_messageDuration = 3.f;
			m_fadeDuration = 0.5f;
		};

		float m_messageDuration; // 0x68 (104)
		float m_fadeDuration; // 0x6C (108)
	}; // 0x70 (112)
}

