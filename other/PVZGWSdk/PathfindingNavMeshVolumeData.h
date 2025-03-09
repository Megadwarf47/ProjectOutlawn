///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/OBBData.h>

namespace fb {
	class PathfindingObjectCategoryAsset;
}

namespace fb {
	class PathfindingNavMeshVolumeData : public OBBData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PathfindingNavMeshVolumeData"); }
		virtual ~PathfindingNavMeshVolumeData() override {}
		PathfindingNavMeshVolumeData() {
		};

		CtrRef<PathfindingObjectCategoryAsset> m_category; // 0x70 (112)
	}; // 0x80 (128)
}

