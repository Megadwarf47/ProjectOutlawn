///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/UIElementStyle.h>
#include <fb/Vec3.h>

namespace fb {
	class UIMinimapColorStyle : public UIElementStyle {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIMinimapColorStyle"); }
		virtual ~UIMinimapColorStyle() override {}
		UIMinimapColorStyle() {
			m_alpha = 1.f;
			m_rgb = Vec3(1.f, 1.f, 1.f);
		};

		float m_alpha; // 0x18 (24)
		Vec3 m_rgb; // 0x20 (32)
	}; // 0x30 (48)
}

