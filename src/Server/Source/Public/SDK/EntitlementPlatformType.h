///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntitlementType.h>
#include <fb/GamePlatform.h>

namespace fb {
	struct EntitlementPlatformType {
		EntitlementPlatformType() {
			m_platform = GamePlatform::GamePlatform_Ps3;
			m_entitlementType = EntitlementType::EntitlementType_Ignored;
		};

		GamePlatform m_platform; // 0x0 (0)
		EntitlementType m_entitlementType; // 0x4 (4)
	}; // 0x8 (8)
}

