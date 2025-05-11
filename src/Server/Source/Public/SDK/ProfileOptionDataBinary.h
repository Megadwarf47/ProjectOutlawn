///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ProfileOptionData.h>

namespace fb {
	class ProfileOptionDataBinary : public ProfileOptionData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ProfileOptionDataBinary"); }
		virtual ~ProfileOptionDataBinary() override {}
		ProfileOptionDataBinary() {
			m_maxLength = 0;
		};

		s32 m_maxLength; // 0x28 (40)
	}; // 0x30 (48)
}

