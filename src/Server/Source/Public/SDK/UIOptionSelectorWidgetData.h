///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/UIPageChildWidgetData.h>

namespace fb {
	class UIOptionSelectorWidgetData : public UIPageChildWidgetData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIOptionSelectorWidgetData"); }
		virtual ~UIOptionSelectorWidgetData() override {}
		UIOptionSelectorWidgetData() {
			m_minAlpha = 0.3f;
			m_blinkFrequency = 5.f;
			m_flashTime = 0.5f;
		};

		Array<String> m_options; // 0x68 (104)
		Array<String> m_optionValues; // 0x70 (112)
		float m_minAlpha; // 0x78 (120)
		float m_blinkFrequency; // 0x7C (124)
		float m_flashTime; // 0x80 (128)
	}; // 0x88 (136)
}

