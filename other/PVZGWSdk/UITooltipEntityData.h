///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/EntityData.h>
#include <fb/Realm.h>
#include <fb/UITooltipLine.h>

namespace fb {
	class UITooltipEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UITooltipEntityData"); }
		virtual ~UITooltipEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		UITooltipEntityData() {
			m_realm = Realm::Realm_Client;
			m_timer = 10.f;
		};

		Realm m_realm; // 0x18 (24)
		float m_timer; // 0x1C (28)
		Array<UITooltipLine> m_tooltipLines; // 0x20 (32)
	}; // 0x28 (40)
}

