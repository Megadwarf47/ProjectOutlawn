///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/PersistentValueDataType.h>
#include <fb/PersistentValueHistoryType.h>
#include <fb/PersistentValueType.h>
#include <fb/String.h>
#include <fb/Types.h>

namespace fb {
	struct PersistentValueTemplateData {
		PersistentValueTemplateData() {
			m_defaultFloatValue = 0.f;
			m_valueType = PersistentValueType::PersistentValueType_Increment;
			m_dataType = PersistentValueDataType::PersistentValueDataType_Decimal;
			m_historyType = PersistentValueHistoryType::PersistentValueHistoryType_None;
			m_clubStat = false;
		};

		String m_name; // 0x0 (0)
		String m_defaultValue; // 0x8 (8)
		float m_defaultFloatValue; // 0x10 (16)
		PersistentValueType m_valueType; // 0x14 (20)
		PersistentValueDataType m_dataType; // 0x18 (24)
		PersistentValueHistoryType m_historyType; // 0x1C (28)
		bool m_clubStat; // 0x20 (32)
	}; // 0x28 (40)
}

