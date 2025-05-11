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
	class UIElementTableStyle;
	class UIWidgetBlueprint;
}

namespace fb {
	class UIBattledashHomeWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIBattledashHomeWidgetData"); }
		virtual ~UIBattledashHomeWidgetData() override {}
		UIBattledashHomeWidgetData() {
		};

		CtrRef<UIWidgetBlueprint> m_listboxData; // 0x68 (104)
		CtrRef<UIElementTableStyle> m_tableStyle; // 0x70 (112)
		CtrRef<UIWidgetBlueprint> m_listPaneWidget; // 0x78 (120)
	}; // 0x80 (128)
}

