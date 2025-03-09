///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/TriggerEntityData.h>

namespace fb {
	class VehicleStateTriggerEntityData : public TriggerEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VehicleStateTriggerEntityData"); }
		virtual ~VehicleStateTriggerEntityData() override {}
		VehicleStateTriggerEntityData() {
			m_lockAmount = 0.f;
			m_seatSpecificIndexForHuman = 0;
			m_seatSpecificIndexForAi = 0;
			m_bulletCount = 1;
			m_healthToSet = 100;
			m_healthToCheck = 100;
			m_destructionRadius = 5.f;
			m_allowHumanToEnterAllSeats = true;
			m_restrictHumanToSpecificSeat = false;
			m_allowAiToEnterAllSeats = true;
			m_banAiFromSpecificSeat = false;
			m_triggerCriticalOnHealthSet = false;
			m_checkHealthGreaterOrEqual = true;
			m_shouldDestroyVehicles = true;
			m_shouldDestroyBangers = true;

			m_runOnce = false;
		};

		float m_lockAmount; // 0x70 (112)
		u32 m_seatSpecificIndexForHuman; // 0x74 (116)
		u32 m_seatSpecificIndexForAi; // 0x78 (120)
		u32 m_bulletCount; // 0x7C (124)
		u32 m_healthToSet; // 0x80 (128)
		u32 m_healthToCheck; // 0x84 (132)
		float m_destructionRadius; // 0x88 (136)
		bool m_allowHumanToEnterAllSeats; // 0x8C (140)
		bool m_restrictHumanToSpecificSeat; // 0x8D (141)
		bool m_allowAiToEnterAllSeats; // 0x8E (142)
		bool m_banAiFromSpecificSeat; // 0x8F (143)
		bool m_triggerCriticalOnHealthSet; // 0x90 (144)
		bool m_checkHealthGreaterOrEqual; // 0x91 (145)
		bool m_shouldDestroyVehicles; // 0x92 (146)
		bool m_shouldDestroyBangers; // 0x93 (147)
	}; // 0xA0 (160)
}

