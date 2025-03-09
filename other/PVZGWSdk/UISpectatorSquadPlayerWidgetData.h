///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/UIHighlightWidgetData.h>

namespace fb {
	class UISpectatorSquadPlayerWidgetData : public UIHighlightWidgetData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UISpectatorSquadPlayerWidgetData"); }
		virtual ~UISpectatorSquadPlayerWidgetData() override {}
		UISpectatorSquadPlayerWidgetData() {
			m_killsDeathsWidth = 62.f;
		};

		float m_killsDeathsWidth; // 0x68 (104)
	}; // 0x70 (112)
}

