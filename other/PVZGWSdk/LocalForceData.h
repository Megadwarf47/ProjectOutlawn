///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ProcessorData.h>
#include <fb/Vec3.h>

namespace fb {
	class LocalForceData : public ProcessorData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("LocalForceData"); }
		virtual ~LocalForceData() override {}
		LocalForceData() {
			m_perParticleRandomness = 0.f;
			m_emitterLocalSpaceForce = false;
			m_localForce = Vec3(1.f, 0.f, 0.f);
		};

		float m_perParticleRandomness; // 0x28 (40)
		bool m_emitterLocalSpaceForce; // 0x2C (44)
		Vec3 m_localForce; // 0x30 (48)
	}; // 0x40 (64)
}

