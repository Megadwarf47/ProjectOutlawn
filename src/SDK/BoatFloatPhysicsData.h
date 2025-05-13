///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/HullFloatPhysicsData.h>

namespace fb {
	class BoatFloatPhysicsData : public HullFloatPhysicsData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BoatFloatPhysicsData"); }
		virtual ~BoatFloatPhysicsData() override {}
		BoatFloatPhysicsData() {
			m_frontRatio = 0.5f;
		};

		float m_frontRatio; // 0x90 (144)
	}; // 0xA0 (160)
}

