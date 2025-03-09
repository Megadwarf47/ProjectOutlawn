///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/BoneCollisionData.h>
#include <fb/CtrRef.h>
#include <fb/DataContainer.h>

namespace fb {
	class SkeletonAsset;
}

namespace fb {
	class SkeletonCollisionData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SkeletonCollisionData"); }
		virtual ~SkeletonCollisionData() override {}
		SkeletonCollisionData() {
		};

		CtrRef<SkeletonAsset> m_skeletonAsset; // 0x10 (16)
		Array<BoneCollisionData> m_boneCollisionData; // 0x18 (24)
	}; // 0x20 (32)
}

