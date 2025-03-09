///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/BaseSkeletonAsset.h>
#include <fb/LinearTransform.h>

namespace fb {
	class SkeletonAsset : public BaseSkeletonAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SkeletonAsset"); }
		virtual ~SkeletonAsset() override {}
		SkeletonAsset() {
		};

		Array<String> m_boneNames; // 0x18 (24)
		Array<u32> m_boneNameHashes; // 0x20 (32)
		Array<s32> m_hierarchy; // 0x28 (40)
		Array<LinearTransform> m_localPose; // 0x30 (48)
		Array<LinearTransform> m_modelPose; // 0x38 (56)
		Array<s32> m_serverSkeletonToSkeletonMap; // 0x40 (64)
		Array<s32> m_skeletonToServerSkeletonMap; // 0x48 (72)
		Array<s32> m_serverHierarchy; // 0x50 (80)
		Array<s32> m_gameplayBonesToSkeleton; // 0x58 (88)
		Array<s32> m_gameplayBonesToServerSkeleton; // 0x60 (96)
	}; // 0x68 (104)
}

