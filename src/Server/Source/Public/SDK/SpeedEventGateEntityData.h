///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>

namespace fb {
	class SpeedEventGateEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SpeedEventGateEntityData"); }
		virtual ~SpeedEventGateEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		SpeedEventGateEntityData() {
			m_minSpeed = 0.f;
			m_maxSpeed = 0.f;
		};

		float m_minSpeed; // 0x18 (24)
		float m_maxSpeed; // 0x1C (28)
	}; // 0x20 (32)
}

