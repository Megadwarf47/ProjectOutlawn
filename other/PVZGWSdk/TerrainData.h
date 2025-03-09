///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/RefArray.h>

namespace fb {
	class TerrainLayerData;
}

namespace fb {
	class TerrainData : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TerrainData"); }
		virtual ~TerrainData() override {}
		TerrainData() {
			m_terrainStreamingTreeResource = ;
			m_visualResource = ;
			m_terrainLayerCombinationsResource = ;
			m_destructionMaskEnable = false;
		};

		RefArray<TerrainLayerData> m_terrainLayers; // 0x18 (24)
		ResourceRef m_terrainStreamingTreeResource; // 0x20 (32)
		ResourceRef m_visualResource; // 0x28 (40)
		ResourceRef m_terrainLayerCombinationsResource; // 0x30 (48)
		bool m_destructionMaskEnable; // 0x38 (56)
	}; // 0x40 (64)
}

