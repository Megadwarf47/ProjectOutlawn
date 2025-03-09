///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/PointOfInterestType.h>
#include <fb/TeamId.h>
#include <fb/Types.h>
#include <fb/Vec3.h>

namespace fb {
	struct PointOfInterestInfo {
		PointOfInterestInfo() {
			m_interest = PointOfInterestType::PointOfInterest_None;
			m_radius = 0.f;
			m_team = TeamId::TeamNeutral;
		};

		Vec3 m_offset; // 0x0 (0)
		PointOfInterestType m_interest; // 0x10 (16)
		float m_radius; // 0x14 (20)
		TeamId m_team; // 0x18 (24)
	}; // 0x20 (32)
}

