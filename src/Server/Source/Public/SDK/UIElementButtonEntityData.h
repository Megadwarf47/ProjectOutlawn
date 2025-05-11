///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/String.h>
#include <fb/UIElementEntityData.h>
#include <fb/UIElementText.h>
#include <fb/UIInputAction.h>

namespace fb {
	class UIElementButtonStyle;
	class UIElementTrigger;
}

namespace fb {
	class UIElementButtonEntityData : public UIElementEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIElementButtonEntityData"); }
		virtual ~UIElementButtonEntityData() override {}
		UIElementButtonEntityData() {
			m_keyboardShortcut = UIInputAction::UIInputAction_None;
			m_useAutoScroll = false;
			m_enabled = true;
		};

		CtrRef<UIElementButtonStyle> m_style; // 0xD0 (208)
		UIElementText m_text; // 0xD8 (216)
		CtrRef<UIElementTrigger> m_action; // 0xF8 (248)
		CtrRef<UIElementTrigger> m_actionGotFocus; // 0x100 (256)
		CtrRef<UIElementTrigger> m_actionLostFocus; // 0x108 (264)
		UIInputAction m_keyboardShortcut; // 0x110 (272)
		String m_enabledProperty; // 0x118 (280)
		bool m_useAutoScroll; // 0x120 (288)
		bool m_enabled; // 0x121 (289)
	}; // 0x130 (304)
}

