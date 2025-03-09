///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class ExtendedConstraintsData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ExtendedConstraintsData"); }
		virtual ~ExtendedConstraintsData() override {}
		ExtendedConstraintsData() {
			m_heading = 0.f;
			m_width = 180.f;
			m_falloff = 0.f;
			m_angularConstraintMin = 0.f;
			m_angularConstraintMax = 0.f;
		};

		float m_heading; // 0x10 (16)
		float m_width; // 0x14 (20)
		float m_falloff; // 0x18 (24)
		float m_angularConstraintMin; // 0x1C (28)
		float m_angularConstraintMax; // 0x20 (32)
	}; // 0x28 (40)
}

