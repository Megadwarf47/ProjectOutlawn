///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CameraData.h>
#include <fb/Vec3.h>

namespace fb {
	class CollidableFreeCameraData : public CameraData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CollidableFreeCameraData"); }
		virtual ~CollidableFreeCameraData() override {}
		CollidableFreeCameraData() {
			m_maxBounceVelocity = Vec3(100.f, 100.f, 100.f);
			m_collisionRadius = 1.f;
			m_rotateYLimit = -0.26f;
			m_constraintDynamicFriction = 0.f;
			m_constraintVelocityMultiplier = 1.f;
		};

		Vec3 m_maxBounceVelocity; // 0x60 (96)
		float m_collisionRadius; // 0x70 (112)
		float m_rotateYLimit; // 0x74 (116)
		float m_constraintDynamicFriction; // 0x78 (120)
		float m_constraintVelocityMultiplier; // 0x7C (124)
	}; // 0x80 (128)
}

