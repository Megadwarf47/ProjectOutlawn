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
	class BoxEvaluatorData : public EvaluatorData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BoxEvaluatorData"); }
		virtual ~BoxEvaluatorData() override {}
		BoxEvaluatorData() {
			m_dimensions = Vec3(1.f, 1.f, 1.f);
		};

		Vec3 m_dimensions; // 0x20 (32)
		Vec3 m_pivot; // 0x30 (48)
	}; // 0x40 (64)
}

