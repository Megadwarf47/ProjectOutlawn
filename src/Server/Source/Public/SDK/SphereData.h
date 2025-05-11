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
	class SphereData : public BaseShapeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SphereData"); }
		virtual ~SphereData() override {}
		SphereData() {
			m_radius = 1.f;
		};

		float m_radius; // 0x18 (24)
		Vec3 m_position; // 0x20 (32)
	}; // 0x30 (48)
}

