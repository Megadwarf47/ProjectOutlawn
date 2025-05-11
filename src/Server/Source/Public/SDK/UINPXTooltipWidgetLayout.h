///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/UIElementAnchor.h>
#include <fb/UIElementOffset.h>
#include <fb/UIElementRectExpansion.h>
#include <fb/UILayoutMode.h>

namespace fb {
	struct UINPXTooltipWidgetLayout {
		UINPXTooltipWidgetLayout() {
			m_layoutMode = UILayoutMode::UILayoutMode_AnchorOffset;
		};

		UILayoutMode m_layoutMode; // 0x0 (0)
		UIElementOffset m_offset; // 0x4 (4)
		UIElementAnchor m_anchor; // 0xC (12)
		UIElementOffset m_position; // 0x14 (20)
		UIElementRectExpansion m_expansion; // 0x1C (28)
	}; // 0x2C (44)
}

