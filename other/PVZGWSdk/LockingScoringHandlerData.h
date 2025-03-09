///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ScoringHandlerData.h>

namespace fb {
	class LockingScoringHandlerData : public ScoringHandlerData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("LockingScoringHandlerData"); }
		virtual ~LockingScoringHandlerData() override {}
		LockingScoringHandlerData() {
			m_hotVehicleTimeout = 10.f;
		};

		float m_hotVehicleTimeout; // 0x10 (16)
	}; // 0x18 (24)
}

