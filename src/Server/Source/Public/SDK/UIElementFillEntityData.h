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
	class UIElementFillData;
}

namespace fb {
	class UIElementFillEntityData : public UIElementEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIElementFillEntityData"); }
		virtual ~UIElementFillEntityData() override {}
		UIElementFillEntityData() {
			m_drawBackground = true;
			m_drawOutline = true;
		};

		CtrRef<UIElementFillData> m_style; // 0xD0 (208)
		bool m_drawBackground; // 0xD8 (216)
		bool m_drawOutline; // 0xD9 (217)
	}; // 0xE0 (224)
}

