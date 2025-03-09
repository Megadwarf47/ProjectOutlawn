///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainerPolicyAsset.h>
#include <fb/GameplayBones.h>
#include <fb/SimpleMeleeComponentBinding.h>
#include <fb/Vec3.h>

namespace fb {
	class SimpleMeleeCommonData : public DataContainerPolicyAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SimpleMeleeCommonData"); }
		virtual ~SimpleMeleeCommonData() override {}
		SimpleMeleeCommonData() {
			m_defensibleEscapeSpeed = Vec3(0.f, 40.f, 5.f);
			m_prepareTime = 0.3f;
			m_meleeStrikeTime = 0.2f;
			m_killTime = 1.5f;
			m_recoveryTime = 0.5f;
			m_endRecoveryAnimationTime = 2.f;
			m_meleeDefendZone = 0.f;
			m_meleeAttackZone = 150.f;
			m_meleeAttackDistance = 3.f;
			m_specialModeExtraDistance = 1.5f;
			m_temptingRangeTime = 0.25f;
			m_maxAttackHeightDifference = 1.2f;
			m_killDamage = 100.f;
			m_defenderNormalAttachBone = GameplayBones::GameplayBones_RootMeshBone;
			m_defenderSpecialAttachBone = GameplayBones::GameplayBones_RootMeshBone;
			m_escapeTimeDelay = 2.f;
			m_escapeHeightOffset = 2.f;
			m_killOnDamage = true;
		};

		SimpleMeleeComponentBinding m_meleeBinding; // 0x18 (24)
		Vec3 m_defensibleEscapeSpeed; // 0x1C0 (448)
		float m_prepareTime; // 0x1D0 (464)
		float m_meleeStrikeTime; // 0x1D4 (468)
		float m_killTime; // 0x1D8 (472)
		float m_recoveryTime; // 0x1DC (476)
		float m_endRecoveryAnimationTime; // 0x1E0 (480)
		float m_meleeDefendZone; // 0x1E4 (484)
		float m_meleeAttackZone; // 0x1E8 (488)
		float m_meleeAttackDistance; // 0x1EC (492)
		float m_specialModeExtraDistance; // 0x1F0 (496)
		float m_temptingRangeTime; // 0x1F4 (500)
		float m_maxAttackHeightDifference; // 0x1F8 (504)
		float m_killDamage; // 0x1FC (508)
		GameplayBones m_defenderNormalAttachBone; // 0x200 (512)
		GameplayBones m_defenderSpecialAttachBone; // 0x204 (516)
		float m_escapeTimeDelay; // 0x208 (520)
		float m_escapeHeightOffset; // 0x20C (524)
		bool m_killOnDamage; // 0x210 (528)
	}; // 0x220 (544)
}

