///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/GameComponentData.h>
#include <fb/RefArray.h>

namespace fb {
	class BoneFakePhysicsData;
	class MeshAsset;
	class SkeletonAsset;
}

namespace fb {
	class MeshComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MeshComponentData"); }
		virtual ~MeshComponentData() override {}
		MeshComponentData() {
		};

		RefArray<BoneFakePhysicsData> m_boneFakePhysics; // 0x70 (112)
		CtrRef<MeshAsset> m_mesh; // 0x78 (120)
		CtrRef<SkeletonAsset> m_skeleton; // 0x80 (128)
	}; // 0x90 (144)
}

