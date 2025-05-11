///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class LandingFlapData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("LandingFlapData"); }
		virtual ~LandingFlapData() override {}
		LandingFlapData() {
			m_activationHeight = 30.f;
			m_heightTolerance = 5.f;
			m_activationVelocity = 100.f;
			m_velocityTolerance = 10.f;
		};

		float m_activationHeight; // 0x10 (16)
		float m_heightTolerance; // 0x14 (20)
		float m_activationVelocity; // 0x18 (24)
		float m_velocityTolerance; // 0x1C (28)
	}; // 0x20 (32)
}

