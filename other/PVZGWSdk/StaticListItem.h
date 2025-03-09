///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/PlatformExclusions.h>
#include <fb/String.h>
#include <fb/Types.h>
#include <fb/UISimpleDataSource.h>

namespace fb {
	struct StaticListItem {
		StaticListItem() {
			m_appendPlatformToSID = false;
			m_excludeInRetail = false;
		};

		String m_itemName; // 0x0 (0)
		String m_itemIndex; // 0x8 (8)
		UISimpleDataSource m_dynamicHide; // 0x10 (16)
		UISimpleDataSource m_dynamicDisable; // 0x20 (32)
		UISimpleDataSource m_dynamicNewContent; // 0x30 (48)
		bool m_appendPlatformToSID; // 0x40 (64)
		PlatformExclusions m_platformExclusions; // 0x41 (65)
		bool m_excludeInRetail; // 0x46 (70)
	}; // 0x48 (72)
}

