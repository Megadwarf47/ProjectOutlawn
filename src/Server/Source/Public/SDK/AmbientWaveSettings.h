///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/SplineCurve.h>
#include <fb/Types.h>

namespace fb {
	struct AmbientWaveSettings {
		AmbientWaveSettings() {
			m_waveAmplitude = 0.1f;
			m_windSpeed = 15.f;
			m_windAngle = 10.f;
			m_minWavelength = 0.f;
			m_largeWaveReduction = 8.f;
			m_foamHalfLife = 0.5f;
			m_foamThreshold = 0.5f;
			m_foamMaxValue = 1.f;
		};

		SplineCurve m_windDistribution; // 0x0 (0)
		float m_waveAmplitude; // 0xE0 (224)
		float m_windSpeed; // 0xE4 (228)
		float m_windAngle; // 0xE8 (232)
		float m_minWavelength; // 0xEC (236)
		float m_largeWaveReduction; // 0xF0 (240)
		float m_foamHalfLife; // 0xF4 (244)
		float m_foamThreshold; // 0xF8 (248)
		float m_foamMaxValue; // 0xFC (252)
	}; // 0x100 (256)
}

