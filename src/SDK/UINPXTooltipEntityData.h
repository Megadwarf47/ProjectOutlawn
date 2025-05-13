///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/Realm.h>
#include <fb/RefArray.h>
#include <fb/String.h>

namespace fb {
	class UINPXLine;
}

namespace fb {
	class UINPXTooltipEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UINPXTooltipEntityData"); }
		virtual ~UINPXTooltipEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		UINPXTooltipEntityData() {
			m_realm = Realm::Realm_Client;
			m_timer = -1.f;
			m_layoutIndex = 0;
			m_runOnce = false;
			m_showCloseButton = false;
			m_saveWhenClosed = true;
			m_usePresetLayout = false;
			m_eatAllInput = false;
		};

		Realm m_realm; // 0x18 (24)
		String m_tooltipTitle; // 0x20 (32)
		RefArray<UINPXLine> m_npxLines; // 0x28 (40)
		float m_timer; // 0x30 (48)
		u32 m_layoutIndex; // 0x34 (52)
		String m_sharedID; // 0x38 (56)
		bool m_runOnce; // 0x40 (64)
		bool m_showCloseButton; // 0x41 (65)
		bool m_saveWhenClosed; // 0x42 (66)
		bool m_usePresetLayout; // 0x43 (67)
		bool m_eatAllInput; // 0x44 (68)
	}; // 0x48 (72)
}

