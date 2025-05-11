///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainer.h>
#include <fb/ObstacleBehavior.h>
#include <fb/String.h>

namespace fb {
	class CustomObstacleData;
}

namespace fb {
	class ObstacleDat : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ObstacleDat"); }
		virtual ~ObstacleDat() override {}
		ObstacleDat() {
			m_layerMask = 4294967295;
			m_obstacleBehavior = ObstacleBehavior::OBSTACLE_BEHAVIOR_AUTOMATIC;
			m_penaltyMult = 15.f;
			m_obstacleBlockageFlags = 65535;
		};

		u32 m_layerMask; // 0x10 (16)
		ObstacleBehavior m_obstacleBehavior; // 0x14 (20)
		float m_penaltyMult; // 0x18 (24)
		u32 m_obstacleBlockageFlags; // 0x1C (28)
		CtrRef<CustomObstacleData> m_userData; // 0x20 (32)
		String m_obstacleName; // 0x28 (40)
	}; // 0x30 (48)
}

