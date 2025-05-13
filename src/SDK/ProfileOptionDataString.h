///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ProfileOptionData.h>
#include <fb/String.h>

namespace fb {
	class ProfileOptionDataString : public ProfileOptionData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ProfileOptionDataString"); }
		virtual ~ProfileOptionDataString() override {}
		ProfileOptionDataString() {
			m_maxLength = 0;
		};

		s32 m_maxLength; // 0x28 (40)
		String m_value; // 0x30 (48)
	}; // 0x38 (56)
}

