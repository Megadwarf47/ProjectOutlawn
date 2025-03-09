///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BuffEffectData.h>
#include <fb/CtrRef.h>
#include <fb/GameplayBones.h>

namespace fb {
	class EffectBlueprint;
}

namespace fb {
	class VFXBuffEffectData : public BuffEffectData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VFXBuffEffectData"); }
		virtual ~VFXBuffEffectData() override {}
		VFXBuffEffectData() {
			m_bone = GameplayBones::GameplayBones_UndefinedBone;
			m_minPowerThreshold = 0.f;
			m_maxPowerThreshold = 1.f;
		};

		CtrRef<EffectBlueprint> m_effect; // 0x10 (16)
		CtrRef<EffectBlueprint> m_applicationEffect; // 0x18 (24)
		CtrRef<EffectBlueprint> m_removalEffect; // 0x20 (32)
		GameplayBones m_bone; // 0x28 (40)
		float m_minPowerThreshold; // 0x2C (44)
		float m_maxPowerThreshold; // 0x30 (48)
	}; // 0x38 (56)
}

