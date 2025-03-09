///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/GameComponentData.h>

namespace fb {
	class SkeletonCollisionData;
}

namespace fb {
	class BoneCollisionComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BoneCollisionComponentData"); }
		virtual ~BoneCollisionComponentData() override {}
		BoneCollisionComponentData() {
			m_detailedCollisionSpeedLimitOverride = -1.f;
		};

		CtrRef<SkeletonCollisionData> m_skeletonCollisionData; // 0x70 (112)
		float m_detailedCollisionSpeedLimitOverride; // 0x78 (120)
	}; // 0x80 (128)
}

