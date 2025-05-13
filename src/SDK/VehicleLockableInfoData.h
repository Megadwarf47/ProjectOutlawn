///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>

namespace fb {
	struct VehicleLockableInfoData {
		VehicleLockableInfoData() {
			m_heatSignature = -1.f;
			m_radarSignature = -1.f;
			m_lowAltitudeHeight = 0.f;
			m_lowAltitudeHeatSignature = 0.f;
		};

		float m_heatSignature; // 0x0 (0)
		float m_radarSignature; // 0x4 (4)
		float m_lowAltitudeHeight; // 0x8 (8)
		float m_lowAltitudeHeatSignature; // 0xC (12)
	}; // 0x10 (16)
}

