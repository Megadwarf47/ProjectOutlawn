///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/PVZBuffStateControllerData.h>

namespace fb {
	class TetheredBuffStateControllerData : public PVZBuffStateControllerData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TetheredBuffStateControllerData"); }
		virtual ~TetheredBuffStateControllerData() override {}
		TetheredBuffStateControllerData() {
			m_farDistanceThreshold = 0.f;
			m_closeDistanceThreshold = 0.f;
			m_allowOccluded = false;
		};

		float m_farDistanceThreshold; // 0x20 (32)
		float m_closeDistanceThreshold; // 0x24 (36)
		bool m_allowOccluded; // 0x28 (40)
	}; // 0x30 (48)
}

