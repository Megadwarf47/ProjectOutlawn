///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class FloatPhysicsData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("FloatPhysicsData"); }
		virtual ~FloatPhysicsData() override {}
		FloatPhysicsData() {
			m_density = 0.5f;
			m_filledDensity = 1.2f;
		};

		float m_density; // 0x10 (16)
		float m_filledDensity; // 0x14 (20)
	}; // 0x18 (24)
}

