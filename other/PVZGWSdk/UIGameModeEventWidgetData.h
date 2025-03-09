///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIWidgetEntityData.h>

namespace fb {
	class UIGameModeEventWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIGameModeEventWidgetData"); }
		virtual ~UIGameModeEventWidgetData() override {}
		UIGameModeEventWidgetData() {
			m_textBlinkSpeed = 1.f;
		};

		float m_textBlinkSpeed; // 0x68 (104)
	}; // 0x70 (112)
}

