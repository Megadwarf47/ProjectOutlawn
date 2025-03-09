///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/ModsComponentData.h>

namespace fb {
	class EffectBlueprint;
}

namespace fb {
	class ModsFogComponentData : public ModsComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ModsFogComponentData"); }
		virtual ~ModsFogComponentData() override {}
		ModsFogComponentData() {
			m_chargeRate = 1.f;
			m_dischargeRate = 4.f;
			m_minFogThreshold = 1.f;
			m_maxFogThreshold = 10.f;
			m_maxFogLevel = 16.f;
		};

		float m_chargeRate; // 0xD0 (208)
		float m_dischargeRate; // 0xD4 (212)
		float m_minFogThreshold; // 0xD8 (216)
		float m_maxFogThreshold; // 0xDC (220)
		float m_maxFogLevel; // 0xE0 (224)
		CtrRef<EffectBlueprint> m_fogEffect; // 0xE8 (232)
	}; // 0xF0 (240)
}

