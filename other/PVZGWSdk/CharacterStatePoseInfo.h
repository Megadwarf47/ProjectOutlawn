///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CharacterPoseType.h>
#include <fb/DataContainer.h>
#include <fb/SpeedModifierData.h>

namespace fb {
	class CharacterStatePoseInfo : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CharacterStatePoseInfo"); }
		virtual ~CharacterStatePoseInfo() override {}
		CharacterStatePoseInfo() {
			m_poseType = CharacterPoseType::CharacterPoseType_Stand;
			m_velocity = 3.5f;
			m_accelerationGain = 1.f;
			m_decelerationGain = 1.f;
			m_sprintGain = 1.f;
			m_sprintMultiplier = 0.f;
			m_shallowWaterMultiplier = 1.f;
		};

		CharacterPoseType m_poseType; // 0x10 (16)
		float m_velocity; // 0x14 (20)
		float m_accelerationGain; // 0x18 (24)
		float m_decelerationGain; // 0x1C (28)
		float m_sprintGain; // 0x20 (32)
		float m_sprintMultiplier; // 0x24 (36)
		SpeedModifierData m_speedModifier; // 0x28 (40)
		float m_shallowWaterMultiplier; // 0x38 (56)
	}; // 0x40 (64)
}

