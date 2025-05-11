///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/UIComponentData.h>

namespace fb {
	class UIScoreboardCompData : public UIComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIScoreboardCompData"); }
		virtual ~UIScoreboardCompData() override {}
		UIScoreboardCompData() {
			m_maxUpdateInterval = 1.f;
		};

		float m_maxUpdateInterval; // 0x30 (48)
	}; // 0x38 (56)
}

