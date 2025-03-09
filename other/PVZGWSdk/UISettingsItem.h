///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/String.h>
#include <fb/UISettingSymbols.h>

namespace fb {
	class ProfileOptionData;
}

namespace fb {
	struct UISettingsItem {
		UISettingsItem() {
			m_startEndSymbols = UISettingSymbols::UISettingSymbols_None;
		};

		String m_nameSid; // 0x0 (0)
		UISettingSymbols m_startEndSymbols; // 0x8 (8)
		CtrRef<ProfileOptionData> m_setting; // 0x10 (16)
	}; // 0x18 (24)
}

