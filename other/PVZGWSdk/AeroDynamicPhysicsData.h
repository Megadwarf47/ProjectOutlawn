///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/Vec3.h>

namespace fb {
	class AeroDynamicPhysicsData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AeroDynamicPhysicsData"); }
		virtual ~AeroDynamicPhysicsData() override {}
		AeroDynamicPhysicsData() {
			m_bodyDrag = Vec3(0.1f, 0.5f, 0.f);
		};

		Vec3 m_bodyDrag; // 0x10 (16)
		Vec3 m_bodyDragOffsetYZ; // 0x20 (32)
		Vec3 m_bodyDragOffsetXZ; // 0x30 (48)
		Vec3 m_bodyDragOffsetXY; // 0x40 (64)
	}; // 0x50 (80)
}

