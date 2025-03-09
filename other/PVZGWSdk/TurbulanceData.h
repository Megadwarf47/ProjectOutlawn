///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ProcessorData.h>
#include <fb/TurbulenceNoiseType.h>

namespace fb {
	class TurbulanceData : public ProcessorData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TurbulanceData"); }
		virtual ~TurbulanceData() override {}
		TurbulanceData() {
			m_intensity = 0.5f;
			m_noiseType = TurbulenceNoiseType::TurbulenceNoiseType_Random;
			m_periodSpace = 1.f;
			m_turbulenceForceAsInstantVelocity = 0.f;
			m_octaves = 1;
			m_octavePersistence = 0.5f;
			m_perParticleRandomness = 0.f;
		};

		float m_intensity; // 0x28 (40)
		TurbulenceNoiseType m_noiseType; // 0x2C (44)
		float m_periodSpace; // 0x30 (48)
		float m_turbulenceForceAsInstantVelocity; // 0x34 (52)
		s32 m_octaves; // 0x38 (56)
		float m_octavePersistence; // 0x3C (60)
		float m_perParticleRandomness; // 0x40 (64)
	}; // 0x48 (72)
}

