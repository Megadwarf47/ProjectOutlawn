///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>

namespace fb {
	class RepulsorAutoObstacle : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RepulsorAutoObstacle"); }
		virtual ~RepulsorAutoObstacle() override {}
		RepulsorAutoObstacle() {
			m_immobilityTime = 0.75f;
			m_obstacleRadiusScale = 1.f;
			m_obstacleHeightScale = 3.f;
			m_enable = false;
		};

		float m_immobilityTime; // 0x18 (24)
		float m_obstacleRadiusScale; // 0x1C (28)
		float m_obstacleHeightScale; // 0x20 (32)
		bool m_enable; // 0x24 (36)
	}; // 0x28 (40)
}

