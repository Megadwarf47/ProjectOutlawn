///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>

namespace fb {
	class PersistenceRetentionPolicy : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PersistenceRetentionPolicy"); }
		virtual ~PersistenceRetentionPolicy() override {}
		PersistenceRetentionPolicy() {
			m_dailyHistoryCount = 0;
			m_weeklyHistoryCount = 0;
			m_monthlyHistoryCount = 0;
		};

		s32 m_dailyHistoryCount; // 0x18 (24)
		s32 m_weeklyHistoryCount; // 0x1C (28)
		s32 m_monthlyHistoryCount; // 0x20 (32)
	}; // 0x28 (40)
}

