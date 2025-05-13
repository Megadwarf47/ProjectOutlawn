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
	class CameraProximityEvaluatorData : public EvaluatorData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CameraProximityEvaluatorData"); }
		virtual ~CameraProximityEvaluatorData() override {}
		CameraProximityEvaluatorData() {
			m_forwardOffset = 0.f;
			m_size = Vec3(1.f, 1.f, 1.f);
			m_innerRadiusDirection = Vec3(0.f, 1.f, 0.f);
			m_innerRadius = 0.f;
		};

		float m_forwardOffset; // 0x18 (24)
		Vec3 m_size; // 0x20 (32)
		Vec3 m_offset; // 0x30 (48)
		Vec3 m_innerRadiusDirection; // 0x40 (64)
		float m_innerRadius; // 0x50 (80)
	}; // 0x60 (96)
}

