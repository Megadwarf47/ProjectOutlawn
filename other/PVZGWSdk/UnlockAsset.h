///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/UnlockAssetBase.h>

namespace fb {
	class UnlockAsset : public UnlockAssetBase {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UnlockAsset"); }
		virtual ~UnlockAsset() override {}
		UnlockAsset() {
		};

	}; // 0x40 (64)
}

