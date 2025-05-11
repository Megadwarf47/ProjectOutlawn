///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/GameComponentData.h>
#include <fb/Vec3.h>

namespace fb {
	class EffectBlueprint;
	class WeaponUnlockAsset;
}

namespace fb {
	class HealBeamComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("HealBeamComponentData"); }
		virtual ~HealBeamComponentData() override {}
		HealBeamComponentData() {
			m_healBeamAnchorAltOffset = Vec3(0.f, 0.75f, 0.f);
			m_healBeamActiveTime = 10.f;
			m_healRate = 10.f;
			m_cooldownTime = 10.f;
			m_maxHealStartDistance = 10.f;
			m_maxHealDistance = 20.f;
			m_maxTargetAngle = 45.f;
			m_terminateBeamInput = 1573615674;
			m_allowHealOnFullHealthTargets = true;
			m_preferDamagedTargets = true;
		};

		Vec3 m_healBeamAnchor; // 0x70 (112)
		Vec3 m_healBeamAnchorAltOffset; // 0x80 (128)
		float m_healBeamActiveTime; // 0x90 (144)
		float m_healRate; // 0x94 (148)
		float m_cooldownTime; // 0x98 (152)
		float m_maxHealStartDistance; // 0x9C (156)
		float m_maxHealDistance; // 0xA0 (160)
		float m_maxTargetAngle; // 0xA4 (164)
		s32 m_terminateBeamInput; // 0xA8 (168)
		CtrRef<EffectBlueprint> m_healBeamEffect; // 0xB0 (176)
		CtrRef<EffectBlueprint> m_healBeamSourceEffect; // 0xB8 (184)
		CtrRef<EffectBlueprint> m_healBeamTargetEffect; // 0xC0 (192)
		CtrRef<WeaponUnlockAsset> m_weaponUnlockAsset; // 0xC8 (200)
		bool m_allowHealOnFullHealthTargets; // 0xD0 (208)
		bool m_preferDamagedTargets; // 0xD1 (209)
	}; // 0xE0 (224)
}

