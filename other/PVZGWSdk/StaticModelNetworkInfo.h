///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/ChildStaticModelNetworkInfo.h>
#include <fb/IndexRange.h>
#include <fb/Types.h>

namespace fb {
	struct StaticModelNetworkInfo {
		StaticModelNetworkInfo() {
			m_networkIdCount = 0;
			m_childNetworkIdCount = 0;
		};

		Array<IndexRange> m_partNetworkIdRanges; // 0x0 (0)
		u32 m_networkIdCount; // 0x8 (8)
		Array<ChildStaticModelNetworkInfo> m_childNetworkInfos; // 0x10 (16)
		u32 m_childNetworkIdCount; // 0x18 (24)
	}; // 0x20 (32)
}

