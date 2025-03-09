///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/RibbonData.h>

namespace fb {
	class SurfaceShaderBaseAsset;
}

namespace fb {
	class RoadData : public RibbonData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RoadData"); }
		virtual ~RoadData() override {}
		RoadData() {
			m_uvTileFactor = 1.f;
			m_stickToTerrain = true;
			m_tangentSpaceEnable = false;
		};

		CtrRef<SurfaceShaderBaseAsset> m_shader2d; // 0x48 (72)
		CtrRef<SurfaceShaderBaseAsset> m_shader2dMeshScatteringMask; // 0x50 (80)
		CtrRef<SurfaceShaderBaseAsset> m_shader3dZOnly; // 0x58 (88)
		float m_uvTileFactor; // 0x60 (96)
		bool m_stickToTerrain; // 0x64 (100)
		bool m_tangentSpaceEnable; // 0x65 (101)
	}; // 0x68 (104)
}

