///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIWidgetEntityData.h>
#include <fb/UIElementAlignment.h>

namespace fb {
	class UIIngameMenuWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIIngameMenuWidgetData"); }
		virtual ~UIIngameMenuWidgetData() override {}
		UIIngameMenuWidgetData() {
			m_verticalSpacing = 0;
			m_horizontalPadding = 0;
			m_verticalAlignment = UIElementAlignment::UIElementAlignment_Center;
			m_horizonalAlignment = UIElementAlignment::UIElementAlignment_Center;
			m_textRightSpacing = 10.f;
			m_textAnimationWidth = 30.f;
			m_textAnimationSpeed = 2.f;
		};

		u32 m_verticalSpacing; // 0x68 (104)
		u32 m_horizontalPadding; // 0x6C (108)
		UIElementAlignment m_verticalAlignment; // 0x70 (112)
		UIElementAlignment m_horizonalAlignment; // 0x74 (116)
		float m_textRightSpacing; // 0x78 (120)
		float m_textAnimationWidth; // 0x7C (124)
		float m_textAnimationSpeed; // 0x80 (128)
	}; // 0x88 (136)
}

