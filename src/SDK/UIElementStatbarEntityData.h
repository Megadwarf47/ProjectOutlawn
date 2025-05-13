///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/UIElementStatbarBaseEntityData.h>

namespace fb {
	class UIElementStatbarStyle;
}

namespace fb {
	class UIElementStatbarEntityData : public UIElementStatbarBaseEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIElementStatbarEntityData"); }
		virtual ~UIElementStatbarEntityData() override {}
		UIElementStatbarEntityData() {
			m_showIfFull = true;
			m_showIfEmpty = true;
		};

		CtrRef<UIElementStatbarStyle> m_style; // 0xF0 (240)
		bool m_showIfFull; // 0xF8 (248)
		bool m_showIfEmpty; // 0xF9 (249)
	}; // 0x100 (256)
}

