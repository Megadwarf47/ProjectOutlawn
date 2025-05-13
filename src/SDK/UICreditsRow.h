///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/UICreditsColumn.h>
#include <fb/UICreditsTextType.h>

namespace fb {
	struct UICreditsRow {
		UICreditsRow() {
			m_textType = UICreditsTextType::UICreditsTextType_Header;
		};

		UICreditsTextType m_textType; // 0x0 (0)
		Array<UICreditsColumn> m_columns; // 0x8 (8)
	}; // 0x10 (16)
}

