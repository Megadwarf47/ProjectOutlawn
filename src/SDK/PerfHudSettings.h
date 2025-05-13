///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/String.h>

namespace fb {
	class PerfHudSettings : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PerfHudSettings"); }
		virtual ~PerfHudSettings() override {}
		PerfHudSettings() {
			m_enable = false;
			m_drawCpuEnable = true;
			m_drawGpuEnable = true;
			m_drawSpuEnable = true;
			m_simpleSummaryMode = false;
			m_timerCategorySetsEnable = false;
			m_drawUngroupedTimings = false;
			m_drawConfigFile = false;
		};

		String m_timerCategorySetName; // 0x10 (16)
		bool m_enable; // 0x18 (24)
		bool m_drawCpuEnable; // 0x19 (25)
		bool m_drawGpuEnable; // 0x1A (26)
		bool m_drawSpuEnable; // 0x1B (27)
		bool m_simpleSummaryMode; // 0x1C (28)
		bool m_timerCategorySetsEnable; // 0x1D (29)
		bool m_drawUngroupedTimings; // 0x1E (30)
		bool m_drawConfigFile; // 0x1F (31)
	}; // 0x20 (32)
}

