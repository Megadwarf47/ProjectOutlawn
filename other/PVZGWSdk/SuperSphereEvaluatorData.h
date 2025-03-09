///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EvaluatorData.h>
#include <fb/Vec3.h>

namespace fb {
	class SuperSphereEvaluatorData : public EvaluatorData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SuperSphereEvaluatorData"); }
		virtual ~SuperSphereEvaluatorData() override {}
		SuperSphereEvaluatorData() {
			m_innerRadius = 0.f;
			m_scale = Vec3(1.f, 1.f, 1.f);
			m_outerRadius = 1.f;
			m_startZenithAngle = 0.f;
			m_endZenithAngle = 180.f;
			m_innerRadiusBound = 0.f;
			m_startZenithAngleBound = 1.f;
			m_endZenithAngleBound = 0.f;
			m_startAzimuthAngle = 180.f;
			m_endAzimuthAngle = -180.f;
		};

		float m_innerRadius; // 0x18 (24)
		Vec3 m_scale; // 0x20 (32)
		Vec3 m_pivot; // 0x30 (48)
		float m_outerRadius; // 0x40 (64)
		float m_startZenithAngle; // 0x44 (68)
		float m_endZenithAngle; // 0x48 (72)
		float m_innerRadiusBound; // 0x4C (76)
		float m_startZenithAngleBound; // 0x50 (80)
		float m_endZenithAngleBound; // 0x54 (84)
		float m_startAzimuthAngle; // 0x58 (88)
		float m_endAzimuthAngle; // 0x5C (92)
	}; // 0x60 (96)
}

