///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ToolData.h>

namespace fb {
	class WeaponData : public ToolData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WeaponData"); }
		virtual ~WeaponData() override {}
		WeaponData() {
			m_showLaserPaintedVehicles = false;
		};

		bool m_showLaserPaintedVehicles; // 0x18 (24)
	}; // 0x20 (32)
}

