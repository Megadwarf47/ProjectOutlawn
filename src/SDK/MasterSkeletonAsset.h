///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Asset.h>
#include <fb/CtrRef.h>
#include <fb/SubSkeleton.h>

namespace fb {
	class SkeletonAsset;
}

namespace fb {
	class MasterSkeletonAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MasterSkeletonAsset"); }
		virtual ~MasterSkeletonAsset() override {}
		MasterSkeletonAsset() {
		};

		CtrRef<SkeletonAsset> m_masterSkeleton; // 0x18 (24)
		Array<SubSkeleton> m_subSkeletons; // 0x20 (32)
	}; // 0x28 (40)
}

