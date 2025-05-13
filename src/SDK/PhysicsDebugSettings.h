///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class PhysicsDebugSettings : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PhysicsDebugSettings"); }
		virtual ~PhysicsDebugSettings() override {}
		PhysicsDebugSettings() {
			m_timingRecursionDepth = 2;
			m_debugHingeConstraints = false;
			m_usePhysicsCpuTimers = false;
		};

		u32 m_timingRecursionDepth; // 0x10 (16)
		bool m_debugHingeConstraints; // 0x14 (20)
		bool m_usePhysicsCpuTimers; // 0x15 (21)
	}; // 0x18 (24)
}

