///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIWidgetEntityData.h>
#include <fb/CtrRef.h>

namespace fb {
	class UIElementFontStyle;
}

namespace fb {
	class UIPassengerListWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIPassengerListWidgetData"); }
		virtual ~UIPassengerListWidgetData() override {}
		UIPassengerListWidgetData() {
			m_rowHeight = 30.f;
			m_roleIconOffsetX = 0.f;
			m_playerNameOffsetX = -30.f;
		};

		float m_rowHeight; // 0x68 (104)
		float m_roleIconOffsetX; // 0x6C (108)
		float m_playerNameOffsetX; // 0x70 (112)
		CtrRef<UIElementFontStyle> m_playerFont; // 0x78 (120)
	}; // 0x80 (128)
}

