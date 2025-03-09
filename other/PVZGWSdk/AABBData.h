///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BaseShapeData.h>
#include <fb/Vec3.h>

namespace fb {
	class AABBData : public BaseShapeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AABBData"); }
		virtual ~AABBData() override {}
		AABBData() {
			m_halfExtents = Vec3(0.5f, 0.5f, 0.5f);
		};

		Vec3 m_position; // 0x20 (32)
		Vec3 m_halfExtents; // 0x30 (48)
	}; // 0x40 (64)
}

