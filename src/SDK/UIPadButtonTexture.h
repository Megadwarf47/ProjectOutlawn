///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/InputDevicePadButtons.h>
#include <fb/UITextureAtlasInfo.h>

namespace fb {
	struct UIPadButtonTexture {
		UIPadButtonTexture() {
			m_padButton = InputDevicePadButtons::IDB_Lup;
		};

		InputDevicePadButtons m_padButton; // 0x0 (0)
		UITextureAtlasInfo m_atlasInfo; // 0x4 (4)
	}; // 0x14 (20)
}

