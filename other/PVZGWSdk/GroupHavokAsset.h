///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/AssetAabbs.h>
#include <fb/HavokAsset.h>

namespace fb {
	class GroupHavokAsset : public HavokAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("GroupHavokAsset"); }
		virtual ~GroupHavokAsset() override {}
		GroupHavokAsset() {
		};

		Array<AssetAabbs> m_aabb; // 0x30 (48)
	}; // 0x38 (56)
}

