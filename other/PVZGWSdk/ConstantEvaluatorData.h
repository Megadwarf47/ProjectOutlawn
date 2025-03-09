///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EvaluatorData.h>

namespace fb {
	class ConstantEvaluatorData : public EvaluatorData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ConstantEvaluatorData"); }
		virtual ~ConstantEvaluatorData() override {}
		ConstantEvaluatorData() {
			m_scale = 1.f;
		};

		float m_scale; // 0x18 (24)
	}; // 0x20 (32)
}

