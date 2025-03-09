///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/FieldAccessType.h>
#include <fb/String.h>
#include <fb/Types.h>

namespace fb {
	class DataContainer;
}

namespace fb {
	struct DataField {
		DataField() {
			m_id = 0;
			m_accessType = FieldAccessType::FieldAccessType_Source;
		};

		String m_value; // 0x0 (0)
		CtrRef<DataContainer> m_valueRef; // 0x8 (8)
		s32 m_id; // 0x10 (16)
		FieldAccessType m_accessType; // 0x14 (20)
	}; // 0x18 (24)
}

