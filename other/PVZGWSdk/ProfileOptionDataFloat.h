///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ProfileOptionData.h>

namespace fb {
	class ProfileOptionDataFloat : public ProfileOptionData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ProfileOptionDataFloat"); }
		virtual ~ProfileOptionDataFloat() override {}
		ProfileOptionDataFloat() {
			m_min = 0.f;
			m_max = 0.f;
			m_value = 0.f;
			m_step = 0.f;
		};

		float m_min; // 0x28 (40)
		float m_max; // 0x2C (44)
		float m_value; // 0x30 (48)
		float m_step; // 0x34 (52)
	}; // 0x38 (56)
}

