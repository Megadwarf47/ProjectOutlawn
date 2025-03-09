///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/ProfileOptionData.h>
#include <fb/ProfileOptionDataEnumItem.h>

namespace fb {
	class ProfileOptionDataEnum : public ProfileOptionData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ProfileOptionDataEnum"); }
		virtual ~ProfileOptionDataEnum() override {}
		ProfileOptionDataEnum() {
		};

		Array<ProfileOptionDataEnumItem> m_items; // 0x28 (40)
	}; // 0x30 (48)
}

