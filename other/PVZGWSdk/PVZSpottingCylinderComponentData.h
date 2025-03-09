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
	class PVZSpottingCylinderComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZSpottingCylinderComponentData"); }
		virtual ~PVZSpottingCylinderComponentData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		PVZSpottingCylinderComponentData() {
			m_radius = 4.f;
			m_maxRadius = 4.f;
			m_radiusChangeTime = 0.f;
			m_spottingType = PVZSpotType::PVZSpotType_None;
			m_spottingTimer = 5.f;
			m_enabled = true;
		};

		float m_radius; // 0x70 (112)
		float m_maxRadius; // 0x74 (116)
		float m_radiusChangeTime; // 0x78 (120)
		PVZSpotType m_spottingType; // 0x7C (124)
		float m_spottingTimer; // 0x80 (128)
		bool m_enabled; // 0x84 (132)
	}; // 0x90 (144)
}

