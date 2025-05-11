///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/PartComponentData.h>
#include <fb/RefArray.h>

namespace fb {
	class CameraRelativeControlData;
	class GearboxConfigData;
	class LandingGearLogicData;
	class VehicleConfigData;
	class VehicleWaterEffectData;
}

namespace fb {
	class ChassisComponentData : public PartComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ChassisComponentData"); }
		virtual ~ChassisComponentData() override {}
		ChassisComponentData() {
			m_triggerGroundEffectImpulse = 0.f;
			m_triggerGroundEffectHeight = 0.f;
			m_groundEffectFadeParam = 0.f;
			m_alwaysFullThrottle = false;
			m_groundEffectOnTerrainOnly = false;
			m_allowNegativeThrottle = true;
		};

		CtrRef<VehicleConfigData> m_vehicleConfig; // 0x90 (144)
		CtrRef<GearboxConfigData> m_gearboxConfig; // 0x98 (152)
		CtrRef<CameraRelativeControlData> m_cameraRelativeControlConfig; // 0xA0 (160)
		RefArray<VehicleWaterEffectData> m_waterEffects; // 0xA8 (168)
		RefArray<VehicleWaterEffectData> m_waterStreakEffects; // 0xB0 (176)
		float m_triggerGroundEffectImpulse; // 0xB8 (184)
		float m_triggerGroundEffectHeight; // 0xBC (188)
		float m_groundEffectFadeParam; // 0xC0 (192)
		CtrRef<LandingGearLogicData> m_landingGearLogic; // 0xC8 (200)
		bool m_alwaysFullThrottle; // 0xD0 (208)
		bool m_groundEffectOnTerrainOnly; // 0xD1 (209)
		bool m_allowNegativeThrottle; // 0xD2 (210)
	}; // 0xE0 (224)
}

