///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/RefArray.h>
#include <fb/UnlockAssetBase.h>

namespace fb {
	class UnlockAssetBase;
}

namespace fb {
	class MultiUnlockAsset : public UnlockAssetBase {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MultiUnlockAsset"); }
		virtual ~MultiUnlockAsset() override {}
		MultiUnlockAsset() {
		};

		RefArray<UnlockAssetBase> m_unlocks; // 0x40 (64)
	}; // 0x48 (72)
}

