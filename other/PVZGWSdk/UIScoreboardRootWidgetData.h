///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIWidgetEntityData.h>

namespace fb {
	class UIScoreboardRootWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIScoreboardRootWidgetData"); }
		virtual ~UIScoreboardRootWidgetData() override {}
		UIScoreboardRootWidgetData() {
			m_endOfRoundOffset = 0;
		};

		u32 m_endOfRoundOffset; // 0x68 (104)
	}; // 0x70 (112)
}

