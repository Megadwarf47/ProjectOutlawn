///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DogTagCategory.h>
#include <fb/RarenessLevel.h>
#include <fb/String.h>
#include <fb/UnlockAssetBase.h>

namespace fb {
	class DogTagData : public UnlockAssetBase {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DogTagData"); }
		virtual ~DogTagData() override {}
		DogTagData() {
			m_rarenessLevel = RarenessLevel::RarenessLevel_Common;
			m_category = DogTagCategory::DTC_Invalid;
			m_invertText = false;
			m_isAlwaysAvailable = false;
			m_excludedOnXenon = false;
			m_excludedOnPs3 = false;
			m_excludedOnWin32 = false;
			m_excludedOnGen4a = false;
			m_excludedOnGen4b = false;
		};

		String m_nameSID; // 0x40 (64)
		String m_descriptionSID; // 0x48 (72)
		String m_imageName; // 0x50 (80)
		RarenessLevel m_rarenessLevel; // 0x58 (88)
		String m_smallImageName; // 0x60 (96)
		DogTagCategory m_category; // 0x68 (104)
		bool m_invertText; // 0x6C (108)
		bool m_isAlwaysAvailable; // 0x6D (109)
		bool m_excludedOnXenon; // 0x6E (110)
		bool m_excludedOnPs3; // 0x6F (111)
		bool m_excludedOnWin32; // 0x70 (112)
		bool m_excludedOnGen4a; // 0x71 (113)
		bool m_excludedOnGen4b; // 0x72 (114)
	}; // 0x78 (120)
}

