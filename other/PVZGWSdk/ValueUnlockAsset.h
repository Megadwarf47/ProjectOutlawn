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
	class UnlockValuePair;
}

namespace fb {
	class ValueUnlockAsset : public UnlockAssetBase {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ValueUnlockAsset"); }
		virtual ~ValueUnlockAsset() override {}
		ValueUnlockAsset() {
		};

		RefArray<UnlockValuePair> m_unlockValues; // 0x40 (64)
	}; // 0x48 (72)
}

