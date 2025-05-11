///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/GunSwayStanceZoomModifierData.h>

namespace fb {
	class GunSwayModifierData : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("GunSwayModifierData"); }
		virtual ~GunSwayModifierData() override {}
		GunSwayModifierData() {
			m_onlyInSupportedShooting = false;
			m_onlyOnWeaponLightEnabled = false;
		};

		GunSwayStanceZoomModifierData m_standZoomModifier; // 0x18 (24)
		GunSwayStanceZoomModifierData m_standNoZoomModifier; // 0x5C (92)
		GunSwayStanceZoomModifierData m_crouchZoomModifier; // 0xA0 (160)
		GunSwayStanceZoomModifierData m_crouchNoZoomModifier; // 0xE4 (228)
		GunSwayStanceZoomModifierData m_proneZoomModifier; // 0x128 (296)
		GunSwayStanceZoomModifierData m_proneNoZoomModifier; // 0x16C (364)
		bool m_onlyInSupportedShooting; // 0x1B0 (432)
		bool m_onlyOnWeaponLightEnabled; // 0x1B1 (433)
	}; // 0x1B8 (440)
}

