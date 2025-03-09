///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/PVZUICustomizationNameConverter.h>
#include <fb/TeamId.h>
#include <fb/UIComponentData.h>
#include <fb/Vec3.h>

namespace fb {
	class PVZUICustomizationCompData : public UIComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZUICustomizationCompData"); }
		virtual ~PVZUICustomizationCompData() override {}
		PVZUICustomizationCompData() {
			m_networkThrottleTimer = 1.f;
			m_soldierOffset = Vec3(0.f, -0.5f, -3.f);
			m_vehicleRotation = Vec3(0.f, 3.8f, 0.f);
		};

		float m_networkThrottleTimer; // 0x30 (48)
		Vec3 m_soldierOffset; // 0x40 (64)
		Vec3 m_soldierRotation; // 0x50 (80)
		Vec3 m_vehicleRotation; // 0x60 (96)
		Array<PVZUICustomizationNameConverter> m_nameConverter; // 0x70 (112)
		Array<TeamId> m_requiredTeams; // 0x78 (120)
		Array<String> m_visualCustomizationCategoryDisplayOrder; // 0x80 (128)
	}; // 0x90 (144)
}

