///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIWidgetEntityData.h>

namespace fb {
	class UIEquipmentSwitchWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIEquipmentSwitchWidgetData"); }
		virtual ~UIEquipmentSwitchWidgetData() override {}
		UIEquipmentSwitchWidgetData() {
			m_lookAtThreshold = 0.97f;
		};

		float m_lookAtThreshold; // 0x68 (104)
	}; // 0x70 (112)
}

