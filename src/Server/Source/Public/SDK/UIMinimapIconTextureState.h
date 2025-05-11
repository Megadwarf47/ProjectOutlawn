///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Types.h>
#include <fb/UIIconMode.h>
#include <fb/UIIconState.h>
#include <fb/UIMinimapIconUv.h>

namespace fb {
	struct UIMinimapIconTextureState {
		UIMinimapIconTextureState() {
			m_mode = UIIconMode::UIIconMode_Default;
			m_state = UIIconState::UIIconState_Default;
			m_frameRate = 30.f;
			m_shouldRotate = false;
		};

		UIIconMode m_mode; // 0x0 (0)
		UIIconState m_state; // 0x4 (4)
		float m_frameRate; // 0x8 (8)
		Array<UIMinimapIconUv> m_textureInfos; // 0x10 (16)
		bool m_shouldRotate; // 0x18 (24)
	}; // 0x20 (32)
}

