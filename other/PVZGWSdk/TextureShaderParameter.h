///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/String.h>

namespace fb {
	class TextureBaseAsset;
}

namespace fb {
	struct TextureShaderParameter {
		TextureShaderParameter() {
		};

		String m_parameterName; // 0x0 (0)
		CtrRef<TextureBaseAsset> m_value; // 0x8 (8)
	}; // 0x10 (16)
}

