///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/RefArray.h>

namespace fb {
	class UIOptionControlTextFieldMapping_BothChanging;
	class UIOptionControlTextFieldMapping_NonChanging;
	class UIOptionControlTextFieldMapping_UnaryChanging;
}

namespace fb {
	struct UIOptionsConsoleControlsTextFieldMappings {
		UIOptionsConsoleControlsTextFieldMappings() {
		};

		RefArray<UIOptionControlTextFieldMapping_NonChanging> m_nonChanging; // 0x0 (0)
		RefArray<UIOptionControlTextFieldMapping_UnaryChanging> m_unaryChanging; // 0x8 (8)
		RefArray<UIOptionControlTextFieldMapping_BothChanging> m_bothChanging; // 0x10 (16)
	}; // 0x18 (24)
}

