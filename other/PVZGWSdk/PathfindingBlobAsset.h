///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Asset.h>
#include <fb/PathfindingBlob.h>

namespace fb {
	class PathfindingBlobAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PathfindingBlobAsset"); }
		virtual ~PathfindingBlobAsset() override {}
		PathfindingBlobAsset() {
		};

		Array<PathfindingBlob> m_blobs; // 0x18 (24)
	}; // 0x20 (32)
}

