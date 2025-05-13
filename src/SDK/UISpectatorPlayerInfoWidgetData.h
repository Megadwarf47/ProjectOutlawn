///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/UISpectatorWidgetData.h>

namespace fb {
	class UICustomizationDisplayAsset;
}

namespace fb {
	class UISpectatorPlayerInfoWidgetData : public UISpectatorWidgetData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UISpectatorPlayerInfoWidgetData"); }
		virtual ~UISpectatorPlayerInfoWidgetData() override {}
		UISpectatorPlayerInfoWidgetData() {
		};

		CtrRef<UICustomizationDisplayAsset> m_customizationDisplay; // 0x68 (104)
	}; // 0x70 (112)
}

