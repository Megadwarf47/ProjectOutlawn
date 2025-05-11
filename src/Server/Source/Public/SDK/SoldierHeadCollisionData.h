///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/DataContainer.h>
#include <fb/SoldierHeadCollisionPoseData.h>

namespace fb {
	class SoldierHeadCollisionData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoldierHeadCollisionData"); }
		virtual ~SoldierHeadCollisionData() override {}
		SoldierHeadCollisionData() {
			m_headRadius = 0.2f;
		};

		float m_headRadius; // 0x10 (16)
		Array<SoldierHeadCollisionPoseData> m_poseStates; // 0x18 (24)
	}; // 0x20 (32)
}

