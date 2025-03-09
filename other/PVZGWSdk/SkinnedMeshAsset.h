///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/MeshAsset.h>
#include <fb/Vec3.h>

namespace fb {
	class SkinnedMeshAsset : public MeshAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SkinnedMeshAsset"); }
		virtual ~SkinnedMeshAsset() override {}
		SkinnedMeshAsset() {
		};

		Vec3 m_boundingBoxPositionOffset; // 0x60 (96)
		Vec3 m_boundingBoxSizeOffset; // 0x70 (112)
	}; // 0x80 (128)
}

