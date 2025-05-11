///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIWidgetEntityData.h>
#include <fb/Vec3.h>

namespace fb {
	class UIProgressionBarWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIProgressionBarWidgetData"); }
		virtual ~UIProgressionBarWidgetData() override {}
		UIProgressionBarWidgetData() {
			m_increaseBarAnimationDuration = 2.f;
			m_decreaseBarAnimationDuration = 2.f;
			m_iconGlowColor = Vec3(1.f, 1.f, 1.f);
			m_negativeFadeInAnimationDuration = 0.5f;
			m_negativeFadeOutAnimationDuration = 0.5f;
			m_growAnimationDuration = 0.25f;
			m_shrinkAnimationDuration = 0.5f;
			m_growAnimationScale = 1.5f;
			m_iconUnavalibleAlpha = 0.5f;
		};

		float m_increaseBarAnimationDuration; // 0x68 (104)
		float m_decreaseBarAnimationDuration; // 0x6C (108)
		Vec3 m_iconGlowColor; // 0x70 (112)
		float m_negativeFadeInAnimationDuration; // 0x80 (128)
		float m_negativeFadeOutAnimationDuration; // 0x84 (132)
		float m_growAnimationDuration; // 0x88 (136)
		float m_shrinkAnimationDuration; // 0x8C (140)
		float m_growAnimationScale; // 0x90 (144)
		float m_iconUnavalibleAlpha; // 0x94 (148)
	}; // 0xA0 (160)
}

