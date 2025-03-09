///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUICppScreenData.h>
#include <fb/CtrRef.h>
#include <fb/UIVisualWidgetType.h>
#include <fb/Vec4.h>

namespace fb {
	class UIElementFontStyle;
}

namespace fb {
	class UIDeployScreenData : public BFUICppScreenData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIDeployScreenData"); }
		virtual ~UIDeployScreenData() override {}
		UIDeployScreenData() {
			m_visualWidgetType = UIVisualWidgetType::UIVisualWidgetType_Default;
		};

		Vec4 m_mapFocusMargins; // 0x30 (48)
		UIVisualWidgetType m_visualWidgetType; // 0x40 (64)
		CtrRef<UIElementFontStyle> m_vehicleNameFontStyle; // 0x48 (72)
	}; // 0x50 (80)
}

