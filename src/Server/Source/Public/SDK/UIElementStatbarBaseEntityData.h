///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/String.h>
#include <fb/UIElementEntityData.h>

namespace fb {
	class UIElementStatbarBaseEntityData : public UIElementEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIElementStatbarBaseEntityData"); }
		virtual ~UIElementStatbarBaseEntityData() override {}
		UIElementStatbarBaseEntityData() {
			m_currentValueData = 0;
			m_maxValueData = 0;
			m_fracDataValue = 0;
			m_fracDataValueMultiplier = 1.f;
		};

		String m_fracProperty; // 0xD0 (208)
		s32 m_currentValueData; // 0xD8 (216)
		s32 m_maxValueData; // 0xDC (220)
		s32 m_fracDataValue; // 0xE0 (224)
		float m_fracDataValueMultiplier; // 0xE4 (228)
	}; // 0xF0 (240)
}

