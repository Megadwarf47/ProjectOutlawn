///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/HullFloatPhysicsData.h>
#include <fb/Vec3.h>

namespace fb {
	class HovercraftFloatPhysicsData : public HullFloatPhysicsData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("HovercraftFloatPhysicsData"); }
		virtual ~HovercraftFloatPhysicsData() override {}
		HovercraftFloatPhysicsData() {
			m_landResistanceAxisMod = Vec3(1.f, 1.f, 1.f);
			m_landFrictionAxisMod = Vec3(1.f, 1.f, 1.f);
			m_frontLength = 0.5f;
			m_sideLength = 0.5f;
		};

		Vec3 m_landResistanceAxisMod; // 0x90 (144)
		Vec3 m_landFrictionAxisMod; // 0xA0 (160)
		float m_frontLength; // 0xB0 (176)
		float m_sideLength; // 0xB4 (180)
	}; // 0xC0 (192)
}

