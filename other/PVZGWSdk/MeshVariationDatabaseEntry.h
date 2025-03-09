///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CtrRef.h>
#include <fb/MeshVariationDatabaseMaterial.h>
#include <fb/Types.h>

namespace fb {
	class MeshAsset;
}

namespace fb {
	struct MeshVariationDatabaseEntry {
		MeshVariationDatabaseEntry() {
			m_variationAssetNameHash = 0;
		};

		CtrRef<MeshAsset> m_mesh; // 0x0 (0)
		u32 m_variationAssetNameHash; // 0x8 (8)
		Array<MeshVariationDatabaseMaterial> m_materials; // 0x10 (16)
	}; // 0x18 (24)
}

