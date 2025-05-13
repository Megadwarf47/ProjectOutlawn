///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/VehicleInputTweakType.h>

namespace fb {
	class VehicleInputTweakData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VehicleInputTweakData"); }
		virtual ~VehicleInputTweakData() override {}
		VehicleInputTweakData() {
			m_inputTweakType = VehicleInputTweakType::CombinedSpeedTweakType;
			m_minSpeed = 11.111112f;
			m_maxSpeed = 33.333336f;
			m_minSpeedScale = 0.25f;
			m_maxSpeedScale = 0.25f;
		};

		VehicleInputTweakType m_inputTweakType; // 0x10 (16)
		float m_minSpeed; // 0x14 (20)
		float m_maxSpeed; // 0x18 (24)
		float m_minSpeedScale; // 0x1C (28)
		float m_maxSpeedScale; // 0x20 (32)
	}; // 0x28 (40)
}

