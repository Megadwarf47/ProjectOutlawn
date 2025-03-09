///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/String.h>
#include <fb/Types.h>
#include <fb/UIAutoListType.h>

namespace fb {
	struct UIAutoListCategoryData {
		UIAutoListCategoryData() {
			m_listtype = UIAutoListType::FriendsAll;
			m_showEmptyCategory = false;
		};

		UIAutoListType m_listtype; // 0x0 (0)
		String m_idString; // 0x8 (8)
		String m_displayTitle; // 0x10 (16)
		String m_emptyListDescription; // 0x18 (24)
		bool m_showEmptyCategory; // 0x20 (32)
	}; // 0x28 (40)
}

