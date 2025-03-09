///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/WeaponLagEffectForceData.h>
#include <fb/WeaponLagEffectSpringVector.h>

namespace fb {
	class WeaponLagSpringEffectData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WeaponLagSpringEffectData"); }
		virtual ~WeaponLagSpringEffectData() override {}
		WeaponLagSpringEffectData() {
			m_zoomForceModifier = 1.f;
		};

		WeaponLagEffectSpringVector m_offsetSprings; // 0x10 (16)
		WeaponLagEffectForceData m_jumpForces; // 0x30 (48)
		WeaponLagEffectForceData m_landForces; // 0x50 (80)
		WeaponLagEffectForceData m_poseUpForces; // 0x70 (112)
		WeaponLagEffectForceData m_poseDownForces; // 0x90 (144)
		WeaponLagEffectSpringVector m_rotationSprings; // 0xB0 (176)
		float m_zoomForceModifier; // 0xC8 (200)
	}; // 0xD0 (208)
}

