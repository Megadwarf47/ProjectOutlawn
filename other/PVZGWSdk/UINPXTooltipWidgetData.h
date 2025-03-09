///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/BFUIWidgetEntityData.h>
#include <fb/CtrRef.h>
#include <fb/UIInputAction.h>
#include <fb/UINPXTooltipWidgetLayout.h>
#include <fb/Vec4.h>

namespace fb {
	class UIElementFillData;
}

namespace fb {
	class UINPXTooltipWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UINPXTooltipWidgetData"); }
		virtual ~UINPXTooltipWidgetData() override {}
		UINPXTooltipWidgetData() {
			m_titleLowerPadding = 10.f;
			m_contentAlpha = 1.f;
			m_parentScreenRect = Vec4(0.f, 0.f, 1280.f, 720.f);
			m_closeAction = UIInputAction::UIInputAction_Deactivate;
			m_preBlinkTime = 1.f;
			m_cursorBlinkRate = 30.f;
			m_expansionTime = 1.f;
			m_titleTextRate = 150.f;
			m_titleTypingAnimationTime = 0.25f;
			m_secondaryBlinkTime = 1.f;
			m_waitingTime = 1.f;
			m_titleBodyFadeTime = 1.f;
			m_shrinkTime = 1.f;
			m_postBlinkTime = 1.f;
			m_fullscreenBackgroundFadeInDuration = 0.25f;
			m_fullscreenBackgroundFadeOutDuration = 0.25f;
			m_iconTextOffset = 10.f;
			m_paddingAfterButton = 10.f;
			m_blockedByScreen = false;
		};

		float m_titleLowerPadding; // 0x68 (104)
		float m_contentAlpha; // 0x6C (108)
		Vec4 m_parentScreenRect; // 0x70 (112)
		UIInputAction m_closeAction; // 0x80 (128)
		Array<String> m_iconTextureIds; // 0x88 (136)
		float m_preBlinkTime; // 0x90 (144)
		float m_cursorBlinkRate; // 0x94 (148)
		float m_expansionTime; // 0x98 (152)
		float m_titleTextRate; // 0x9C (156)
		float m_titleTypingAnimationTime; // 0xA0 (160)
		float m_secondaryBlinkTime; // 0xA4 (164)
		float m_waitingTime; // 0xA8 (168)
		float m_titleBodyFadeTime; // 0xAC (172)
		float m_shrinkTime; // 0xB0 (176)
		float m_postBlinkTime; // 0xB4 (180)
		float m_fullscreenBackgroundFadeInDuration; // 0xB8 (184)
		float m_fullscreenBackgroundFadeOutDuration; // 0xBC (188)
		float m_iconTextOffset; // 0xC0 (192)
		Array<UINPXTooltipWidgetLayout> m_presetLayouts; // 0xC8 (200)
		float m_paddingAfterButton; // 0xD0 (208)
		CtrRef<UIElementFillData> m_inputEaterFill; // 0xD8 (216)
		bool m_blockedByScreen; // 0xE0 (224)
	}; // 0xF0 (240)
}

