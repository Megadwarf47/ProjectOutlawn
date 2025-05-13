///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CharacterHealthComponentData.h>
#include <fb/DamageEntryData.h>

namespace fb {
	class SoldierHealthComponentData : public CharacterHealthComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoldierHealthComponentData"); }
		virtual ~SoldierHealthComponentData() override {}
		SoldierHealthComponentData() {
			m_underWaterHoldBreathTime = 10.f;
			m_underWaterBreathRegenerationTime = 5.f;
			m_underWaterClearSpottingTime = 1.f;
		};

		float m_underWaterHoldBreathTime; // 0x80 (128)
		float m_underWaterBreathRegenerationTime; // 0x84 (132)
		Array<DamageEntryData> m_underWaterDamageTable; // 0x88 (136)
		float m_underWaterClearSpottingTime; // 0x90 (144)
	}; // 0xA0 (160)
}

