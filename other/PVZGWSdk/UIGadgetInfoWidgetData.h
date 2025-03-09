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
	class UIElementFillData;
}

namespace fb {
	class UIGadgetInfoWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIGadgetInfoWidgetData"); }
		virtual ~UIGadgetInfoWidgetData() override {}
		UIGadgetInfoWidgetData() {
		};

		CtrRef<UIElementFillData> m_backgroundFillData; // 0x68 (104)
	}; // 0x70 (112)
}

