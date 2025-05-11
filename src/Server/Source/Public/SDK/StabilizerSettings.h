///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/StabilizerProperty.h>
#include <fb/Types.h>

namespace fb {
	struct StabilizerSettings {
		StabilizerSettings() {
			m_property = StabilizerProperty::SPPitchAngle;
			m_strength = 0.f;
			m_radius = -1.f;
			m_advanced = false;
			m_use2DRadiusTest = true;
			m_useInputOverride = true;
		};

		StabilizerProperty m_property; // 0x0 (0)
		float m_strength; // 0x4 (4)
		float m_radius; // 0x8 (8)
		bool m_advanced; // 0xC (12)
		bool m_use2DRadiusTest; // 0xD (13)
		bool m_useInputOverride; // 0xE (14)
	}; // 0x10 (16)
}

