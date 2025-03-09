///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/String.h>
#include <fb/Types.h>
#include <fb/UIDataSource.h>
#include <fb/UITextEntryType.h>

namespace fb {
	struct UIElementTextEntry {
		UIElementTextEntry() {
			m_textType = UITextEntryType::UITextEntryType_Passthrough;
			m_useLocalization = false;
		};

		UITextEntryType m_textType; // 0x0 (0)
		String m_text; // 0x8 (8)
		String m_floatFormat; // 0x10 (16)
		UIDataSource m_dataSource; // 0x18 (24)
		bool m_useLocalization; // 0x30 (48)
	}; // 0x38 (56)
}

