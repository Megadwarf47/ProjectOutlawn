///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/Realm.h>

namespace fb {
	class TabletCommanderEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TabletCommanderEntityData"); }
		virtual ~TabletCommanderEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		TabletCommanderEntityData() {
			m_realm = Realm::Realm_Server;
			m_obliterationTargetsArmedBitmask = 0;
			m_obliterationTargetsDestroyedBitmask = 0;
			m_eoRTime = 0.f;
		};

		Realm m_realm; // 0x18 (24)
		s32 m_obliterationTargetsArmedBitmask; // 0x1C (28)
		s32 m_obliterationTargetsDestroyedBitmask; // 0x20 (32)
		float m_eoRTime; // 0x24 (36)
	}; // 0x28 (40)
}

