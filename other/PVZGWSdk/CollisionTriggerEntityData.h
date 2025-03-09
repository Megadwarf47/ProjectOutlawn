///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/RigidBodyCollisionLayer.h>
#include <fb/SpatialEntityData.h>

namespace fb {
	class CollisionTriggerEntityData : public SpatialEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CollisionTriggerEntityData"); }
		virtual ~CollisionTriggerEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		CollisionTriggerEntityData() {
			m_radius = 2.f;
			m_collisionLayer = RigidBodyCollisionLayer::RigidBodyCollisionLayer_CameraCollisionLayer;
			m_enabled = true;
		};

		float m_radius; // 0x60 (96)
		RigidBodyCollisionLayer m_collisionLayer; // 0x64 (100)
		bool m_enabled; // 0x68 (104)
	}; // 0x70 (112)
}

