///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AnimationControlModeEnum.h>
#include <fb/AntAnimationHandlerData.h>
#include <fb/Array.h>
#include <fb/EntityData.h>
#include <fb/JointOutputModeEnum.h>
#include <fb/Realm.h>
#include <fb/SubRealm.h>

namespace fb {
	class AntAnimatableEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AntAnimatableEntityData"); }
		virtual ~AntAnimatableEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		AntAnimatableEntityData() {
			m_realm = Realm::Realm_ClientAndServer;
			m_subRealm = SubRealm::SubRealm_All;
			m_initialAnimationControlMode = AnimationControlModeEnum::AnimationControlModeEnum_DisconnectTrajectoryAndObject;
			m_jointOutputMode = JointOutputModeEnum::JointOutputModeEnum_GameplayBones;
			m_autoActivate = false;
			m_initialForceDisableCulling = false;
			m_disableAutoDistanceCulling = false;
			m_interpolation = true;
		};

		Realm m_realm; // 0x18 (24)
		SubRealm m_subRealm; // 0x1C (28)
		AntAnimationHandlerData m_animationData; // 0x20 (32)
		AnimationControlModeEnum m_initialAnimationControlMode; // 0x110 (272)
		JointOutputModeEnum m_jointOutputMode; // 0x114 (276)
		Array<s32> m_jointOutputPropertyIds; // 0x118 (280)
		bool m_autoActivate; // 0x120 (288)
		bool m_initialForceDisableCulling; // 0x121 (289)
		bool m_disableAutoDistanceCulling; // 0x122 (290)
		bool m_interpolation; // 0x123 (291)
	}; // 0x128 (296)
}

