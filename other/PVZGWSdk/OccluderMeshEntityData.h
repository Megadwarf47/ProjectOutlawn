///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/SpatialEntityData.h>

namespace fb {
	class RigidMeshAsset;
}

namespace fb {
	class OccluderMeshEntityData : public SpatialEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("OccluderMeshEntityData"); }
		virtual ~OccluderMeshEntityData() override {}
		OccluderMeshEntityData() {
		};

		CtrRef<RigidMeshAsset> m_mesh; // 0x60 (96)
	}; // 0x70 (112)
}

