///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/IngameMenuCategoryType.h>
#include <fb/IngameMenuElementData.h>

namespace fb {
	struct IngameMenuCategory {
		IngameMenuCategory() {
			m_categoryType = IngameMenuCategoryType::IngameMenuCategoryType_Singleplayer;
		};

		IngameMenuCategoryType m_categoryType; // 0x0 (0)
		Array<IngameMenuElementData> m_elements; // 0x8 (8)
	}; // 0x10 (16)
}

