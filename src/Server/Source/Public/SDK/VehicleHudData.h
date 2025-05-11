///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/String.h>
#include <fb/Types.h>
#include <fb/UIHudIcon.h>
#include <fb/Vec3.h>

namespace fb {
	class TextureAsset;
	class VehicleCustomizationAsset;
}

namespace fb {
	struct VehicleHudData {
		VehicleHudData() {
			m_customizationOffset = Vec3(10.f, 0.f, -50.f);
			m_minimapIcon = UIHudIcon::UIHudIcon_Tank;
			m_vehicleItemHash = 0;
			m_rotateInMap = true;
			m_showHealth = true;
		};

		Vec3 m_customizationOffset; // 0x0 (0)
		CtrRef<VehicleCustomizationAsset> m_customization; // 0x10 (16)
		UIHudIcon m_minimapIcon; // 0x18 (24)
		String m_iconName; // 0x20 (32)
		CtrRef<TextureAsset> m_texture; // 0x28 (40)
		u32 m_vehicleItemHash; // 0x30 (48)
		bool m_rotateInMap; // 0x34 (52)
		bool m_showHealth; // 0x35 (53)
	}; // 0x40 (64)
}

