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
	class SphereEvaluatorData : public EvaluatorData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SphereEvaluatorData"); }
		virtual ~SphereEvaluatorData() override {}
		SphereEvaluatorData() {
			m_radius = 1.f;
			m_scale = Vec3(1.f, 1.f, 1.f);
		};

		float m_radius; // 0x18 (24)
		Vec3 m_scale; // 0x20 (32)
		Vec3 m_pivot; // 0x30 (48)
	}; // 0x40 (64)
}

