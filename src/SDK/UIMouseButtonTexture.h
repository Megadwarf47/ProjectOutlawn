///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/InputDeviceMouseButtons.h>
#include <fb/UITextureAtlasInfo.h>

namespace fb {
	struct UIMouseButtonTexture {
		UIMouseButtonTexture() {
			m_mouseButton = InputDeviceMouseButtons::IDB_Button_0;
		};

		InputDeviceMouseButtons m_mouseButton; // 0x0 (0)
		UITextureAtlasInfo m_atlasInfo; // 0x4 (4)
	}; // 0x14 (20)
}

