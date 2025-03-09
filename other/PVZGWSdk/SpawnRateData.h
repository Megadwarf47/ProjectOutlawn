///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ProcessorData.h>

namespace fb {
	class SpawnRateData : public ProcessorData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SpawnRateData"); }
		virtual ~SpawnRateData() override {}
		SpawnRateData() {
			m_spawnRate = 20.f;
			m_distributeOverTime = true;
			m_distributeOverDistance = false;
			m_smoothSpawnPosition = false;

			m_evaluatorInput = EmittableField::EfOne;
		};

		float m_spawnRate; // 0x28 (40)
		bool m_distributeOverTime; // 0x2C (44)
		bool m_distributeOverDistance; // 0x2D (45)
		bool m_smoothSpawnPosition; // 0x2E (46)
	}; // 0x30 (48)
}

