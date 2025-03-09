///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/LinearTransform.h>
#include <fb/Vec3.h>

namespace fb {
	class FollowObjectEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("FollowObjectEntityData"); }
		virtual ~FollowObjectEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		FollowObjectEntityData() {
			m_radius = 0.f;
			m_localOffset = false;
			m_usePathFinding = false;
		};

		float m_radius; // 0x18 (24)
		Vec3 m_offset; // 0x20 (32)
		LinearTransform m_targetTransform; // 0x30 (48)
		bool m_localOffset; // 0x70 (112)
		bool m_usePathFinding; // 0x71 (113)
	}; // 0x80 (128)
}

