///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/CharacterStateType.h>
#include <fb/CtrRef.h>
#include <fb/MaterialDecl.h>
#include <fb/RefArray.h>

namespace fb {
	class CharacterPoseData;
	class CharacterSprintData;
	class CharacterStateData;
}

namespace fb {
	class CharacterPhysicsData : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CharacterPhysicsData"); }
		virtual ~CharacterPhysicsData() override {}
		CharacterPhysicsData() {
			m_defaultState = CharacterStateType::CharacterStateType_OnGround;
			m_pushableObjectWeight = 100;
			m_pushingObjectWeight = 0;
			m_mass = 100.f;
			m_maxAscendAngle = 60.f;
			m_physicalRadius = 0.3f;
			m_enterSwimStateDepth = 1.f;
			m_exitSwimStateDepth = 0.8f;
			m_inputAcceleration = 3.f;
			m_ladderAcceptAngle = 30.f;
			m_ladderAcceptAnglePitch = -15.f;
			m_jumpPenaltyTime = 2.f;
			m_jumpPenaltyFactor = 0.3f;
			m_radiusToPredictCollisionOnCharacters = 0.f;
			m_distanceFromGroundRayCastLength = 10.f;
			m_allowPoseChangeDuringTransition = true;
			m_autoPushAwayFromWallsInProne = false;
		};

		RefArray<CharacterPoseData> m_poses; // 0x18 (24)
		RefArray<CharacterStateData> m_states; // 0x20 (32)
		CharacterStateType m_defaultState; // 0x28 (40)
		CtrRef<CharacterSprintData> m_sprint; // 0x30 (48)
		MaterialDecl m_materialPair; // 0x38 (56)
		s32 m_pushableObjectWeight; // 0x3C (60)
		s32 m_pushingObjectWeight; // 0x40 (64)
		float m_mass; // 0x44 (68)
		float m_maxAscendAngle; // 0x48 (72)
		float m_physicalRadius; // 0x4C (76)
		float m_enterSwimStateDepth; // 0x50 (80)
		float m_exitSwimStateDepth; // 0x54 (84)
		float m_inputAcceleration; // 0x58 (88)
		float m_ladderAcceptAngle; // 0x5C (92)
		float m_ladderAcceptAnglePitch; // 0x60 (96)
		float m_jumpPenaltyTime; // 0x64 (100)
		float m_jumpPenaltyFactor; // 0x68 (104)
		float m_radiusToPredictCollisionOnCharacters; // 0x6C (108)
		float m_distanceFromGroundRayCastLength; // 0x70 (112)
		bool m_allowPoseChangeDuringTransition; // 0x74 (116)
		bool m_autoPushAwayFromWallsInProne; // 0x75 (117)
	}; // 0x78 (120)
}

