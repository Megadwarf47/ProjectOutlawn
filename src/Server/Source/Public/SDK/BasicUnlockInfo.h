///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/String.h>
#include <fb/Types.h>

namespace fb {
	struct BasicUnlockInfo {
		BasicUnlockInfo() {
			m_identifier = 0;
			m_unlockScore = 0;
		};

		Guid m_unlockGuid; // 0x0 (0)
		u32 m_identifier; // 0x10 (16)
		u32 m_unlockScore; // 0x14 (20)
		Array<String> m_licenses; // 0x18 (24)
		Array<String> m_additionalLicenses; // 0x20 (32)
		Array<String> m_awardedLicenses; // 0x28 (40)
		String m_stringId; // 0x30 (48)
	}; // 0x38 (56)
}

