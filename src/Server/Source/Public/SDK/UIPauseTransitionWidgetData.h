///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIWidgetEntityData.h>

namespace fb {
	class UIPauseTransitionWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIPauseTransitionWidgetData"); }
		virtual ~UIPauseTransitionWidgetData() override {}
		UIPauseTransitionWidgetData() {
			m_transitionLength = 0.4f;
			m_distortPower = 6.f;
			m_redShiftPower = -3.f;
			m_greenShiftPower = 0.f;
			m_blueShiftPower = 3.f;
			m_distortOffset = 0.1f;
			m_shiftOffset = 0.3f;
		};

		float m_transitionLength; // 0x68 (104)
		float m_distortPower; // 0x6C (108)
		float m_redShiftPower; // 0x70 (112)
		float m_greenShiftPower; // 0x74 (116)
		float m_blueShiftPower; // 0x78 (120)
		float m_distortOffset; // 0x7C (124)
		float m_shiftOffset; // 0x80 (128)
	}; // 0x88 (136)
}

