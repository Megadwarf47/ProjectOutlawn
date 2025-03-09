///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>

namespace fb {
	class RawFileAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RawFileAsset"); }
		virtual ~RawFileAsset() override {}
		RawFileAsset() {
		};

	}; // 0x18 (24)
}

