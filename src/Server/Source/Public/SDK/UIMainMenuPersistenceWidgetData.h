///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIWidgetEntityData.h>

namespace fb {
	class UIMainMenuPersistenceWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIMainMenuPersistenceWidgetData"); }
		virtual ~UIMainMenuPersistenceWidgetData() override {}
		UIMainMenuPersistenceWidgetData() {
			m_scrollingTime = 0.f;
			m_freezeFraction = 0.1f;
		};

		float m_scrollingTime; // 0x68 (104)
		float m_freezeFraction; // 0x6C (108)
	}; // 0x70 (112)
}

