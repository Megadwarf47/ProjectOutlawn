///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/TerrainQuadDecalAtlasTile.h>

namespace fb {
	class TerrainQuadDecalAtlasTileTemplateData : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TerrainQuadDecalAtlasTileTemplateData"); }
		virtual ~TerrainQuadDecalAtlasTileTemplateData() override {}
		TerrainQuadDecalAtlasTileTemplateData() {
		};

		TerrainQuadDecalAtlasTile m_atlasTile; // 0x18 (24)
	}; // 0x30 (48)
}

