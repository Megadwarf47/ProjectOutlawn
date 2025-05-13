///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/Types.h>

namespace fb {
	class UIElementScrollbarStyle;
}

namespace fb {
	struct UIGridStepperConfig {
		UIGridStepperConfig() {
			m_scrollbarWidth = 4;
			m_scrollbarMargin = 5;
			m_scrollbarTopOffset = 0;
			m_scrollbarBottomOffset = 0;
		};

		CtrRef<UIElementScrollbarStyle> m_scrollBarStyle; // 0x0 (0)
		u32 m_scrollbarWidth; // 0x8 (8)
		u32 m_scrollbarMargin; // 0xC (12)
		s32 m_scrollbarTopOffset; // 0x10 (16)
		s32 m_scrollbarBottomOffset; // 0x14 (20)
	}; // 0x18 (24)
}

