///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/VisualVectorShapeData.h>

namespace fb {
	class SurfaceShaderBaseAsset;
}

namespace fb {
	class TerrainFillDecalData : public VisualVectorShapeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TerrainFillDecalData"); }
		virtual ~TerrainFillDecalData() override {}
		TerrainFillDecalData() {
		};

		CtrRef<SurfaceShaderBaseAsset> m_shader2d; // 0x40 (64)
		CtrRef<SurfaceShaderBaseAsset> m_shader2dMeshScatteringMask; // 0x48 (72)
		CtrRef<SurfaceShaderBaseAsset> m_shader3dZOnly; // 0x50 (80)
	}; // 0x58 (88)
}

