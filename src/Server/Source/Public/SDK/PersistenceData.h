///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AbstractPersistenceData.h>
#include <fb/Array.h>
#include <fb/CtrRef.h>
#include <fb/PersistenceConsumableMapping.h>
#include <fb/PersistentValueTemplateData.h>
#include <fb/String.h>

namespace fb {
	class PersistenceRetentionPolicy;
	class PersistenceStatGroup;
}

namespace fb {
	class PersistenceData : public AbstractPersistenceData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PersistenceData"); }
		virtual ~PersistenceData() override {}
		PersistenceData() {
			m_deltaGameReports = true;
			m_historyDaily = false;
			m_historyWeekly = false;
			m_historyMonthly = false;
			m_outputProperties = false;
		};

		String m_persistenceName; // 0x18 (24)
		String m_clubPersistenceName; // 0x20 (32)
		Array<PersistentValueTemplateData> m_values; // 0x28 (40)
		CtrRef<PersistenceStatGroup> m_serverDefaultGroup; // 0x30 (48)
		CtrRef<PersistenceStatGroup> m_clientDefaultGroup; // 0x38 (56)
		CtrRef<PersistenceRetentionPolicy> m_retentionPolicy; // 0x40 (64)
		Array<PersistenceConsumableMapping> m_consumableMappings; // 0x48 (72)
		bool m_deltaGameReports; // 0x50 (80)
		bool m_historyDaily; // 0x51 (81)
		bool m_historyWeekly; // 0x52 (82)
		bool m_historyMonthly; // 0x53 (83)
		bool m_outputProperties; // 0x54 (84)
	}; // 0x58 (88)
}

