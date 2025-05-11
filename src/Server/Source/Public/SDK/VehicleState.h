///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/MetricState.h>
#include <fb/String.h>

namespace fb {
	class VehicleState : public MetricState {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VehicleState"); }
		virtual ~VehicleState() override {}
		VehicleState() {
		};

		String m_vehicleName; // 0x20 (32)
	}; // 0x28 (40)
}

