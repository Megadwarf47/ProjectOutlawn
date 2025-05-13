///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ChatChannelType.h>
#include <fb/CtrRef.h>
#include <fb/String.h>
#include <fb/Types.h>
#include <fb/UICommoRoseTextAlignment.h>
#include <fb/UIElementRect.h>

namespace fb {
	class UIElementAction;
	class UIElementFontStyle;
}

namespace fb {
	struct UICommoRoseButtonInfo {
		UICommoRoseButtonInfo() {
			m_chatChannel = ChatChannelType::CctSayAll;
			m_textAlignment = UICommoRoseTextAlignment::UICommoRoseTextAlignment_Center;
			m_useLocalRect = false;
			m_isSelectable = true;
		};

		String m_buttonId; // 0x0 (0)
		String m_buttonText; // 0x8 (8)
		String m_chatText; // 0x10 (16)
		ChatChannelType m_chatChannel; // 0x18 (24)
		CtrRef<UIElementAction> m_action; // 0x20 (32)
		String m_iconTextureId; // 0x28 (40)
		UICommoRoseTextAlignment m_textAlignment; // 0x30 (48)
		UIElementRect m_inactiveRect; // 0x34 (52)
		UIElementRect m_activeRect; // 0x44 (68)
		CtrRef<UIElementFontStyle> m_inactiveFontStyle; // 0x58 (88)
		CtrRef<UIElementFontStyle> m_activeFontStyle; // 0x60 (96)
		bool m_useLocalRect; // 0x68 (104)
		bool m_isSelectable; // 0x69 (105)
	}; // 0x70 (112)
}

