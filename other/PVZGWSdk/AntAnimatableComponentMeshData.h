///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AntAnimatableComponentMeshRenderContext.h>
#include <fb/AntAnimatableComponentMeshRenderType.h>
#include <fb/CtrRef.h>
#include <fb/Types.h>

namespace fb {
	class MeshAsset;
}

namespace fb {
	struct AntAnimatableComponentMeshData {
		AntAnimatableComponentMeshData() {
			m_meshRenderType = AntAnimatableComponentMeshRenderType::AntAnimatableComponentMeshRenderType_Default;
			m_meshRenderContext = AntAnimatableComponentMeshRenderContext::AntAnimatableComponentMeshRenderContext_World;
			m_cameraRelativeScaleX = 1.f;
			m_cameraRelativeScaleY = 1.f;
			m_cameraRelativeScaleZ = 1.f;
			m_cameraRelativeOffsetX = 0.f;
			m_cameraRelativeOffsetY = 0.f;
			m_cameraRelativeOffsetZ = 0.f;
		};

		AntAnimatableComponentMeshRenderType m_meshRenderType; // 0x0 (0)
		AntAnimatableComponentMeshRenderContext m_meshRenderContext; // 0x4 (4)
		CtrRef<MeshAsset> m_mesh; // 0x8 (8)
		float m_cameraRelativeScaleX; // 0x10 (16)
		float m_cameraRelativeScaleY; // 0x14 (20)
		float m_cameraRelativeScaleZ; // 0x18 (24)
		float m_cameraRelativeOffsetX; // 0x1C (28)
		float m_cameraRelativeOffsetY; // 0x20 (32)
		float m_cameraRelativeOffsetZ; // 0x24 (36)
	}; // 0x28 (40)
}

