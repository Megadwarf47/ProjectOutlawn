///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIWidgetEntityData.h>

namespace fb {
	class UITooltipWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UITooltipWidgetData"); }
		virtual ~UITooltipWidgetData() override {}
		UITooltipWidgetData() {
			m_lineSpacing = 0.f;
			m_fadeInDuration = 1.f;
			m_fadeOutDuration = 1.f;
		};

		float m_lineSpacing; // 0x68 (104)
		float m_fadeInDuration; // 0x6C (108)
		float m_fadeOutDuration; // 0x70 (112)
	}; // 0x78 (120)
}

