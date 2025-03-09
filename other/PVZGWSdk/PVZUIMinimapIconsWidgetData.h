///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/UIVisualWidgetType.h>
#include <fb/UIWidgetEntityData.h>

namespace fb {
	class PVZUIMinimapIconsWidgetData : public UIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZUIMinimapIconsWidgetData"); }
		virtual ~PVZUIMinimapIconsWidgetData() override {}
		PVZUIMinimapIconsWidgetData() {
			m_visualWidgetType = UIVisualWidgetType::UIVisualWidgetType_Default;
		};

		UIVisualWidgetType m_visualWidgetType; // 0x68 (104)
	}; // 0x70 (112)
}

