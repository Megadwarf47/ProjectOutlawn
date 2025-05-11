///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/UIDataSource.h>
#include <fb/UIElementEntityData.h>

namespace fb {
	class UIElementEditBoxStyle;
	class UIElementTrigger;
}

namespace fb {
	class UIElementEditBoxEntityData : public UIElementEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIElementEditBoxEntityData"); }
		virtual ~UIElementEditBoxEntityData() override {}
		UIElementEditBoxEntityData() {
			m_maxTextLength = 256;
		};

		CtrRef<UIElementEditBoxStyle> m_style; // 0xD0 (208)
		UIDataSource m_dataSource; // 0xD8 (216)
		CtrRef<UIElementTrigger> m_onEnteredText; // 0xF0 (240)
		u32 m_maxTextLength; // 0xF8 (248)
	}; // 0x100 (256)
}

