///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIWidgetEntityData.h>
#include <fb/CtrRef.h>
#include <fb/String.h>

namespace fb {
	class UIWidgetBlueprint;
}

namespace fb {
	class UIWeaponSelectorSlotDisplayData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIWeaponSelectorSlotDisplayData"); }
		virtual ~UIWeaponSelectorSlotDisplayData() override {}
		UIWeaponSelectorSlotDisplayData() {
		};

		String m_weaponSelectorGridWidgetCAI; // 0x68 (104)
		CtrRef<UIWidgetBlueprint> m_slotTemplatePrimary; // 0x70 (112)
		CtrRef<UIWidgetBlueprint> m_slotTemplateSecondary; // 0x78 (120)
	}; // 0x80 (128)
}

