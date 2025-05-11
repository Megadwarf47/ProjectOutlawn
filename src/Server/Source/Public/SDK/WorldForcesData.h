///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ProcessorData.h>

namespace fb {
	class WorldForcesData : public ProcessorData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WorldForcesData"); }
		virtual ~WorldForcesData() override {}
		WorldForcesData() {
			m_forcesMultiplier = 1.f;
			m_perParticleRandomness = 0.f;
		};

		float m_forcesMultiplier; // 0x28 (40)
		float m_perParticleRandomness; // 0x2C (44)
	}; // 0x30 (48)
}

