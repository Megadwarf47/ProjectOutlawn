///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIWidgetEntityData.h>
#include <fb/String.h>

namespace fb {
	class UIObjectiveHintWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIObjectiveHintWidgetData"); }
		virtual ~UIObjectiveHintWidgetData() override {}
		UIObjectiveHintWidgetData() {
			m_speed = 3.f;
			m_cutoff = 0.8f;
			m_blinkCount = 4;
			m_alphaMultiplier = 1.f;
		};

		String m_iconName; // 0x68 (104)
		float m_speed; // 0x70 (112)
		float m_cutoff; // 0x74 (116)
		u32 m_blinkCount; // 0x78 (120)
		String m_alphaProperty; // 0x80 (128)
		float m_alphaMultiplier; // 0x88 (136)
	}; // 0x90 (144)
}

