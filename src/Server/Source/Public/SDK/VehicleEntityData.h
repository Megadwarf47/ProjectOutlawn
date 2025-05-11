///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AngleOfImpactData.h>
#include <fb/Array.h>
#include <fb/ControllableEntityData.h>
#include <fb/CtrRef.h>
#include <fb/LinearTransform.h>
#include <fb/MPModeData.h>
#include <fb/String.h>
#include <fb/Vec3.h>
#include <fb/VehicleHealthZoneData.h>
#include <fb/VehicleHudData.h>
#include <fb/VehicleLockableInfoData.h>

namespace fb {
	class EffectBlueprint;
	class EntityVoiceOverInfo;
	class ExplosionEntityData;
	class MeshAsset;
	class ObjectBlueprint;
	class VehicleSoundData;
}

namespace fb {
	class VehicleEntityData : public ControllableEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VehicleEntityData"); }
		virtual ~VehicleEntityData() override {}
		virtual bool getIsNetworkedResource() const override { return true; }
		VehicleEntityData() {
			m_flirKeyColor = Vec3(1.f, 1.f, 1.f);
			m_disabledDamageThreshold = 0.f;
			m_preDestructionDamageThreshold = 0.f;
			m_topHitHeight = 0.75f;
			m_topHitAngle = 45.f;
			m_regenerationDelay = 5.f;
			m_regenerationRate = 0.f;
			m_armorMultiplier = 1.f;
			m_regenerationDelayMultiplier = 1.f;
			m_regenerationRateMultiplier = 1.f;
			m_emergencyRepairHealth = 30.f;
			m_decayDelay = 5.f;
			m_decayRate = 0.f;
			m_criticalDamageTime = 5.f;
			m_preExplosionTime = 0.5f;
			m_boneCount = 0;
			m_maxPlayersInVehicle = -1;
			m_minSpeedForMineActivation = 0.1f;
			m_upsideDownDamage = 50.f;
			m_upsideDownDamageDelay = 1.f;
			m_upsideDownAngle = 120.f;
			m_waterDamage = 30.f;
			m_belowWaterDamageDelay = 2.f;
			m_waterDamageOffset = 0.f;
			m_velocityDamageThreshold = 75.f;
			m_velocityDamageMagnifier = 5.f;
			m_killSoldierCollisionSpeedThreshold = 5.f;
			m_exitSpeedThreshold = 0.f;
			m_exitDirectionSpeedThreshold = 1.f;
			m_flirValue = 1.f;
			m_exitCameraSwitchDelay = 0.f;
			m_lockingTimeMultiplier = 1.f;
			m_highAltitudeLockHeight = 0.f;
			m_nametagHeightScale = 0.75f;
			m_spottingFovScale = 1.f;
			m_allowVehicleOutsideCombatAreas = true;
			m_useTopZone = false;
			m_healthZonesShareDamage = true;
			m_useProtectedShields = false;
			m_showPlayerHealth = false;
			m_foregroundRenderCockpitMesh = true;
			m_motionBlurMask = false;
			m_suppressDamageByPassengers = false;
			m_isAffectedByEMP = true;
			m_canTakeDynamicFireDamage = false;
			m_throwOutSoldierInsideOnWaterDamage = true;
			m_ignoreSoldierCollisionNormal = false;
			m_choseExitPointByDirection = true;
			m_exitAllowed = true;
			m_enableGroundmapLighting = false;
			m_useAsTeamSpawner = true;
			m_isLockable = true;
			m_neverReportVehicleAsEmpty = false;
			m_useLowAltitudeHeatSignature = false;
			m_useSpottingTargetComponentForRaycast = false;
			m_equipmentFakeVehicle = false;
			m_explosionPacksAttachable = true;
		};

		Vec3 m_criticallyDamagedEffectPosition; // 0xB0 (176)
		Vec3 m_preExplosionEffectPosition; // 0xC0 (192)
		VehicleHudData m_hudData; // 0xD0 (208)
		Vec3 m_flirKeyColor; // 0x110 (272)
		Vec3 m_interactionOffset; // 0x120 (288)
		String m_controllableType; // 0x130 (304)
		float m_disabledDamageThreshold; // 0x138 (312)
		float m_preDestructionDamageThreshold; // 0x13C (316)
		VehicleHealthZoneData m_frontHealthZone; // 0x140 (320)
		VehicleHealthZoneData m_rearHealthZone; // 0x160 (352)
		VehicleHealthZoneData m_leftHealthZone; // 0x180 (384)
		VehicleHealthZoneData m_rightHealthZone; // 0x1A0 (416)
		VehicleHealthZoneData m_topHealthZone; // 0x1C0 (448)
		float m_topHitHeight; // 0x1E0 (480)
		float m_topHitAngle; // 0x1E4 (484)
		float m_regenerationDelay; // 0x1E8 (488)
		float m_regenerationRate; // 0x1EC (492)
		float m_armorMultiplier; // 0x1F0 (496)
		float m_regenerationDelayMultiplier; // 0x1F4 (500)
		float m_regenerationRateMultiplier; // 0x1F8 (504)
		float m_emergencyRepairHealth; // 0x1FC (508)
		float m_decayDelay; // 0x200 (512)
		float m_decayRate; // 0x204 (516)
		CtrRef<EffectBlueprint> m_criticallyDamagedEffect; // 0x208 (520)
		float m_criticalDamageTime; // 0x210 (528)
		CtrRef<EffectBlueprint> m_preExplosionEffect; // 0x218 (536)
		float m_preExplosionTime; // 0x220 (544)
		CtrRef<ExplosionEntityData> m_explosion; // 0x228 (552)
		CtrRef<MeshAsset> m_mesh; // 0x230 (560)
		u32 m_boneCount; // 0x238 (568)
		Array<LinearTransform> m_basePoseTransforms; // 0x240 (576)
		CtrRef<ObjectBlueprint> m_cockpitMesh; // 0x248 (584)
		String m_nameSid; // 0x250 (592)
		s32 m_maxPlayersInVehicle; // 0x258 (600)
		float m_minSpeedForMineActivation; // 0x25C (604)
		float m_upsideDownDamage; // 0x260 (608)
		float m_upsideDownDamageDelay; // 0x264 (612)
		float m_upsideDownAngle; // 0x268 (616)
		float m_waterDamage; // 0x26C (620)
		float m_belowWaterDamageDelay; // 0x270 (624)
		float m_waterDamageOffset; // 0x274 (628)
		float m_velocityDamageThreshold; // 0x278 (632)
		float m_velocityDamageMagnifier; // 0x27C (636)
		float m_killSoldierCollisionSpeedThreshold; // 0x280 (640)
		float m_exitSpeedThreshold; // 0x284 (644)
		float m_exitDirectionSpeedThreshold; // 0x288 (648)
		float m_flirValue; // 0x28C (652)
		MPModeData m_mpMode; // 0x290 (656)
		float m_exitCameraSwitchDelay; // 0x294 (660)
		AngleOfImpactData m_angleOfImpact; // 0x298 (664)
		float m_lockingTimeMultiplier; // 0x2B0 (688)
		VehicleLockableInfoData m_vehicleLockableInfo; // 0x2B4 (692)
		float m_highAltitudeLockHeight; // 0x2C4 (708)
		CtrRef<VehicleSoundData> m_sound; // 0x2C8 (712)
		CtrRef<EntityVoiceOverInfo> m_voiceOverInfo; // 0x2D0 (720)
		float m_nametagHeightScale; // 0x2D8 (728)
		float m_spottingFovScale; // 0x2DC (732)
		bool m_allowVehicleOutsideCombatAreas; // 0x2E0 (736)
		bool m_useTopZone; // 0x2E1 (737)
		bool m_healthZonesShareDamage; // 0x2E2 (738)
		bool m_useProtectedShields; // 0x2E3 (739)
		bool m_showPlayerHealth; // 0x2E4 (740)
		bool m_foregroundRenderCockpitMesh; // 0x2E5 (741)
		bool m_motionBlurMask; // 0x2E6 (742)
		bool m_suppressDamageByPassengers; // 0x2E7 (743)
		bool m_isAffectedByEMP; // 0x2E8 (744)
		bool m_canTakeDynamicFireDamage; // 0x2E9 (745)
		bool m_throwOutSoldierInsideOnWaterDamage; // 0x2EA (746)
		bool m_ignoreSoldierCollisionNormal; // 0x2EB (747)
		bool m_choseExitPointByDirection; // 0x2EC (748)
		bool m_exitAllowed; // 0x2ED (749)
		bool m_enableGroundmapLighting; // 0x2EE (750)
		bool m_useAsTeamSpawner; // 0x2EF (751)
		bool m_isLockable; // 0x2F0 (752)
		bool m_neverReportVehicleAsEmpty; // 0x2F1 (753)
		bool m_useLowAltitudeHeatSignature; // 0x2F2 (754)
		bool m_useSpottingTargetComponentForRaycast; // 0x2F3 (755)
		bool m_equipmentFakeVehicle; // 0x2F4 (756)
		bool m_explosionPacksAttachable; // 0x2F5 (757)
	}; // 0x300 (768)
}

