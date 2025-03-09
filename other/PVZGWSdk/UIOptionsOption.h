///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/String.h>
#include <fb/Types.h>
#include <fb/UIOptionsSliderDisplay.h>
#include <fb/UIOptionsSpecialCase.h>

namespace fb {
	class ProfileOptionData;
}

namespace fb {
	struct UIOptionsOption {
		UIOptionsOption() {
			m_specialCase = UIOptionsSpecialCase::UIOptionsSpecialCase_Normal;
			m_sliderDisplayMode = UIOptionsSliderDisplay::UIOptionsSliderDisplay_PercentOfMax;
			m_isButton = false;
			m_applyOnChange = false;
		};

		CtrRef<ProfileOptionData> m_optionData; // 0x0 (0)
		String m_playerShownName; // 0x8 (8)
		String m_description; // 0x10 (16)
		String m_visibilityPropertyName; // 0x18 (24)
		UIOptionsSpecialCase m_specialCase; // 0x20 (32)
		String m_onLabel; // 0x28 (40)
		String m_offLabel; // 0x30 (48)
		String m_eventName; // 0x38 (56)
		UIOptionsSliderDisplay m_sliderDisplayMode; // 0x40 (64)
		bool m_isButton; // 0x44 (68)
		bool m_applyOnChange; // 0x45 (69)
	}; // 0x48 (72)
}

