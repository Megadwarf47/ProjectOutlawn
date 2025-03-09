///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>

namespace fb {
	class UnlockAssetBase;
}

namespace fb {
	struct UnlockAssetPair {
		UnlockAssetPair() {
		};

		CtrRef<UnlockAssetBase> m_second; // 0x0 (0)
		CtrRef<UnlockAssetBase> m_result; // 0x8 (8)
	}; // 0x10 (16)
}

