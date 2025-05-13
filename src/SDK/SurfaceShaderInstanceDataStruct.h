///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/BoolShaderParameter.h>
#include <fb/CtrRef.h>
#include <fb/TextureShaderParameter.h>
#include <fb/VectorArrayShaderParameter.h>
#include <fb/VectorShaderParameter.h>

namespace fb {
	class SurfaceShaderBaseAsset;
}

namespace fb {
	struct SurfaceShaderInstanceDataStruct {
		SurfaceShaderInstanceDataStruct() {
		};

		CtrRef<SurfaceShaderBaseAsset> m_shader; // 0x0 (0)
		Array<BoolShaderParameter> m_boolParameters; // 0x8 (8)
		Array<VectorShaderParameter> m_vectorParameters; // 0x10 (16)
		Array<VectorArrayShaderParameter> m_vectorArrayParameters; // 0x18 (24)
		Array<TextureShaderParameter> m_textureParameters; // 0x20 (32)
	}; // 0x28 (40)
}

