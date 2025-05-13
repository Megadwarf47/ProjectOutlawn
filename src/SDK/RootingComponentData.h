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
#include <fb/RootingComponentBinding.h>
#include <fb/Vec3.h>

namespace fb {
	class EffectBlueprint;
	class InputRestrictionAsset;
}

namespace fb {
	class RootingComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RootingComponentData"); }
		virtual ~RootingComponentData() override {}
		RootingComponentData() {
			m_rootingTime = 1.f;
			m_unrootingTime = 1.f;
			m_cameraBlendTime = 1.5f;
			m_rootingCooldownTime = 5.f;
			m_rootedStamina = 0.f;
			m_rootedStaminaDayDepletionRateNotMoving = 0.f;
			m_rootedStaminaNightDepletionRateNotMoving = 0.f;
			m_rootedStaminaDayDepletionRateMoving = 0.f;
			m_rootedStaminaNightDepletionRateMoving = 0.f;
			m_rootInput = -1341426433;
			m_alternateExitRootingInput = 1573615674;
			m_damageOnUnrooting = 0.f;
			m_damageOnUnrootingRadius = 0.f;
			m_isRootingAllowed = true;
			m_useInputEventsOnly = false;
			m_exitRootingIfStunned = false;
			m_disableCharacterCollisionWhenRooted = false;
			m_ignoreDamageWhenRooted = false;
		};

		Vec3 m_rootedCamOffset; // 0x70 (112)
		float m_rootingTime; // 0x80 (128)
		float m_unrootingTime; // 0x84 (132)
		float m_cameraBlendTime; // 0x88 (136)
		float m_rootingCooldownTime; // 0x8C (140)
		CtrRef<InputRestrictionAsset> m_restrictionWhileRooting; // 0x90 (144)
		CtrRef<InputRestrictionAsset> m_restrictionWhileRooted; // 0x98 (152)
		CtrRef<InputRestrictionAsset> m_restrictionWhileUnRooted; // 0xA0 (160)
		float m_rootedStamina; // 0xA8 (168)
		float m_rootedStaminaDayDepletionRateNotMoving; // 0xAC (172)
		float m_rootedStaminaNightDepletionRateNotMoving; // 0xB0 (176)
		float m_rootedStaminaDayDepletionRateMoving; // 0xB4 (180)
		float m_rootedStaminaNightDepletionRateMoving; // 0xB8 (184)
		s32 m_rootInput; // 0xBC (188)
		s32 m_alternateExitRootingInput; // 0xC0 (192)
		CtrRef<EffectBlueprint> m_rootingEffect; // 0xC8 (200)
		CtrRef<EffectBlueprint> m_rootedEffect; // 0xD0 (208)
		CtrRef<EffectBlueprint> m_unRootingEffect; // 0xD8 (216)
		float m_damageOnUnrooting; // 0xE0 (224)
		float m_damageOnUnrootingRadius; // 0xE4 (228)
		MaterialDecl m_damageOnUnrootingMaterialPair; // 0xE8 (232)
		RootingComponentBinding m_rootingAnimationBinding; // 0xEC (236)
		bool m_isRootingAllowed; // 0x128 (296)
		bool m_useInputEventsOnly; // 0x129 (297)
		bool m_exitRootingIfStunned; // 0x12A (298)
		bool m_disableCharacterCollisionWhenRooted; // 0x12B (299)
		bool m_ignoreDamageWhenRooted; // 0x12C (300)
	}; // 0x130 (304)
}

