///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BulletEntityData.h>

namespace fb {
	class ProximityBulletEntityData : public BulletEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ProximityBulletEntityData"); }
		virtual ~ProximityBulletEntityData() override {}
		ProximityBulletEntityData() {
			m_proximityRadius = 0.f;
			m_armingTime = 0.f;
			m_triggeringTime = 0.f;
		};

		float m_proximityRadius; // 0x180 (384)
		float m_armingTime; // 0x184 (388)
		float m_triggeringTime; // 0x188 (392)
	}; // 0x190 (400)
}

