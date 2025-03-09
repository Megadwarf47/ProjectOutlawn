///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIColorizationData.h>
#include <fb/CtrRef.h>
#include <fb/UIElementStatbarBaseEntityData.h>

namespace fb {
	class BFUIElement3SliceStatbarStyle;
}

namespace fb {
	class BFUIElement3SliceStatbarEntityData : public UIElementStatbarBaseEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BFUIElement3SliceStatbarEntityData"); }
		virtual ~BFUIElement3SliceStatbarEntityData() override {}
		BFUIElement3SliceStatbarEntityData() {
			m_rightAligned = false;
			m_vertical = false;
			m_useColorization = true;
		};

		CtrRef<BFUIElement3SliceStatbarStyle> m_style; // 0xF0 (240)
		BFUIColorizationData m_colorizationData; // 0xF8 (248)
		bool m_rightAligned; // 0x104 (260)
		bool m_vertical; // 0x105 (261)
		bool m_useColorization; // 0x106 (262)
	}; // 0x110 (272)
}

