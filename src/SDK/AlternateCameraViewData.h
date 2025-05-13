///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainer.h>
#include <fb/HudData.h>
#include <fb/InputSuppressionData.h>
#include <fb/Vec3.h>

namespace fb {
	class ObjectBlueprint;
	class RigidMeshAsset;
}

namespace fb {
	class AlternateCameraViewData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AlternateCameraViewData"); }
		virtual ~AlternateCameraViewData() override {}
		AlternateCameraViewData() {
			m_fieldOfView = 20.f;
			m_fovTransitionTime = 0.1f;
			m_worldSpaceLockEfficiency = 0.f;
			m_fadeInDuration = 0.1f;
			m_fadeOutDuration = 0.1f;
			m_blackDuration = 0.1f;
			m_screenExposureAreaScale = 1.f;
			m_allowFieldOfViewScaling = false;
			m_lockMeshToRenderView = false;
			m_fadeToBlack = false;
			m_toggleViewChange = true;
			m_useProfileOptionForToggleViewChange = false;
			m_flirEnabled = false;
		};

		float m_fieldOfView; // 0x10 (16)
		float m_fovTransitionTime; // 0x14 (20)
		Vec3 m_meshOffset; // 0x20 (32)
		float m_worldSpaceLockEfficiency; // 0x30 (48)
		CtrRef<RigidMeshAsset> m_mesh; // 0x38 (56)
		CtrRef<ObjectBlueprint> m_maskMeshBlueprint; // 0x40 (64)
		HudData m_hud; // 0x48 (72)
		float m_fadeInDuration; // 0xB8 (184)
		float m_fadeOutDuration; // 0xBC (188)
		float m_blackDuration; // 0xC0 (192)
		InputSuppressionData m_inputSuppression; // 0xC8 (200)
		float m_screenExposureAreaScale; // 0xD0 (208)
		bool m_allowFieldOfViewScaling; // 0xD4 (212)
		bool m_lockMeshToRenderView; // 0xD5 (213)
		bool m_fadeToBlack; // 0xD6 (214)
		bool m_toggleViewChange; // 0xD7 (215)
		bool m_useProfileOptionForToggleViewChange; // 0xD8 (216)
		bool m_flirEnabled; // 0xD9 (217)
	}; // 0xE0 (224)
}

