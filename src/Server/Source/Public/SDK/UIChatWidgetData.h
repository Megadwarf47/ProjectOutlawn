///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIWidgetEntityData.h>
#include <fb/CtrRef.h>

namespace fb {
	class UIElementFontStyle;
}

namespace fb {
	class UIChatWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIChatWidgetData"); }
		virtual ~UIChatWidgetData() override {}
		UIChatWidgetData() {
			m_rowSpacing = 2.f;
			m_startFadeOutTime = 2.f;
			m_endFadeOutTime = 3.f;
			m_modeStartFadeOutTime = 1.f;
			m_modeEndFadeOutTime = 2.f;
		};

		CtrRef<UIElementFontStyle> m_channelFont; // 0x68 (104)
		CtrRef<UIElementFontStyle> m_senderFont; // 0x70 (112)
		CtrRef<UIElementFontStyle> m_messageFont; // 0x78 (120)
		float m_rowSpacing; // 0x80 (128)
		float m_startFadeOutTime; // 0x84 (132)
		float m_endFadeOutTime; // 0x88 (136)
		float m_modeStartFadeOutTime; // 0x8C (140)
		float m_modeEndFadeOutTime; // 0x90 (144)
	}; // 0x98 (152)
}

