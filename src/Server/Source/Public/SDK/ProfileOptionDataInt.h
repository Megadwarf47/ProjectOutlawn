///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ProfileOptionData.h>

namespace fb {
	class ProfileOptionDataInt : public ProfileOptionData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ProfileOptionDataInt"); }
		virtual ~ProfileOptionDataInt() override {}
		ProfileOptionDataInt() {
			m_min = 0;
			m_max = 0;
			m_value = 0;
			m_step = 0;
		};

		s32 m_min; // 0x28 (40)
		s32 m_max; // 0x2C (44)
		s32 m_value; // 0x30 (48)
		s32 m_step; // 0x34 (52)
	}; // 0x38 (56)
}

