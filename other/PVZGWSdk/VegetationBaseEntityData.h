///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CtrRef.h>
#include <fb/GameComponentEntityData.h>
#include <fb/LinearTransform.h>

namespace fb {
	class PhysicsEntityData;
	class SkinnedMeshAsset;
}

namespace fb {
	class VegetationBaseEntityData : public GameComponentEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VegetationBaseEntityData"); }
		virtual ~VegetationBaseEntityData() override {}
		VegetationBaseEntityData() {
		};

		Array<LinearTransform> m_basePoseTransforms; // 0x80 (128)
		Array<s32> m_hierarchy; // 0x88 (136)
		Array<LinearTransform> m_lowResBasePoseTransforms; // 0x90 (144)
		Array<s32> m_lowResHierarchy; // 0x98 (152)
		Array<s32> m_partIndirection; // 0xA0 (160)
		Array<s32> m_partHierarchy; // 0xA8 (168)
		Array<float> m_partInitialHealths; // 0xB0 (176)
		CtrRef<SkinnedMeshAsset> m_mesh; // 0xB8 (184)
		CtrRef<SkinnedMeshAsset> m_shadowMesh; // 0xC0 (192)
		Array<bool> m_boneIsStem; // 0xC8 (200)
		CtrRef<PhysicsEntityData> m_physicsData; // 0xD0 (208)
	}; // 0xE0 (224)
}

