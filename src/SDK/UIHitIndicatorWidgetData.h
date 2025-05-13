///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIWidgetEntityData.h>

namespace fb {
	class UIHitIndicatorWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIHitIndicatorWidgetData"); }
		virtual ~UIHitIndicatorWidgetData() override {}
		UIHitIndicatorWidgetData() {
			m_baseShowTime = 0.05f;
			m_maxShowTime = 0.3f;
			m_damageToSecondsFactor = 0.007f;
			m_timeBeforeFadeOut = 0.08f;
			m_startOffset = 1.f;
			m_offsetDuration = 0.05f;
		};

		float m_baseShowTime; // 0x68 (104)
		float m_maxShowTime; // 0x6C (108)
		float m_damageToSecondsFactor; // 0x70 (112)
		float m_timeBeforeFadeOut; // 0x74 (116)
		float m_startOffset; // 0x78 (120)
		float m_offsetDuration; // 0x7C (124)
	}; // 0x80 (128)
}

