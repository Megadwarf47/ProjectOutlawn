///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>

namespace fb {
	class BTRefTreeKey;
	class BehaviourTreeData;
}

namespace fb {
	struct BehaviourPair {
		BehaviourPair() {
		};

		CtrRef<BTRefTreeKey> m_key; // 0x0 (0)
		CtrRef<BehaviourTreeData> m_subTree; // 0x8 (8)
	}; // 0x10 (16)
}

