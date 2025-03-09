///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/RarenessLevel.h>
#include <fb/String.h>
#include <fb/UIItemDescription.h>

namespace fb {
	class UIBattlepackBoostItemDescription : public UIItemDescription {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIBattlepackBoostItemDescription"); }
		virtual ~UIBattlepackBoostItemDescription() override {}
		UIBattlepackBoostItemDescription() {
			m_boostIdentifier = 0;
			m_rarenessLevel = RarenessLevel::RarenessLevel_Common;
			m_quantity = 0;
			m_displayQuantity = true;
		};

		u32 m_boostIdentifier; // 0x28 (40)
		String m_label; // 0x30 (48)
		String m_description; // 0x38 (56)
		String m_category; // 0x40 (64)
		RarenessLevel m_rarenessLevel; // 0x48 (72)
		String m_imageName; // 0x50 (80)
		u32 m_quantity; // 0x58 (88)
		bool m_displayQuantity; // 0x5C (92)
	}; // 0x60 (96)
}

