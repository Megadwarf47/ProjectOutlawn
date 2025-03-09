///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntitlementType.h>
#include <fb/String.h>
#include <fb/Types.h>

namespace fb {
	struct EntitlementData {
		EntitlementData() {
			m_usageType = EntitlementType::EntitlementType_Read;
			m_verifyOwnership = false;
		};

		String m_license; // 0x0 (0)
		String m_entitlementTag; // 0x8 (8)
		String m_groupName; // 0x10 (16)
		String m_productId; // 0x18 (24)
		String m_projectId; // 0x20 (32)
		EntitlementType m_usageType; // 0x28 (40)
		bool m_verifyOwnership; // 0x2C (44)
	}; // 0x30 (48)
}

