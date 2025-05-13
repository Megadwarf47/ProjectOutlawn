///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ProcessorData.h>

namespace fb {
	class WorldWindData : public ProcessorData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WorldWindData"); }
		virtual ~WorldWindData() override {}
		WorldWindData() {
			m_windMultiplier = 1.f;
			m_perParticleRandomness = 0.f;
		};

		float m_windMultiplier; // 0x28 (40)
		float m_perParticleRandomness; // 0x2C (44)
	}; // 0x30 (48)
}

