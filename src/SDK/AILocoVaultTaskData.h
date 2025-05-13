///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>
#include <fb/Vec3.h>
#include <fb/WaypointVaultType.h>

namespace fb {
	struct AILocoVaultTaskData {
		AILocoVaultTaskData() {
			m_distanceBeforeVault = 2.f;
			m_heightBeforeVault = 1.1f;
			m_lengthOfVaultableObject = 1.3f;
			m_heightAfterVault = 1.1f;
			m_distanceAfterVault = 2.f;
			m_worldAngle = 0.f;
			m_vaultType = WaypointVaultType::WaypointVaultType_VaultOverHigh;
			m_useClientPosition = false;
		};

		Vec3 m_startPoint; // 0x0 (0)
		float m_distanceBeforeVault; // 0x10 (16)
		float m_heightBeforeVault; // 0x14 (20)
		float m_lengthOfVaultableObject; // 0x18 (24)
		float m_heightAfterVault; // 0x1C (28)
		float m_distanceAfterVault; // 0x20 (32)
		float m_worldAngle; // 0x24 (36)
		WaypointVaultType m_vaultType; // 0x28 (40)
		bool m_useClientPosition; // 0x2C (44)
	}; // 0x30 (48)
}

