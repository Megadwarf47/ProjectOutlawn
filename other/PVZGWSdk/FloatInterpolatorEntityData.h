///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/PropertyInterpolatorEntityData.h>

namespace fb {
	class FloatInterpolatorEntityData : public PropertyInterpolatorEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("FloatInterpolatorEntityData"); }
		virtual ~FloatInterpolatorEntityData() override {}
		FloatInterpolatorEntityData() {
			m_in = 0.f;
		};

		float m_in; // 0x30 (48)
	}; // 0x38 (56)
}

