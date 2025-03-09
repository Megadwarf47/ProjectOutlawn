///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>

namespace fb {
	class VisualUnlockAsset;
}

namespace fb {
	struct VisualUnlockPair {
		VisualUnlockPair() {
		};

		CtrRef<VisualUnlockAsset> m_baseUnlock; // 0x0 (0)
		CtrRef<VisualUnlockAsset> m_replacementUnlock; // 0x8 (8)
	}; // 0x10 (16)
}

