///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIWidgetEntityData.h>
#include <fb/CtrRef.h>
#include <fb/String.h>

namespace fb {
	class UIElementButtonStyle;
	class UIElementScrollbarStyle;
	class UIWidgetBlueprint;
}

namespace fb {
	class UIOptionsManagerWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIOptionsManagerWidgetData"); }
		virtual ~UIOptionsManagerWidgetData() override {}
		UIOptionsManagerWidgetData() {
			m_rowSpacing = 1;
			m_rowHeight = 32;
			m_autoScrollSpeed = 20.f;
			m_scrollBarWidth = 15;
			m_scrollBarMargin = 5;
			m_animationDuration = 0.1f;
			m_animationTargetOffset = 2.f;
			m_sliderBackgroundPadding = 1;
			m_minAllowedResolutionHeight = 720;
			m_askBeforeUnsavedLeave = true;
		};

		CtrRef<UIElementButtonStyle> m_buttonStyle; // 0x68 (104)
		u32 m_rowSpacing; // 0x70 (112)
		u32 m_rowHeight; // 0x74 (116)
		float m_autoScrollSpeed; // 0x78 (120)
		u32 m_scrollBarWidth; // 0x7C (124)
		u32 m_scrollBarMargin; // 0x80 (128)
		CtrRef<UIElementScrollbarStyle> m_scrollBarStyle; // 0x88 (136)
		CtrRef<UIWidgetBlueprint> m_selectorTemplate; // 0x90 (144)
		String m_selectorTextureNormal; // 0x98 (152)
		String m_selectorTextureMouseOver; // 0xA0 (160)
		String m_selectorTextureSelected; // 0xA8 (168)
		float m_animationDuration; // 0xB0 (176)
		float m_animationTargetOffset; // 0xB4 (180)
		CtrRef<UIWidgetBlueprint> m_sliderTemplate; // 0xB8 (184)
		CtrRef<UIElementButtonStyle> m_sliderBackgroundStyle; // 0xC0 (192)
		CtrRef<UIElementButtonStyle> m_sliderStyle; // 0xC8 (200)
		u32 m_sliderBackgroundPadding; // 0xD0 (208)
		CtrRef<UIWidgetBlueprint> m_buttonTemplate; // 0xD8 (216)
		u32 m_minAllowedResolutionHeight; // 0xE0 (224)
		bool m_askBeforeUnsavedLeave; // 0xE4 (228)
	}; // 0xE8 (232)
}

