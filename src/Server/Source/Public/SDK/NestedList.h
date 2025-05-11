///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/DefaultSelectionItem.h>
#include <fb/String.h>
#include <fb/Types.h>
#include <fb/UIDataSourceInfo.h>
#include <fb/UIListRowType.h>

namespace fb {
	struct NestedList {
		NestedList() {
			m_rowType = UIListRowType::TextSelectorRow;
			m_useAsNormalListRows = false;
			m_hiddenOnPC = false;
			m_hiddenOnXenon = false;
			m_hiddenOnPS3 = false;
			m_hiddenOnGen4a = false;
			m_hiddenOnGen4b = false;
			m_showOnlyFE = false;
			m_highLightOnUpdate = true;
		};

		String m_label; // 0x0 (0)
		String m_index; // 0x8 (8)
		UIDataSourceInfo m_listDataSource; // 0x10 (16)
		UIDataSourceInfo m_dynamicShowList; // 0x28 (40)
		Array<String> m_staticItems; // 0x40 (64)
		DefaultSelectionItem m_defaultHighlighted; // 0x48 (72)
		UIListRowType m_rowType; // 0x68 (104)
		bool m_useAsNormalListRows; // 0x6C (108)
		bool m_hiddenOnPC; // 0x6D (109)
		bool m_hiddenOnXenon; // 0x6E (110)
		bool m_hiddenOnPS3; // 0x6F (111)
		bool m_hiddenOnGen4a; // 0x70 (112)
		bool m_hiddenOnGen4b; // 0x71 (113)
		bool m_showOnlyFE; // 0x72 (114)
		bool m_highLightOnUpdate; // 0x73 (115)
	}; // 0x78 (120)
}

