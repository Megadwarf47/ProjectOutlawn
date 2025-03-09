///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ProfileOptionData.h>

namespace fb {
	class ProfileOptionDataBool : public ProfileOptionData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ProfileOptionDataBool"); }
		virtual ~ProfileOptionDataBool() override {}
		ProfileOptionDataBool() {
			m_value = false;
		};

		bool m_value; // 0x28 (40)
	}; // 0x30 (48)
}

