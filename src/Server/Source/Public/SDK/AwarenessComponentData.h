///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AwarenessComponentBinding.h>
#include <fb/GameComponentData.h>
#include <fb/GameplayBones.h>
#include <fb/Realm.h>

namespace fb {
	class AwarenessComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AwarenessComponentData"); }
		virtual ~AwarenessComponentData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		AwarenessComponentData() {
			m_realm = Realm::Realm_Client;
			m_referenceJoint = GameplayBones::GameplayBones_HeadBone;
			m_ownTargetBone = GameplayBones::GameplayBones_HeadBone;
			m_ownTargetRange = 5.f;
			m_damageInflictorTargetDuration = 2.f;
			m_damageInflictorTargetBone = GameplayBones::GameplayBones_HeadBone;
			m_minLookatSoldierDuration = 2.f;
			m_maxLookatSoldierDuration = 6.f;
			m_minIgnoreSoldierDuration = 5.f;
			m_maxIgnoreSoldierDuration = 10.f;
			m_lookAtSlerpSpeed = 4.f;
			m_vehicleReactRadius = 4.f;
			m_vehicleSpeedThreshold = 5.f;
			m_vehicleDirectionConeAngle = 90.f;
			m_vehicleReactionDuration = 3.f;
			m_hasOwnTarget = true;
		};

		Realm m_realm; // 0x70 (112)
		AwarenessComponentBinding m_binding; // 0x74 (116)
		GameplayBones m_referenceJoint; // 0x114 (276)
		GameplayBones m_ownTargetBone; // 0x118 (280)
		float m_ownTargetRange; // 0x11C (284)
		float m_damageInflictorTargetDuration; // 0x120 (288)
		GameplayBones m_damageInflictorTargetBone; // 0x124 (292)
		float m_minLookatSoldierDuration; // 0x128 (296)
		float m_maxLookatSoldierDuration; // 0x12C (300)
		float m_minIgnoreSoldierDuration; // 0x130 (304)
		float m_maxIgnoreSoldierDuration; // 0x134 (308)
		float m_lookAtSlerpSpeed; // 0x138 (312)
		float m_vehicleReactRadius; // 0x13C (316)
		float m_vehicleSpeedThreshold; // 0x140 (320)
		float m_vehicleDirectionConeAngle; // 0x144 (324)
		float m_vehicleReactionDuration; // 0x148 (328)
		bool m_hasOwnTarget; // 0x14C (332)
	}; // 0x150 (336)
}

