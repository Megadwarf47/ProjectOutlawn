///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/InputDeviceAxes.h>
#include <fb/UITextureAtlasInfo.h>

namespace fb {
	struct UIAxesButtonTexture {
		UIAxesButtonTexture() {
			m_axis = InputDeviceAxes::IDA_Axis0X;
		};

		InputDeviceAxes m_axis; // 0x0 (0)
		UITextureAtlasInfo m_atlasInfo; // 0x4 (4)
	}; // 0x14 (20)
}

