///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/GamePhysicsEntityData.h>

namespace fb {
	class EdgeModelLightMapData;
	class MeshAsset;
	class SurfaceShaderBaseAsset;
}

namespace fb {
	class BreakableModelEntityData : public GamePhysicsEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BreakableModelEntityData"); }
		virtual ~BreakableModelEntityData() override {}
		BreakableModelEntityData() {
			m_decalVolumeScaleFactor = 2.f;
			m_boneCount = 0;
		};

		CtrRef<SurfaceShaderBaseAsset> m_decalVolumeShader; // 0x90 (144)
		float m_decalVolumeScaleFactor; // 0x98 (152)
		CtrRef<MeshAsset> m_mesh; // 0xA0 (160)
		u32 m_boneCount; // 0xA8 (168)
		CtrRef<EdgeModelLightMapData> m_edgeModelLightMapData; // 0xB0 (176)
	}; // 0xC0 (192)
}

