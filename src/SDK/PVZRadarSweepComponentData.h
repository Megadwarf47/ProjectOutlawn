///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentData.h>
#include <fb/PVZSpotType.h>

namespace fb {
	class PVZRadarSweepComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZRadarSweepComponentData"); }
		virtual ~PVZRadarSweepComponentData() override {}
		PVZRadarSweepComponentData() {
			m_sweepRadius = 5.f;
			m_sweepInterval = 2.f;
			m_spottingType = PVZSpotType::PVZSpotType_None;
			m_spottingTimer = 5.f;
		};

		float m_sweepRadius; // 0x70 (112)
		float m_sweepInterval; // 0x74 (116)
		PVZSpotType m_spottingType; // 0x78 (120)
		float m_spottingTimer; // 0x7C (124)
	}; // 0x80 (128)
}

