///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AimingConstraintsData.h>
#include <fb/DataContainer.h>

namespace fb {
	class SoldierAimingConstraintsData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoldierAimingConstraintsData"); }
		virtual ~SoldierAimingConstraintsData() override {}
		SoldierAimingConstraintsData() {
		};

		AimingConstraintsData m_swimmingConstraints; // 0x10 (16)
	}; // 0x20 (32)
}

