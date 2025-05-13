///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EvaluatorData.h>
#include <fb/SplineCurve.h>

namespace fb {
	class SplineData : public EvaluatorData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SplineData"); }
		virtual ~SplineData() override {}
		SplineData() {
		};

		SplineCurve m_splineCurve; // 0x20 (32)
	}; // 0x100 (256)
}

