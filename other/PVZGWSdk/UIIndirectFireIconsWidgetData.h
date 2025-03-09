///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIWidgetEntityData.h>
#include <fb/UIElementColor.h>
#include <fb/UIPlayerFilter.h>
#include <fb/UIVisualWidgetType.h>

namespace fb {
	class UIIndirectFireIconsWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIIndirectFireIconsWidgetData"); }
		virtual ~UIIndirectFireIconsWidgetData() override {}
		UIIndirectFireIconsWidgetData() {
			m_visualWidgetType = UIVisualWidgetType::UIVisualWidgetType_IndirectFire;
			m_playerFilter = UIPlayerFilter::UIPlayerFilter_LocalPlayer;
			m_circleStartSize = 0.f;
			m_circleTargetSize = 16.f;
			m_circleExpandDuration = 2.f;
			m_circleThickness = 1.f;
		};

		UIVisualWidgetType m_visualWidgetType; // 0x68 (104)
		UIPlayerFilter m_playerFilter; // 0x6C (108)
		UIElementColor m_circleColor; // 0x70 (112)
		float m_circleStartSize; // 0x90 (144)
		float m_circleTargetSize; // 0x94 (148)
		float m_circleExpandDuration; // 0x98 (152)
		float m_circleThickness; // 0x9C (156)
	}; // 0xA0 (160)
}

