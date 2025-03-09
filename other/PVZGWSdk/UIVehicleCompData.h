///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/UIComponentData.h>

namespace fb {
	class UIVehicleCompData : public UIComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIVehicleCompData"); }
		virtual ~UIVehicleCompData() override {}
		UIVehicleCompData() {
			m_rangeMeterUpdatesPerSecond = 10;
			m_maxRangeMeterDistance = 200.f;
			m_useDetailedRangeMeterQuery = false;
		};

		s32 m_rangeMeterUpdatesPerSecond; // 0x30 (48)
		float m_maxRangeMeterDistance; // 0x34 (52)
		bool m_useDetailedRangeMeterQuery; // 0x38 (56)
	}; // 0x40 (64)
}

