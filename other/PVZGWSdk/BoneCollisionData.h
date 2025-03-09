///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/HitReactionType.h>
#include <fb/MaterialDecl.h>
#include <fb/PitchModifier.h>
#include <fb/String.h>
#include <fb/Types.h>
#include <fb/Vec3.h>
#include <fb/Vec4.h>

namespace fb {
	class AimAssistCollisionBoneData;
}

namespace fb {
	struct BoneCollisionData {
		BoneCollisionData() {
			m_animationHitReactionType = HitReactionType::HRT_Body;
			m_boneAxis = 0;
			m_capsuleLength = 0.f;
			m_capsuleRadius = 0.f;
			m_debugEnabled = true;
			m_validInHiLod = true;
			m_validInLowLod = false;
			m_deactivateIfBehindWall = false;
			m_usePhysicsRotation = false;
		};

		Vec4 m_debugDrawColor; // 0x0 (0)
		Vec3 m_capsuleOffset; // 0x10 (16)
		PitchModifier m_maxPitch; // 0x20 (32)
		PitchModifier m_minPitch; // 0x40 (64)
		String m_boneName; // 0x60 (96)
		HitReactionType m_animationHitReactionType; // 0x68 (104)
		MaterialDecl m_materialPair; // 0x6C (108)
		s32 m_boneAxis; // 0x70 (112)
		float m_capsuleLength; // 0x74 (116)
		float m_capsuleRadius; // 0x78 (120)
		CtrRef<AimAssistCollisionBoneData> m_aimAssistTarget; // 0x80 (128)
		bool m_debugEnabled; // 0x88 (136)
		bool m_validInHiLod; // 0x89 (137)
		bool m_validInLowLod; // 0x8A (138)
		bool m_deactivateIfBehindWall; // 0x8B (139)
		bool m_usePhysicsRotation; // 0x8C (140)
	}; // 0x90 (144)
}

