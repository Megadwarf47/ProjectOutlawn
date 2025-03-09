///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CtrRef.h>
#include <fb/TextureShaderParameter.h>

namespace fb {
	class MeshMaterial;
	class MeshMaterialVariation;
}

namespace fb {
	struct MeshVariationDatabaseMaterial {
		MeshVariationDatabaseMaterial() {
		};

		CtrRef<MeshMaterial> m_material; // 0x0 (0)
		CtrRef<MeshMaterialVariation> m_materialVariation; // 0x8 (8)
		Array<TextureShaderParameter> m_textureParameters; // 0x10 (16)
	}; // 0x18 (24)
}

