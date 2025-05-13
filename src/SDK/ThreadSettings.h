///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class ThreadSettings : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ThreadSettings"); }
		virtual ~ThreadSettings() override {}
		ThreadSettings() {
			m_processorCount = -1;
			m_maxProcessorCount = 5;
			m_maxLiveEditProcessorCount = 4;
			m_minFreeProcessorCount = 1;
			m_jobThreadPriority = -1;
		};

		s32 m_processorCount; // 0x10 (16)
		s32 m_maxProcessorCount; // 0x14 (20)
		s32 m_maxLiveEditProcessorCount; // 0x18 (24)
		s32 m_minFreeProcessorCount; // 0x1C (28)
		s32 m_jobThreadPriority; // 0x20 (32)
	}; // 0x28 (40)
}

