///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EvaluatorData.h>
#include <fb/Vec3.h>
#include <fb/Vec4.h>

namespace fb {
	class PolynomialColorInterpData : public EvaluatorData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PolynomialColorInterpData"); }
		virtual ~PolynomialColorInterpData() override {}
		PolynomialColorInterpData() {
			m_color0 = Vec3(1.f, 1.f, 1.f);
			m_color1 = Vec3(1.f, 1.f, 1.f);
			m_coefficients = Vec4(0.f, 0.f, 0.f, 1.f);
		};

		Vec3 m_color0; // 0x20 (32)
		Vec3 m_color1; // 0x30 (48)
		Vec4 m_coefficients; // 0x40 (64)
	}; // 0x50 (80)
}

