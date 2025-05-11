///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIColorizationMode.h>
#include <fb/UIIconState.h>

namespace fb {
	struct BFUIColorizationData {
		BFUIColorizationData() {
			m_colorizationMode = BFUIColorizationMode::BFUIColorizationMode_ElementColor;
			m_iconState = UIIconState::UIIconState_Default;
			m_spectatorIconState = UIIconState::UIIconState_Default;
		};

		BFUIColorizationMode m_colorizationMode; // 0x0 (0)
		UIIconState m_iconState; // 0x4 (4)
		UIIconState m_spectatorIconState; // 0x8 (8)
	}; // 0xC (12)
}

