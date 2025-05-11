///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/String.h>
#include <fb/Types.h>

namespace fb {
	struct UIBattledashIndicatorData {
		UIBattledashIndicatorData() {
			m_indicatorFadeTime = 1.5f;
			m_overrideIconSize = 0.f;
		};

		String m_name; // 0x0 (0)
		String m_textureId; // 0x8 (8)
		float m_indicatorFadeTime; // 0x10 (16)
		float m_overrideIconSize; // 0x14 (20)
	}; // 0x18 (24)
}

