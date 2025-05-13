///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/PVZCameraData.h>

namespace fb {
	class PVZManDownCameraData : public PVZCameraData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZManDownCameraData"); }
		virtual ~PVZManDownCameraData() override {}
		PVZManDownCameraData() {
			m_adjustAngleDelta = 0.1f;
			m_adjustWantedAngle = false;
		};

		float m_adjustAngleDelta; // 0x120 (288)
		bool m_adjustWantedAngle; // 0x124 (292)
	}; // 0x130 (304)
}

