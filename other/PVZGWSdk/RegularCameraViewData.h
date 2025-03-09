///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/InputSuppressionData.h>
#include <fb/Types.h>
#include <fb/Vec3.h>

namespace fb {
	class ObjectBlueprint;
	class RigidMeshAsset;
}

namespace fb {
	struct RegularCameraViewData {
		RegularCameraViewData() {
			m_fieldOfView = 55.f;
			m_screenExposureAreaScale = 1.f;
			m_flirEnabled = false;
			m_allowFieldOfViewScaling = false;
			m_lockMeshToRenderView = false;
		};

		Vec3 m_meshOffset; // 0x0 (0)
		InputSuppressionData m_inputSuppression; // 0x10 (16)
		float m_fieldOfView; // 0x18 (24)
		CtrRef<RigidMeshAsset> m_mesh; // 0x20 (32)
		CtrRef<ObjectBlueprint> m_maskMeshBlueprint; // 0x28 (40)
		float m_screenExposureAreaScale; // 0x30 (48)
		bool m_flirEnabled; // 0x34 (52)
		bool m_allowFieldOfViewScaling; // 0x35 (53)
		bool m_lockMeshToRenderView; // 0x36 (54)
	}; // 0x40 (64)
}

