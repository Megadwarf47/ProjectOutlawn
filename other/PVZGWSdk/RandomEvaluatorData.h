///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EvaluatorData.h>

namespace fb {
	class RandomEvaluatorData : public EvaluatorData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RandomEvaluatorData"); }
		virtual ~RandomEvaluatorData() override {}
		RandomEvaluatorData() {
			m_max = 1.f;
			m_min = -1.f;
		};

		float m_max; // 0x18 (24)
		float m_min; // 0x1C (28)
	}; // 0x20 (32)
}

