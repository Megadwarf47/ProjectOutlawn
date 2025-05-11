///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ProcessorData.h>

namespace fb {
	class SpawnDirectionData : public ProcessorData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SpawnDirectionData"); }
		virtual ~SpawnDirectionData() override {}
		SpawnDirectionData() {
			m_directionFromEmitterOrigin = 0.f;
			m_inheritSpeedAmount = 1.f;
			m_inheritSpeedSmoothingFactor = 0.f;
			m_inheritSpeedRandomness = 0.f;
			m_inheritSpeedAndDirectionFromEmitter = false;

			m_evaluatorInput = EmittableField::EfOne;
		};

		float m_directionFromEmitterOrigin; // 0x28 (40)
		float m_inheritSpeedAmount; // 0x2C (44)
		float m_inheritSpeedSmoothingFactor; // 0x30 (48)
		float m_inheritSpeedRandomness; // 0x34 (52)
		bool m_inheritSpeedAndDirectionFromEmitter; // 0x38 (56)
	}; // 0x40 (64)
}

