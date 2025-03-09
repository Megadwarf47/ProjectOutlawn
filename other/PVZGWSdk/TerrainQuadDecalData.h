///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/TerrainQuadDecalAtlasTile.h>
#include <fb/Vec4.h>
#include <fb/VisualVectorShapeData.h>

namespace fb {
	class SurfaceShaderBaseAsset;
	class TerrainQuadDecalAtlasTileTemplateData;
}

namespace fb {
	class TerrainQuadDecalData : public VisualVectorShapeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TerrainQuadDecalData"); }
		virtual ~TerrainQuadDecalData() override {}
		TerrainQuadDecalData() {
			m_userMasks = Vec4(1.f, 1.f, 1.f, 1.f);
			m_tangentSpaceEnable = false;
		};

		CtrRef<SurfaceShaderBaseAsset> m_shader2d; // 0x40 (64)
		CtrRef<SurfaceShaderBaseAsset> m_shader2dMeshScatteringMask; // 0x48 (72)
		Vec4 m_userMasks; // 0x50 (80)
		CtrRef<SurfaceShaderBaseAsset> m_shader3dZOnly; // 0x60 (96)
		CtrRef<TerrainQuadDecalAtlasTileTemplateData> m_atlasTileTemplate; // 0x68 (104)
		TerrainQuadDecalAtlasTile m_atlasTile; // 0x70 (112)
		bool m_tangentSpaceEnable; // 0x84 (132)
	}; // 0x90 (144)
}

