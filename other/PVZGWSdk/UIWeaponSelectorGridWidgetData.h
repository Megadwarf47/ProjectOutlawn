///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/BFUIWidgetEntityData.h>
#include <fb/CtrRef.h>
#include <fb/UIGridStepperConfig.h>

namespace fb {
	class UIWidgetBlueprint;
}

namespace fb {
	class UIWeaponSelectorGridWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIWeaponSelectorGridWidgetData"); }
		virtual ~UIWeaponSelectorGridWidgetData() override {}
		UIWeaponSelectorGridWidgetData() {
			m_slotPrimary = 0;
			m_slotSecondary = 1;
			m_unlockEverything = false;
		};

		CtrRef<UIWidgetBlueprint> m_rowTemplate; // 0x68 (104)
		CtrRef<UIWidgetBlueprint> m_itemTemplate; // 0x70 (112)
		Array<String> m_categoryDisplayOrder; // 0x78 (120)
		u32 m_slotPrimary; // 0x80 (128)
		u32 m_slotSecondary; // 0x84 (132)
		UIGridStepperConfig m_gridStepperConfig; // 0x88 (136)
		bool m_unlockEverything; // 0xA0 (160)
	}; // 0xA8 (168)
}

