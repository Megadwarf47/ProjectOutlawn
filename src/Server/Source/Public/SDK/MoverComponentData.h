///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/EntityMoverType.h>
#include <fb/GameComponentData.h>

namespace fb {
	class MoverTune;
	class RadiusData;
	class RepulsorAutoObstacle;
}

namespace fb {
	class MoverComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MoverComponentData"); }
		virtual ~MoverComponentData() override {}
		MoverComponentData() {
			m_type = EntityMoverType::EntityMoverType_Only_Repulsor;
			m_goalPlanFailureTreshold = 0.5f;
			m_goalHeightFailureTreshold = 3.f;
		};

		EntityMoverType m_type; // 0x70 (112)
		CtrRef<MoverTune> m_moverTune; // 0x78 (120)
		float m_goalPlanFailureTreshold; // 0x80 (128)
		float m_goalHeightFailureTreshold; // 0x84 (132)
		CtrRef<RadiusData> m_radiusData; // 0x88 (136)
		CtrRef<RepulsorAutoObstacle> m_repulsorAutoObstacleData; // 0x90 (144)
	}; // 0xA0 (160)
}

