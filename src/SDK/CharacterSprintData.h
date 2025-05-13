///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class CharacterSprintData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CharacterSprintData"); }
		virtual ~CharacterSprintData() override {}
		CharacterSprintData() {
			m_sprintPowerDecreasePerSecond = 0.1f;
			m_sprintPowerIncreasePerSecond = 0.075f;
			m_sprintMinimumPower = 0.15f;
			m_allowContinousSprinting = true;
		};

		float m_sprintPowerDecreasePerSecond; // 0x10 (16)
		float m_sprintPowerIncreasePerSecond; // 0x14 (20)
		float m_sprintMinimumPower; // 0x18 (24)
		bool m_allowContinousSprinting; // 0x1C (28)
	}; // 0x20 (32)
}

