///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/FloatPhysicsData.h>
#include <fb/Vec3.h>

namespace fb {
	class HullFloatPhysicsData : public FloatPhysicsData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("HullFloatPhysicsData"); }
		virtual ~HullFloatPhysicsData() override {}
		HullFloatPhysicsData() {
			m_waterResistanceAxisMod = Vec3(1.f, 1.f, 1.f);
			m_waterFrictionAxisMod = Vec3(1.f, 1.f, 1.f);
			m_subSurfaceSplits = 10;
			m_depth = 0.f;
			m_width = 0.f;
			m_length = 0.f;
			m_frontCurveDegree = 2.f;
			m_sideCurveDegree = 2.f;
			m_nonEngineSteer = 0.f;
			m_nonEngineSteerMinSpeed = 0.f;
			m_nonEngineSteerMaxSpeed = 0.f;
			m_waterDampeningMod = 1.f;
			m_liftModifier = 1.f;
			m_supportSizeMod = 1.f;
			m_angularDampening = 0.01f;
			m_frictionThrottleModifier = 0.f;
		};

		Vec3 m_waterResistanceAxisMod; // 0x20 (32)
		Vec3 m_waterFrictionAxisMod; // 0x30 (48)
		Vec3 m_offset; // 0x40 (64)
		s32 m_subSurfaceSplits; // 0x50 (80)
		float m_depth; // 0x54 (84)
		float m_width; // 0x58 (88)
		float m_length; // 0x5C (92)
		float m_frontCurveDegree; // 0x60 (96)
		float m_sideCurveDegree; // 0x64 (100)
		float m_nonEngineSteer; // 0x68 (104)
		float m_nonEngineSteerMinSpeed; // 0x6C (108)
		float m_nonEngineSteerMaxSpeed; // 0x70 (112)
		float m_waterDampeningMod; // 0x74 (116)
		float m_liftModifier; // 0x78 (120)
		float m_supportSizeMod; // 0x7C (124)
		float m_angularDampening; // 0x80 (128)
		float m_frictionThrottleModifier; // 0x84 (132)
	}; // 0x90 (144)
}

