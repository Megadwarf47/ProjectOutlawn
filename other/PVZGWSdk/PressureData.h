///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Asset.h>
#include <fb/PressureDifficultyData.h>

namespace fb {
	class PressureData : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PressureData"); }
		virtual ~PressureData() override {}
		PressureData() {
			m_weight = 5.f;
			m_timeAllowance = 10.f;
			m_attackRadius = 8.f;
			m_readyRadius = 15.f;
		};

		float m_weight; // 0x18 (24)
		float m_timeAllowance; // 0x1C (28)
		float m_attackRadius; // 0x20 (32)
		float m_readyRadius; // 0x24 (36)
		Array<PressureDifficultyData> m_defenderDifficulty; // 0x28 (40)
	}; // 0x30 (48)
}

