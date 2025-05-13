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
	class BeamVFXBuffEffectData : public BuffEffectData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BeamVFXBuffEffectData"); }
		virtual ~BeamVFXBuffEffectData() override {}
		BeamVFXBuffEffectData() {
			m_sourceBone = GameplayBones::GameplayBones_UndefinedBone;
			m_targetBone = GameplayBones::GameplayBones_UndefinedBone;
			m_minPowerThreshold = 0.f;
			m_maxPowerThreshold = 1.f;
		};

		CtrRef<EffectBlueprint> m_effect; // 0x10 (16)
		GameplayBones m_sourceBone; // 0x18 (24)
		GameplayBones m_targetBone; // 0x1C (28)
		float m_minPowerThreshold; // 0x20 (32)
		float m_maxPowerThreshold; // 0x24 (36)
	}; // 0x28 (40)
}

