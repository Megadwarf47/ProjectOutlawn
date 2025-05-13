///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/PVZUICppScreenData.h>
#include <fb/UIVisualWidgetType.h>
#include <fb/Vec4.h>

namespace fb {
	class PVZUICommanderScreenData : public PVZUICppScreenData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZUICommanderScreenData"); }
		virtual ~PVZUICommanderScreenData() override {}
		PVZUICommanderScreenData() {
			m_visualWidgetType = UIVisualWidgetType::UIVisualWidgetType_Default;
		};

		Vec4 m_mapFocusMargins; // 0x30 (48)
		UIVisualWidgetType m_visualWidgetType; // 0x40 (64)
	}; // 0x50 (80)
}

