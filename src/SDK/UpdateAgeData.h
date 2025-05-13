///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ProcessorData.h>

namespace fb {
	class UpdateAgeData : public ProcessorData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UpdateAgeData"); }
		virtual ~UpdateAgeData() override {}
		UpdateAgeData() {
			m_lifetime = 5.f;
			m_randomLifetimeScale = 0.f;
			m_maxFactor = 1.f;

			m_evaluatorInput = EmittableField::EfOne;
		};

		float m_lifetime; // 0x28 (40)
		float m_randomLifetimeScale; // 0x2C (44)
		float m_maxFactor; // 0x30 (48)
	}; // 0x38 (56)
}

