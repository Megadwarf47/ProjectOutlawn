///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ProcessorData.h>

namespace fb {
	class SpawnRibbonRateData : public ProcessorData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SpawnRibbonRateData"); }
		virtual ~SpawnRibbonRateData() override {}
		SpawnRibbonRateData() {
			m_spawnRate = 20.f;
			m_angleDeviation = 0.f;
			m_distributeOverDistance = false;
			m_smoothSpawnPosition = false;

			m_evaluatorInput = EmittableField::EfOne;
		};

		float m_spawnRate; // 0x28 (40)
		float m_angleDeviation; // 0x2C (44)
		bool m_distributeOverDistance; // 0x30 (48)
		bool m_smoothSpawnPosition; // 0x31 (49)
	}; // 0x38 (56)
}

