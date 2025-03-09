///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CtrRef.h>
#include <fb/DebrisClusterPartInfoData.h>
#include <fb/GameComponentEntityData.h>
#include <fb/Vec3.h>

namespace fb {
	class EffectBlueprint;
	class MeshAsset;
	class PhysicsEntityData;
	class SpatialEntityData;
}

namespace fb {
	class DebrisClusterData : public GameComponentEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DebrisClusterData"); }
		virtual ~DebrisClusterData() override {}
		DebrisClusterData() {
			m_pushVelocityMul = Vec3(1.f, 1.f, 1.f);
			m_maxActivePartsCount = 50;
			m_runtimeClusterLifetime = 0.f;
			m_compositePartCount = 0;
			m_activationPushForceMul = 1.f;
			m_projectileForceTransferMul = 0.f;
			m_onPartCollisionSpeedThreshold = 0.f;
			m_partialDestruction = false;
			m_clientSideOnly = true;
			m_activateOnSpawn = true;
			m_inEffectWorldOnly = false;
			m_noCollision = false;
			m_onPartCollisionEnable = false;
			m_killPartsOnCollision = false;
			m_deactivatePartsOnSleep = true;
			m_spawnExplosionOnFirstImpactOnly = true;
		};

		Vec3 m_initRotationRndMul; // 0x80 (128)
		Vec3 m_pushVelocityRndMul; // 0x90 (144)
		Vec3 m_pushVelocityMul; // 0xA0 (160)
		u32 m_maxActivePartsCount; // 0xB0 (176)
		float m_runtimeClusterLifetime; // 0xB4 (180)
		CtrRef<MeshAsset> m_mesh; // 0xB8 (184)
		u32 m_compositePartCount; // 0xC0 (192)
		Array<DebrisClusterPartInfoData> m_partHierarchy; // 0xC8 (200)
		CtrRef<PhysicsEntityData> m_physicsData; // 0xD0 (208)
		float m_activationPushForceMul; // 0xD8 (216)
		float m_projectileForceTransferMul; // 0xDC (220)
		CtrRef<EffectBlueprint> m_activationEffect; // 0xE0 (224)
		float m_onPartCollisionSpeedThreshold; // 0xE8 (232)
		CtrRef<EffectBlueprint> m_effect; // 0xF0 (240)
		CtrRef<SpatialEntityData> m_explosion; // 0xF8 (248)
		bool m_partialDestruction; // 0x100 (256)
		bool m_clientSideOnly; // 0x101 (257)
		bool m_activateOnSpawn; // 0x102 (258)
		bool m_inEffectWorldOnly; // 0x103 (259)
		bool m_noCollision; // 0x104 (260)
		bool m_onPartCollisionEnable; // 0x105 (261)
		bool m_killPartsOnCollision; // 0x106 (262)
		bool m_deactivatePartsOnSleep; // 0x107 (263)
		bool m_spawnExplosionOnFirstImpactOnly; // 0x108 (264)
	}; // 0x110 (272)
}

