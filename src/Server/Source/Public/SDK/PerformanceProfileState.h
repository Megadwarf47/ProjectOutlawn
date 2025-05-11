///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/MetricState.h>
#include <fb/String.h>

namespace fb {
	class PerformanceProfileState : public MetricState {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PerformanceProfileState"); }
		virtual ~PerformanceProfileState() override {}
		PerformanceProfileState() {
			m_processorCount = 0;
			m_processorCoreCount = 0;
			m_processorClock = 0;
			m_totalMemMB = 0;
			m_gpuMemMB = 0;
		};

		u32 m_processorCount; // 0x20 (32)
		u32 m_processorCoreCount; // 0x24 (36)
		u32 m_processorClock; // 0x28 (40)
		u32 m_totalMemMB; // 0x2C (44)
		u32 m_gpuMemMB; // 0x30 (48)
		String m_graphicAdapterName; // 0x38 (56)
		String m_platform; // 0x40 (64)
	}; // 0x48 (72)
}

