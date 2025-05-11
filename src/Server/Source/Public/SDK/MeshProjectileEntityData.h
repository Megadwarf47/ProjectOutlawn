///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/ProjectileEntityData.h>
#include <fb/Vec3.h>

namespace fb {
	class EffectBlueprint;
	class MeshAsset;
}

namespace fb {
	class MeshProjectileEntityData : public ProjectileEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MeshProjectileEntityData"); }
		virtual ~MeshProjectileEntityData() override {}
		MeshProjectileEntityData() {
			m_instantAttachableTestDistance = 3.f;
			m_instantAttachableVisualConvergenceDelay = -1.f;
			m_instantAttachableVisualConvergenceDuration = -1.f;
			m_maxAttachableInclination = 45.f;
			m_unspawnAfterDetonationDelay = 0.f;
			m_isAttachable = false;
			m_instantAttachableTestUnderReticule = true;
			m_extraDamping = false;
		};

		Vec3 m_initialAngularVelocity; // 0xE0 (224)
		CtrRef<MeshAsset> m_mesh; // 0xF0 (240)
		CtrRef<EffectBlueprint> m_trailEffect; // 0xF8 (248)
		float m_instantAttachableTestDistance; // 0x100 (256)
		float m_instantAttachableVisualConvergenceDelay; // 0x104 (260)
		float m_instantAttachableVisualConvergenceDuration; // 0x108 (264)
		float m_maxAttachableInclination; // 0x10C (268)
		float m_unspawnAfterDetonationDelay; // 0x110 (272)
		bool m_isAttachable; // 0x114 (276)
		bool m_instantAttachableTestUnderReticule; // 0x115 (277)
		bool m_extraDamping; // 0x116 (278)
	}; // 0x120 (288)
}

