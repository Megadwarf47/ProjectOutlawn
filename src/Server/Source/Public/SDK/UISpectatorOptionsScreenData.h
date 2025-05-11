///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUICppScreenData.h>
#include <fb/UIElementColor.h>

namespace fb {
	class UISpectatorOptionsScreenData : public BFUICppScreenData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UISpectatorOptionsScreenData"); }
		virtual ~UISpectatorOptionsScreenData() override {}
		UISpectatorOptionsScreenData() {
		};

		UIElementColor m_backgroundTintColor; // 0x30 (48)
	}; // 0x50 (80)
}

