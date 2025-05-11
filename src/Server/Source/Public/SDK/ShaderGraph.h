///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/SurfaceShaderBaseAsset.h>

namespace fb {
	class ShaderGraph : public SurfaceShaderBaseAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ShaderGraph"); }
		virtual ~ShaderGraph() override {}
		ShaderGraph() {
			m_maxSubMaterialCount = 8;
			m_gammaCorrectionEnable = true;
		};

		u32 m_maxSubMaterialCount; // 0x18 (24)
		bool m_gammaCorrectionEnable; // 0x1C (28)
	}; // 0x20 (32)
}

