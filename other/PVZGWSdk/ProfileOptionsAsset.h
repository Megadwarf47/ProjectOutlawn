///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/RefArray.h>
#include <fb/String.h>

namespace fb {
	class ProfileOptionData;
}

namespace fb {
	class ProfileOptionsAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ProfileOptionsAsset"); }
		virtual ~ProfileOptionsAsset() override {}
		ProfileOptionsAsset() {
			m_fileSize = 16000;
			m_autoSaveOnQuit = true;
		};

		String m_fileName; // 0x18 (24)
		String m_contentName; // 0x20 (32)
		u32 m_fileSize; // 0x28 (40)
		RefArray<ProfileOptionData> m_options; // 0x30 (48)
		RefArray<ProfileOptionData> m_optionsPs3; // 0x38 (56)
		RefArray<ProfileOptionData> m_optionsXenon; // 0x40 (64)
		RefArray<ProfileOptionData> m_optionsGen4a; // 0x48 (72)
		RefArray<ProfileOptionData> m_optionsGen4b; // 0x50 (80)
		RefArray<ProfileOptionData> m_optionsWin; // 0x58 (88)
		bool m_autoSaveOnQuit; // 0x60 (96)
	}; // 0x68 (104)
}

