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
	class HavokAsset;
}

namespace fb {
	struct DebrisHavokInfo {
		DebrisHavokInfo() {
			m_reserveCount = 0;
		};

		CtrRef<HavokAsset> m_havokAsset; // 0x0 (0)
		s32 m_reserveCount; // 0x8 (8)
	}; // 0x10 (16)
}

