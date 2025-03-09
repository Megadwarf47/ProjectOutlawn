///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/UISpectatorWidgetData.h>

namespace fb {
	class UISpectatorRootWidgetData : public UISpectatorWidgetData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UISpectatorRootWidgetData"); }
		virtual ~UISpectatorRootWidgetData() override {}
		UISpectatorRootWidgetData() {
			m_scoreBarYOffsetWhenSelectionGroupHidden = 25.f;
		};

		float m_scoreBarYOffsetWhenSelectionGroupHidden; // 0x68 (104)
	}; // 0x70 (112)
}

