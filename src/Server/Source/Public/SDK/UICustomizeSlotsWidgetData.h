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
	class UIWidgetBlueprint;
}

namespace fb {
	class UICustomizeSlotsWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UICustomizeSlotsWidgetData"); }
		virtual ~UICustomizeSlotsWidgetData() override {}
		UICustomizeSlotsWidgetData() {
			m_slotSpacing = 0.f;
			m_selectedState = 0;
			m_selectedTab = 0;
			m_selectedSlot = 0;
			m_hasFocus = false;
		};

		float m_slotSpacing; // 0x68 (104)
		CtrRef<UIWidgetBlueprint> m_normalSlotTemplate; // 0x70 (112)
		CtrRef<UIWidgetBlueprint> m_selectedSlotTemplate; // 0x78 (120)
		s32 m_selectedState; // 0x80 (128)
		s32 m_selectedTab; // 0x84 (132)
		s32 m_selectedSlot; // 0x88 (136)
		bool m_hasFocus; // 0x8C (140)
	}; // 0x90 (144)
}

