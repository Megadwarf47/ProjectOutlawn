///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/UIElementEntityData.h>

namespace fb {
	class BFUIButtonBarData;
	class UIElementTrigger;
}

namespace fb {
	class BFUIElementButtonBarButtonEntityData : public UIElementEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BFUIElementButtonBarButtonEntityData"); }
		virtual ~BFUIElementButtonBarButtonEntityData() override {}
		BFUIElementButtonBarButtonEntityData() {
			m_drawInPlace = false;
		};

		CtrRef<BFUIButtonBarData> m_data; // 0xD0 (208)
		CtrRef<UIElementTrigger> m_action; // 0xD8 (216)
		bool m_drawInPlace; // 0xE0 (224)
	}; // 0xF0 (240)
}

