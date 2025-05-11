///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/RefArray.h>
#include <fb/TerrainLayerData.h>

namespace fb {
	class TerrainMeshScatteringType;
}

namespace fb {
	class SingleTerrainLayerData : public TerrainLayerData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SingleTerrainLayerData"); }
		virtual ~SingleTerrainLayerData() override {}
		SingleTerrainLayerData() {
		};

		RefArray<TerrainMeshScatteringType> m_meshScatteringTypes; // 0x10 (16)
	}; // 0x18 (24)
}

