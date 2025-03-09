///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/BehaviourElement.h>
#include <fb/CtrRef.h>

namespace fb {
	class BehaviourTreeKey;
}

namespace fb {
	struct BehaviourTreeKeyValue {
		BehaviourTreeKeyValue() {
		};

		CtrRef<BehaviourTreeKey> m_key; // 0x0 (0)
		Array<BehaviourElement> m_behaviours; // 0x8 (8)
	}; // 0x10 (16)
}

