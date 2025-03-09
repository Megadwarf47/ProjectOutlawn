///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GamePlatform.h>
#include <fb/String.h>

namespace fb {
	struct PlatformProjectId {
		PlatformProjectId() {
			m_platform = GamePlatform::GamePlatform_Ps3;
		};

		GamePlatform m_platform; // 0x0 (0)
		String m_projectId; // 0x8 (8)
	}; // 0x10 (16)
}

