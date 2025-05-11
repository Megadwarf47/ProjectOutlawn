///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class PerfJournalSettings : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PerfJournalSettings"); }
		virtual ~PerfJournalSettings() override {}
		PerfJournalSettings() {
			m_journalSampleInterval = 1;
			m_journalFrameCount = 0;
			m_autoJournalThresholdMs = 33.5f;
			m_autoJournalMinFrames = 60;
			m_enable = false;
			m_journalExpensiveStats = false;
			m_journalAllSPU = false;
			m_journalReportAverage = false;
			m_autoJournalEnable = false;
			m_autoJournalScreenshot = false;
		};

		s32 m_journalSampleInterval; // 0x10 (16)
		s32 m_journalFrameCount; // 0x14 (20)
		float m_autoJournalThresholdMs; // 0x18 (24)
		s32 m_autoJournalMinFrames; // 0x1C (28)
		bool m_enable; // 0x20 (32)
		bool m_journalExpensiveStats; // 0x21 (33)
		bool m_journalAllSPU; // 0x22 (34)
		bool m_journalReportAverage; // 0x23 (35)
		bool m_autoJournalEnable; // 0x24 (36)
		bool m_autoJournalScreenshot; // 0x25 (37)
	}; // 0x28 (40)
}

