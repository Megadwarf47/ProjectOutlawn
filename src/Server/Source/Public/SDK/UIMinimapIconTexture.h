///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/String.h>
#include <fb/UIHudIcon.h>
#include <fb/UIMinimapIconTextureState.h>

namespace fb {
	struct UIMinimapIconTexture {
		UIMinimapIconTexture() {
			m_iconType = UIHudIcon::UIHudIcon_Unused;
		};

		UIHudIcon m_iconType; // 0x0 (0)
		String m_name; // 0x8 (8)
		Array<UIMinimapIconTextureState> m_states; // 0x10 (16)
	}; // 0x18 (24)
}

