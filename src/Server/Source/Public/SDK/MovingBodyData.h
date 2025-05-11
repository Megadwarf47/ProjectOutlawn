///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class MovingBodyData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MovingBodyData"); }
		virtual ~MovingBodyData() override {}
		MovingBodyData() {
			m_mass = 100.f;
			m_inertia = 1000.f;
		};

		float m_mass; // 0x10 (16)
		float m_inertia; // 0x14 (20)
	}; // 0x18 (24)
}

