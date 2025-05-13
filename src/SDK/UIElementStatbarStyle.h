///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/UIElementAlignment.h>
#include <fb/UIElementStyle.h>

namespace fb {
	class UIElementFillData;
}

namespace fb {
	class UIElementStatbarStyle : public UIElementStyle {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIElementStatbarStyle"); }
		virtual ~UIElementStatbarStyle() override {}
		UIElementStatbarStyle() {
			m_horizontalAlignment = UIElementAlignment::UIElementAlignment_Left;
		};

		CtrRef<UIElementFillData> m_rectFill; // 0x18 (24)
		CtrRef<UIElementFillData> m_barFill; // 0x20 (32)
		UIElementAlignment m_horizontalAlignment; // 0x28 (40)
	}; // 0x30 (48)
}

