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
	class DefaultEvaluatorData : public EvaluatorData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DefaultEvaluatorData"); }
		virtual ~DefaultEvaluatorData() override {}
		DefaultEvaluatorData() {
			m_values = Vec4(1.f, 1.f, 1.f, 1.f);
		};

		Vec4 m_values; // 0x20 (32)
	}; // 0x30 (48)
}

