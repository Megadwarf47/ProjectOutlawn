///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/GameComponentData.h>
#include <fb/MaterialDecl.h>

namespace fb {
	class BuffData;
}

namespace fb {
	class BuffApplicatorComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BuffApplicatorComponentData"); }
		virtual ~BuffApplicatorComponentData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		BuffApplicatorComponentData() {
			m_applyOnWeaponChargingDelay = 0.f;
			m_applyOnWeaponFire = true;
			m_applyOnWeaponFireAutomatic = false;
			m_applyOnWeaponCharging = false;
			m_applyOnWeaponPriming = false;
			m_applyOnWeaponActive = false;
			m_refreshOnWeaponActive = false;
			m_applyOnWeaponDamage = false;
			m_applyOnCollision = true;
			m_applyOnShockwave = true;
			m_applyOnPotentialHit = false;
			m_applyOnAnyMeleeKillToOwner = false;
			m_killOnMeleeAttackerDiedToVictim = false;
			m_killOnMeleeAttackerDied = false;
			m_killOnMeleeVictimDefended = false;
			m_applyOnMeleeAttackToOwner = false;
			m_applyOnMeleeAttackToVictim = false;
			m_applyOnMeleeKillToOwner = false;
			m_applyOnMeleeKillToVictim = false;
			m_applyOnMeleeDefendToOwner = false;
			m_applyOnMeleeDefendToVictim = false;
			m_killOnMeleeAttackEndedToVictim = false;
			m_applyOnMeleeRecoveryStarted = false;
			m_killOnMeleeRecoveryStarted = false;
			m_applyOnMeleeRecoveryFinished = false;
			m_killOnMeleeRecoveryFinished = false;
		};

		CtrRef<BuffData> m_buff; // 0x70 (112)
		float m_applyOnWeaponChargingDelay; // 0x78 (120)
		MaterialDecl m_material; // 0x7C (124)
		bool m_applyOnWeaponFire; // 0x80 (128)
		bool m_applyOnWeaponFireAutomatic; // 0x81 (129)
		bool m_applyOnWeaponCharging; // 0x82 (130)
		bool m_applyOnWeaponPriming; // 0x83 (131)
		bool m_applyOnWeaponActive; // 0x84 (132)
		bool m_refreshOnWeaponActive; // 0x85 (133)
		bool m_applyOnWeaponDamage; // 0x86 (134)
		bool m_applyOnCollision; // 0x87 (135)
		bool m_applyOnShockwave; // 0x88 (136)
		bool m_applyOnPotentialHit; // 0x89 (137)
		bool m_applyOnAnyMeleeKillToOwner; // 0x8A (138)
		bool m_killOnMeleeAttackerDiedToVictim; // 0x8B (139)
		bool m_killOnMeleeAttackerDied; // 0x8C (140)
		bool m_killOnMeleeVictimDefended; // 0x8D (141)
		bool m_applyOnMeleeAttackToOwner; // 0x8E (142)
		bool m_applyOnMeleeAttackToVictim; // 0x8F (143)
		bool m_applyOnMeleeKillToOwner; // 0x90 (144)
		bool m_applyOnMeleeKillToVictim; // 0x91 (145)
		bool m_applyOnMeleeDefendToOwner; // 0x92 (146)
		bool m_applyOnMeleeDefendToVictim; // 0x93 (147)
		bool m_killOnMeleeAttackEndedToVictim; // 0x94 (148)
		bool m_applyOnMeleeRecoveryStarted; // 0x95 (149)
		bool m_killOnMeleeRecoveryStarted; // 0x96 (150)
		bool m_applyOnMeleeRecoveryFinished; // 0x97 (151)
		bool m_killOnMeleeRecoveryFinished; // 0x98 (152)
	}; // 0xA0 (160)
}

