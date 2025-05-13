///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AntRef.h>

namespace fb {
	struct AILocoVaultBinding {
		AILocoVaultBinding() {
		};

		AntRef m_vault; // 0x0 (0)
		AntRef m_distanceBeforeVault; // 0x14 (20)
		AntRef m_heightBeforeVault; // 0x28 (40)
		AntRef m_lengthOfVaultableObject; // 0x3C (60)
		AntRef m_heightAfterVault; // 0x50 (80)
		AntRef m_distanceAfterVault; // 0x64 (100)
		AntRef m_vaultType; // 0x78 (120)
	}; // 0x8C (140)
}

