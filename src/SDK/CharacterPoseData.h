///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CharacterPoseCollisionType.h>
#include <fb/CharacterPoseType.h>
#include <fb/DataContainer.h>
#include <fb/LookConstraintsData.h>
#include <fb/PoseTransitionTime.h>
#include <fb/Vec2.h>
#include <fb/Vec3.h>

namespace fb {
	class CharacterPoseData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CharacterPoseData"); }
		virtual ~CharacterPoseData() override {}
		CharacterPoseData() {
			m_stepHeight = 0.3f;
			m_eyePosition = Vec3(0.f, 1.7f, 0.f);
			m_height = 1.8f;
			m_poseType = CharacterPoseType::CharacterPoseType_Stand;
			m_collisionType = CharacterPoseCollisionType::CharacterPoseCollisionType_Pencil;
		};

		Array<Vec2> m_throttleModifierCurve; // 0x10 (16)
		float m_stepHeight; // 0x18 (24)
		Vec3 m_eyePosition; // 0x20 (32)
		Vec3 m_collisionBoxMinExpand; // 0x30 (48)
		Vec3 m_collisionBoxMaxExpand; // 0x40 (64)
		float m_height; // 0x50 (80)
		Array<PoseTransitionTime> m_transitionTimes; // 0x58 (88)
		LookConstraintsData m_lookConstraints; // 0x60 (96)
		CharacterPoseType m_poseType; // 0x70 (112)
		CharacterPoseCollisionType m_collisionType; // 0x74 (116)
	}; // 0x80 (128)
}

