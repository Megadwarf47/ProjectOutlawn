///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CtrRef.h>
#include <fb/EntityData.h>
#include <fb/LinearTransform.h>
#include <fb/RigidBodyCollisionLayer.h>
#include <fb/RigidBodyMotionType.h>
#include <fb/RigidBodyQualityType.h>
#include <fb/RigidBodyType.h>
#include <fb/Vec3.h>

namespace fb {
	class FloatPhysicsData;
}

namespace fb {
	class RigidBodyData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RigidBodyData"); }
		virtual ~RigidBodyData() override {}
		RigidBodyData() {
			m_rigidBodyType = RigidBodyType::RBTypeCollision;
			m_inertiaModifier = Vec3(1.f, 1.f, 1.f);
			m_mass = 0.f;
			m_friction = 0.5f;
			m_restitution = 0.4f;
			m_angularVelocityDamping = -1.f;
			m_linearVelocityDamping = -1.f;
			m_interactionToolkitCollisionVolumeId = 0;
			m_motionType = RigidBodyMotionType::RigidBodyMotionType_Invalid;
			m_qualityType = RigidBodyQualityType::RigidBodyQualityType_Invalid;
			m_collisionLayer = RigidBodyCollisionLayer::RigidBodyCollisionLayer_Invalid;
			m_isRootController = true;
		};

		RigidBodyType m_rigidBodyType; // 0x18 (24)
		Vec3 m_inertiaModifier; // 0x20 (32)
		LinearTransform m_transform; // 0x30 (48)
		LinearTransform m_keyframeTransform; // 0x70 (112)
		float m_mass; // 0xB0 (176)
		float m_friction; // 0xB4 (180)
		float m_restitution; // 0xB8 (184)
		float m_angularVelocityDamping; // 0xBC (188)
		float m_linearVelocityDamping; // 0xC0 (192)
		u32 m_interactionToolkitCollisionVolumeId; // 0xC4 (196)
		RigidBodyMotionType m_motionType; // 0xC8 (200)
		RigidBodyQualityType m_qualityType; // 0xCC (204)
		RigidBodyCollisionLayer m_collisionLayer; // 0xD0 (208)
		Array<u32> m_partIndices; // 0xD8 (216)
		CtrRef<FloatPhysicsData> m_floatPhysics; // 0xE0 (224)
		bool m_isRootController; // 0xE8 (232)
	}; // 0xF0 (240)
}

