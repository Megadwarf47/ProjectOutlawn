///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/Types.h>

namespace fb {
	class DataContainer;
}

namespace fb {
	struct PropertyConnection {
		PropertyConnection() {
			m_sourceFieldId = 0;
			m_targetFieldId = 0;
			m_shouldNetworkValue = false;
		};

		CtrRef<DataContainer> m_source; // 0x0 (0)
		CtrRef<DataContainer> m_target; // 0x8 (8)
		s32 m_sourceFieldId; // 0x10 (16)
		s32 m_targetFieldId; // 0x14 (20)
		bool m_shouldNetworkValue; // 0x18 (24)
	}; // 0x20 (32)
}

