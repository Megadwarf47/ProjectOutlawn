///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CtrRef.h>
#include <fb/LinearTransform.h>

namespace fb {
	class SkeletonAsset;
}

namespace fb {
	struct SubSkeleton {
		SubSkeleton() {
		};

		CtrRef<SkeletonAsset> m_skeleton; // 0x0 (0)
		Array<s32> m_boneMap; // 0x8 (8)
		Array<LinearTransform> m_transformMap; // 0x10 (16)
	}; // 0x18 (24)
}

