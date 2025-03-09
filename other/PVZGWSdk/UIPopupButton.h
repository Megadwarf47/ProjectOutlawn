///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/String.h>
#include <fb/UIInputAction.h>

namespace fb {
	struct UIPopupButton {
		UIPopupButton() {
			m_inputConcept = UIInputAction::UIInputAction_NavigateUp;
		};

		UIInputAction m_inputConcept; // 0x0 (0)
		String m_label; // 0x8 (8)
	}; // 0x10 (16)
}

