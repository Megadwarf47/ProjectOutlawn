///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentEntityData.h>
#include <fb/Vec3.h>

namespace fb {
	class SphereCollisionEntityData : public GameComponentEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SphereCollisionEntityData"); }
		virtual ~SphereCollisionEntityData() override {}
		SphereCollisionEntityData() {
			m_radius = 1.f;
		};

		Vec3 m_position; // 0x80 (128)
		float m_radius; // 0x90 (144)
	}; // 0xA0 (160)
}

