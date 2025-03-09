///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/UIComponentData.h>

namespace fb {
	class UIGeneralCompData : public UIComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIGeneralCompData"); }
		virtual ~UIGeneralCompData() override {}
		UIGeneralCompData() {
			m_gamepadActiveSwitchDelay = 0.f;
		};

		float m_gamepadActiveSwitchDelay; // 0x30 (48)
	}; // 0x38 (56)
}

