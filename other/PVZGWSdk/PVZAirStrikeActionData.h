///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/LinearTransform.h>
#include <fb/PVZCommanderActionBaseData.h>

namespace fb {
	class ProjectileBlueprint;
}

namespace fb {
	class PVZAirStrikeActionData : public PVZCommanderActionBaseData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZAirStrikeActionData"); }
		virtual ~PVZAirStrikeActionData() override {}
		PVZAirStrikeActionData() {
			m_initialSpeed = 20.f;

			m_actionType = PVZCommanderActionType::PVZCommanderActionType_AirStrike;
		};

		LinearTransform m_launchTransform; // 0x30 (48)
		CtrRef<ProjectileBlueprint> m_projectile; // 0x70 (112)
		float m_initialSpeed; // 0x78 (120)
	}; // 0x80 (128)
}

