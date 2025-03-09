///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DamageIndicationType.h>
#include <fb/DamageType.h>
#include <fb/MaterialDecl.h>
#include <fb/SpatialEntityData.h>
#include <fb/Vec3.h>

namespace fb {
	class DestructionMaskVolumeEntityData;
	class EffectBlueprint;
	class MaskVolumeEntityData;
}

namespace fb {
	class ExplosionEntityData : public SpatialEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ExplosionEntityData"); }
		virtual ~ExplosionEntityData() override {}
		ExplosionEntityData() {
			m_damageIndicationType = DamageIndicationType::DamageIndicationType_GiverPlayer;
			m_empTime = 0.f;
			m_maxOcclusionRaycastRadius = 0.5f;
			m_innerBlastRadius = 1.f;
			m_blastDamage = 100.f;
			m_blastRadius = 5.f;
			m_blastImpulse = 5000.f;
			m_shockwaveDamage = 1.f;
			m_shockwaveRadius = 15.f;
			m_shockwaveImpulse = 500.f;
			m_shockwaveTime = 0.25f;
			m_damageType = DamageType::DamageType_Normal;
			m_cameraShockwaveRadius = 3.f;
			m_spawnDelay = 0.f;
			m_noFriendliesEffectOnEnabledFriendlyFire = true;
			m_useEntityTransformForDetonationEffect = false;
			m_secondaryMaterialsActive = false;
			m_hasStunEffect = false;
			m_groupDamage = false;
			m_ignoreMaterialProtectionThreshold = false;
			m_doFullDamageOnInside = false;
			m_disableOcclusion = false;
			m_disableStaticEntityOcclusion = false;
			m_triggerImpairedHearing = true;
			m_enabled = true;
		};

		Vec3 m_detonationEffectOrientationOverride; // 0x60 (96)
		CtrRef<EffectBlueprint> m_detonationEffect; // 0x70 (112)
		CtrRef<EffectBlueprint> m_detonationEffectForFriendlies; // 0x78 (120)
		CtrRef<MaskVolumeEntityData> m_maskVolume; // 0x80 (128)
		CtrRef<DestructionMaskVolumeEntityData> m_destructionMaskVolume; // 0x88 (136)
		MaterialDecl m_materialPair; // 0x90 (144)
		MaterialDecl m_secondaryMaterialPair; // 0x94 (148)
		DamageIndicationType m_damageIndicationType; // 0x98 (152)
		float m_empTime; // 0x9C (156)
		float m_maxOcclusionRaycastRadius; // 0xA0 (160)
		float m_innerBlastRadius; // 0xA4 (164)
		float m_blastDamage; // 0xA8 (168)
		float m_blastRadius; // 0xAC (172)
		float m_blastImpulse; // 0xB0 (176)
		float m_shockwaveDamage; // 0xB4 (180)
		float m_shockwaveRadius; // 0xB8 (184)
		float m_shockwaveImpulse; // 0xBC (188)
		float m_shockwaveTime; // 0xC0 (192)
		DamageType m_damageType; // 0xC4 (196)
		float m_cameraShockwaveRadius; // 0xC8 (200)
		float m_spawnDelay; // 0xCC (204)
		bool m_noFriendliesEffectOnEnabledFriendlyFire; // 0xD0 (208)
		bool m_useEntityTransformForDetonationEffect; // 0xD1 (209)
		bool m_secondaryMaterialsActive; // 0xD2 (210)
		bool m_hasStunEffect; // 0xD3 (211)
		bool m_groupDamage; // 0xD4 (212)
		bool m_ignoreMaterialProtectionThreshold; // 0xD5 (213)
		bool m_doFullDamageOnInside; // 0xD6 (214)
		bool m_disableOcclusion; // 0xD7 (215)
		bool m_disableStaticEntityOcclusion; // 0xD8 (216)
		bool m_triggerImpairedHearing; // 0xD9 (217)
		bool m_enabled; // 0xDA (218)
	}; // 0xE0 (224)
}

