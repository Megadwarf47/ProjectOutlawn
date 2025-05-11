///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CtrRef.h>
#include <fb/RefArray.h>
#include <fb/String.h>
#include <fb/UINodeData.h>
#include <fb/UIWidgetProperty.h>
#include <fb/WidgetHorisontalAlignment.h>
#include <fb/WidgetVerticalAlignment.h>

namespace fb {
	class UIDataBinding;
	class UINodePort;
	class UIWidgetAsset;
}

namespace fb {
	class WidgetNode : public UINodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WidgetNode"); }
		virtual ~WidgetNode() override {}
		WidgetNode() {
			m_focusIndex = 0;
			m_verticalAlign = WidgetVerticalAlignment::WVA_Center;
			m_horisontalAlign = WidgetHorisontalAlignment::WHA_Center;
			m_zDepthLevel = 0;
			m_alwaysInFocus = false;
			m_isDisabled = false;
		};

		CtrRef<UIWidgetAsset> m_widgetAsset; // 0x28 (40)
		s32 m_focusIndex; // 0x30 (48)
		WidgetVerticalAlignment m_verticalAlign; // 0x34 (52)
		WidgetHorisontalAlignment m_horisontalAlign; // 0x38 (56)
		s32 m_zDepthLevel; // 0x3C (60)
		CtrRef<UIDataBinding> m_dataBinding; // 0x40 (64)
		String m_instanceName; // 0x48 (72)
		Array<UIWidgetProperty> m_widgetProperties; // 0x50 (80)
		RefArray<UINodePort> m_outputs; // 0x58 (88)
		RefArray<UINodePort> m_inputs; // 0x60 (96)
		bool m_alwaysInFocus; // 0x68 (104)
		bool m_isDisabled; // 0x69 (105)
	}; // 0x70 (112)
}

