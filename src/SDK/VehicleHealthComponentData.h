///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ControllableHealthComponentData.h>

namespace fb {
	class VehicleHealthComponentData : public ControllableHealthComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VehicleHealthComponentData"); }
		virtual ~VehicleHealthComponentData() override {}
		VehicleHealthComponentData() {
			m_forceMinDamageAngleRadius = 0.f;
		};

		float m_forceMinDamageAngleRadius; // 0x70 (112)
	}; // 0x80 (128)
}

