///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIWidgetEntityData.h>

namespace fb {
	class UISpectatorPlayerNameWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UISpectatorPlayerNameWidgetData"); }
		virtual ~UISpectatorPlayerNameWidgetData() override {}
		UISpectatorPlayerNameWidgetData() {
			m_playerNameRightPadding = 6.f;
		};

		float m_playerNameRightPadding; // 0x68 (104)
	}; // 0x70 (112)
}

