///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>

namespace fb {
	class PathfindingTypeAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PathfindingTypeAsset"); }
		virtual ~PathfindingTypeAsset() override {}
		PathfindingTypeAsset() {
			m_index = 0;
		};

		u32 m_index; // 0x18 (24)
	}; // 0x20 (32)
}

