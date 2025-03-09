///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/MetricEvent.h>
#include <fb/String.h>
#include <fb/Vec3.h>

namespace fb {
	class PerformanceEvent : public MetricEvent {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PerformanceEvent"); }
		virtual ~PerformanceEvent() override {}
		PerformanceEvent() {
			m_cpuAverage = 0.f;
			m_freeCPUMemory = 0.f;
			m_allocCPUMemory = 0.f;
			m_gpuAverage = 0.f;
			m_freeGPUMemory = 0.f;
			m_allocGPUMemory = 0.f;
			m_drawCallCount = 0;
			m_primitiveCount = 0;
		};

		Vec3 m_position; // 0x20 (32)
		float m_cpuAverage; // 0x30 (48)
		float m_freeCPUMemory; // 0x34 (52)
		float m_allocCPUMemory; // 0x38 (56)
		float m_gpuAverage; // 0x3C (60)
		float m_freeGPUMemory; // 0x40 (64)
		float m_allocGPUMemory; // 0x44 (68)
		s32 m_drawCallCount; // 0x48 (72)
		s32 m_primitiveCount; // 0x4C (76)
		String m_performanceLocation; // 0x50 (80)
		Guid m_performanceLink; // 0x58 (88)
	}; // 0x70 (112)
}

