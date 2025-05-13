///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/String.h>
#include <fb/UIElementStyle.h>

namespace fb {
	class UIMinimapColorStyle;
}

namespace fb {
	class UIMinimapLineStyle : public UIElementStyle {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIMinimapLineStyle"); }
		virtual ~UIMinimapLineStyle() override {}
		UIMinimapLineStyle() {
			m_textureLengthScaling = 1.f;
			m_textureSize = 0.f;
			m_textureAngle = 0.f;
			m_animationSpeed = 5.f;
			m_width = 1.f;
			m_alignTextureToEndpoints = false;
		};

		CtrRef<UIMinimapColorStyle> m_color; // 0x18 (24)
		String m_textureId; // 0x20 (32)
		float m_textureLengthScaling; // 0x28 (40)
		float m_textureSize; // 0x2C (44)
		float m_textureAngle; // 0x30 (48)
		float m_animationSpeed; // 0x34 (52)
		float m_width; // 0x38 (56)
		bool m_alignTextureToEndpoints; // 0x3C (60)
	}; // 0x40 (64)
}

