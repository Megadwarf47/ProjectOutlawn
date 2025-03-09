///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/UIElementColor.h>
#include <fb/UIElementTextFilter.h>

namespace fb {
	class UIElementTextFilterDropShadow : public UIElementTextFilter {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIElementTextFilterDropShadow"); }
		virtual ~UIElementTextFilterDropShadow() override {}
		UIElementTextFilterDropShadow() {
			m_x = 4.f;
			m_y = 4.f;
			m_strength = 100.f;
			m_angle = 90.f;
			m_distance = 4.f;
			m_knockOut = false;
			m_hideObject = false;
			m_fineBlur = false;
		};

		float m_x; // 0x10 (16)
		float m_y; // 0x14 (20)
		UIElementColor m_color; // 0x20 (32)
		float m_strength; // 0x40 (64)
		float m_angle; // 0x44 (68)
		float m_distance; // 0x48 (72)
		bool m_knockOut; // 0x4C (76)
		bool m_hideObject; // 0x4D (77)
		bool m_fineBlur; // 0x4E (78)
	}; // 0x50 (80)
}

