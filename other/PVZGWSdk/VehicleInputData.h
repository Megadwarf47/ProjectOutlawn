///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct VehicleInputData {
		VehicleInputData() {
			m_throttleDeadzone = 0.f;
			m_brakeDeadzone = 0.f;
			m_yawDeadzone = 0.f;
			m_pitchDeadzone = 0.f;
			m_rollDeadzone = 0.f;
			m_throttleInertiaOutDuration = 0.f;
			m_throttleInertiaInDuration = 0.f;
			m_throttleInertiaMinRatio = 0.2f;
			m_brakeInertiaOutDuration = 0.f;
			m_brakeInertiaInDuration = 0.f;
			m_brakeInertiaMinRatio = 0.2f;
			m_yawInertiaOutDuration = 0.f;
			m_yawInertiaInDuration = 0.f;
			m_yawInertiaMinRatio = 0.2f;
			m_pitchInertiaOutDuration = 0.f;
			m_pitchInertiaInDuration = 0.f;
			m_pitchInertiaMinRatio = 0.2f;
			m_rollInertiaOutDuration = 0.f;
			m_rollInertiaInDuration = 0.f;
			m_rollInertiaMinRatio = 0.2f;
		};

		float m_throttleDeadzone; // 0x0 (0)
		float m_brakeDeadzone; // 0x4 (4)
		float m_yawDeadzone; // 0x8 (8)
		float m_pitchDeadzone; // 0xC (12)
		float m_rollDeadzone; // 0x10 (16)
		float m_throttleInertiaOutDuration; // 0x14 (20)
		float m_throttleInertiaInDuration; // 0x18 (24)
		float m_throttleInertiaMinRatio; // 0x1C (28)
		float m_brakeInertiaOutDuration; // 0x20 (32)
		float m_brakeInertiaInDuration; // 0x24 (36)
		float m_brakeInertiaMinRatio; // 0x28 (40)
		float m_yawInertiaOutDuration; // 0x2C (44)
		float m_yawInertiaInDuration; // 0x30 (48)
		float m_yawInertiaMinRatio; // 0x34 (52)
		float m_pitchInertiaOutDuration; // 0x38 (56)
		float m_pitchInertiaInDuration; // 0x3C (60)
		float m_pitchInertiaMinRatio; // 0x40 (64)
		float m_rollInertiaOutDuration; // 0x44 (68)
		float m_rollInertiaInDuration; // 0x48 (72)
		float m_rollInertiaMinRatio; // 0x4C (76)
	}; // 0x50 (80)
}

