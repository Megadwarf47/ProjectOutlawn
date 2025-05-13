///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EvaluatorData.h>
#include <fb/PolynomialOperation.h>
#include <fb/PolynomialTempData.h>

namespace fb {
	class PolynomialOperatorData : public EvaluatorData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PolynomialOperatorData"); }
		virtual ~PolynomialOperatorData() override {}
		PolynomialOperatorData() {
			m_operation = PolynomialOperation::Multiplication;
			m_minClampResult = 0.f;
			m_maxClampResult = 1.f;
		};

		PolynomialOperation m_operation; // 0x18 (24)
		PolynomialTempData m_firstOperand; // 0x20 (32)
		PolynomialTempData m_secondOperand; // 0x40 (64)
		float m_minClampResult; // 0x60 (96)
		float m_maxClampResult; // 0x64 (100)
	}; // 0x70 (112)
}

