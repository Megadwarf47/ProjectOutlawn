///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CharacterEntityData.h>
#include <fb/CtrRef.h>
#include <fb/HidableSoldierMeshWeaponPart.h>
#include <fb/MaterialDecl.h>
#include <fb/RefArray.h>
#include <fb/Vec3.h>

namespace fb {
	class BoneFakePhysicsData;
	class BreathControlData;
	class CharacterPhysicsData;
	class CollisionData;
	class SoldierAimingConstraintsData;
	class SoldierAutoAimData;
	class SoldierHeadCollisionData;
	class SoldierHealthModuleData;
	class SoldierSprintSettingsData;
}

namespace fb {
	class SoldierEntityData : public CharacterEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoldierEntityData"); }
		virtual ~SoldierEntityData() override {}
		SoldierEntityData() {
			m_flirKeyColor = Vec3(1.f, 1.f, 1.f);
			m_impulseReactionTime = 0.f;
			m_flirValue = 1.f;
			m_explosionDamageModifier = 1.f;
			m_regenerationDelayModifier = 1.f;
			m_fallDamageThreshold = 0.f;
			m_useSpineXRotation = false;
			m_showWeaponWhenDead = false;
			m_enableGroundmapLighting = false;
			m_lowerGunOnOwnTeam = true;
			m_proximityCheck = false;
			m_freeSpaceCheck = false;
			m_collisionEnabled = true;
			m_physicsControlled = true;
			m_isPushable = true;
			m_humanPlayerControlled = true;
			m_interactiveManDownAllowed = true;
			m_showNametag = true;
		};

		Vec3 m_flirKeyColor; // 0xE0 (224)
		MaterialDecl m_footMaterialPair; // 0xF0 (240)
		MaterialDecl m_headMaterialPair; // 0xF4 (244)
		RefArray<BoneFakePhysicsData> m_boneFakePhysics; // 0xF8 (248)
		CtrRef<SoldierAutoAimData> m_autoAim; // 0x100 (256)
		CtrRef<SoldierAimingConstraintsData> m_aimingConstraints; // 0x108 (264)
		CtrRef<SoldierHeadCollisionData> m_headCollision; // 0x110 (272)
		CtrRef<CharacterPhysicsData> m_characterPhysics; // 0x118 (280)
		CtrRef<SoldierSprintSettingsData> m_sprintSettings; // 0x120 (288)
		Array<HidableSoldierMeshWeaponPart> m_hidableMeshParts; // 0x128 (296)
		float m_impulseReactionTime; // 0x130 (304)
		CtrRef<SoldierHealthModuleData> m_healthModule; // 0x138 (312)
		Array<s32> m_abortSpawnInvisibilityInputs; // 0x140 (320)
		RefArray<BreathControlData> m_breathControl; // 0x148 (328)
		CtrRef<CollisionData> m_collisionInfo; // 0x150 (336)
		float m_flirValue; // 0x158 (344)
		float m_explosionDamageModifier; // 0x15C (348)
		float m_regenerationDelayModifier; // 0x160 (352)
		float m_fallDamageThreshold; // 0x164 (356)
		bool m_useSpineXRotation; // 0x168 (360)
		bool m_showWeaponWhenDead; // 0x169 (361)
		bool m_enableGroundmapLighting; // 0x16A (362)
		bool m_lowerGunOnOwnTeam; // 0x16B (363)
		bool m_proximityCheck; // 0x16C (364)
		bool m_freeSpaceCheck; // 0x16D (365)
		bool m_collisionEnabled; // 0x16E (366)
		bool m_physicsControlled; // 0x16F (367)
		bool m_isPushable; // 0x170 (368)
		bool m_humanPlayerControlled; // 0x171 (369)
		bool m_interactiveManDownAllowed; // 0x172 (370)
		bool m_showNametag; // 0x173 (371)
	}; // 0x180 (384)
}

