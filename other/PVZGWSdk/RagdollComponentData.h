///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/BuoyantPartsData.h>
#include <fb/CtrRef.h>
#include <fb/GameComponentData.h>
#include <fb/MaterialDecl.h>
#include <fb/RagdollBinding.h>
#include <fb/String.h>

namespace fb {
	class RagdollAsset;
	class SkeletonAsset;
	class SkeletonCollisionData;
}

namespace fb {
	class RagdollComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RagdollComponentData"); }
		virtual ~RagdollComponentData() override {}
		RagdollComponentData() {
			m_allowClientTriggerOnBlend = false;
		};

		CtrRef<SkeletonAsset> m_skeletonAsset; // 0x70 (112)
		CtrRef<RagdollAsset> m_ragdollAsset; // 0x78 (120)
		CtrRef<SkeletonCollisionData> m_skeletonCollisionData; // 0x80 (128)
		RagdollBinding m_binding; // 0x88 (136)
		String m_leftLegBoneName; // 0x100 (256)
		String m_rightLegBoneName; // 0x108 (264)
		Array<String> m_extraLegBoneNames; // 0x110 (272)
		Array<MaterialDecl> m_boneMaterials; // 0x118 (280)
		Array<BuoyantPartsData> m_buoyantParts; // 0x120 (288)
		bool m_allowClientTriggerOnBlend; // 0x128 (296)
	}; // 0x130 (304)
}

