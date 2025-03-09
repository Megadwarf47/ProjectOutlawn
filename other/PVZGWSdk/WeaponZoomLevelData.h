///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CtrRef.h>
#include <fb/DataContainer.h>
#include <fb/SightType.h>
#include <fb/WeaponAnimationSettingsData.h>

namespace fb {
	class FOVTransitionData;
}

namespace fb {
	class WeaponZoomLevelData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WeaponZoomLevelData"); }
		virtual ~WeaponZoomLevelData() override {}
		WeaponZoomLevelData() {
			m_renderFov = 55.f;
			m_zoomDisabledTransitionTimer = 0.f;
			m_sightType = SightType::SightType_None;
		};

		float m_renderFov; // 0x10 (16)
		CtrRef<FOVTransitionData> m_renderFovTransition; // 0x18 (24)
		Array<float> m_zoomInOutMeshTransitionFactors; // 0x20 (32)
		float m_zoomDisabledTransitionTimer; // 0x28 (40)
		SightType m_sightType; // 0x2C (44)
		WeaponAnimationSettingsData m_animationSettings; // 0x30 (48)
	}; // 0x50 (80)
}

