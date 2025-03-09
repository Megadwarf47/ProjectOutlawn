///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EvaluatorData.h>
#include <fb/Vec4.h>

namespace fb {
	class PolynomialData : public EvaluatorData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PolynomialData"); }
		virtual ~PolynomialData() override {}
		PolynomialData() {
			m_scaleValue = 1.f;
			m_coefficients = Vec4(0.f, 0.f, 0.f, 1.f);
			m_minClamp = 0.f;
			m_maxClamp = 1.f;
		};

		float m_scaleValue; // 0x18 (24)
		Vec4 m_coefficients; // 0x20 (32)
		float m_minClamp; // 0x30 (48)
		float m_maxClamp; // 0x34 (52)
	}; // 0x40 (64)
}

