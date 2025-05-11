///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ProcessorData.h>

namespace fb {
	class GravityData : public ProcessorData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("GravityData"); }
		virtual ~GravityData() override {}
		GravityData() {
			m_gravity = 9.82f;
			m_perParticleRandomness = 0.f;
		};

		float m_gravity; // 0x28 (40)
		float m_perParticleRandomness; // 0x2C (44)
	}; // 0x30 (48)
}

