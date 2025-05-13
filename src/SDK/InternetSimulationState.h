///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct InternetSimulationState {
		InternetSimulationState() {
			m_reorderRatio = 0.f;
			m_latencyMin = 0.f;
			m_latencyMax = 0.f;
			m_duplicateRatio = 0.f;
			m_dropRatio = 0.f;
			m_corruptRatio = 0.f;
			m_sizeRatio = 0.f;
			m_spikeDurationMin = 0.f;
			m_spikeDurationMax = 0.f;
			m_spikeCooldownMin = 0.f;
			m_spikeCooldownMax = 0.f;
			m_enabled = false;
		};

		float m_reorderRatio; // 0x0 (0)
		float m_latencyMin; // 0x4 (4)
		float m_latencyMax; // 0x8 (8)
		float m_duplicateRatio; // 0xC (12)
		float m_dropRatio; // 0x10 (16)
		float m_corruptRatio; // 0x14 (20)
		float m_sizeRatio; // 0x18 (24)
		float m_spikeDurationMin; // 0x1C (28)
		float m_spikeDurationMax; // 0x20 (32)
		float m_spikeCooldownMin; // 0x24 (36)
		float m_spikeCooldownMax; // 0x28 (40)
		bool m_enabled; // 0x2C (44)
	}; // 0x30 (48)
}

