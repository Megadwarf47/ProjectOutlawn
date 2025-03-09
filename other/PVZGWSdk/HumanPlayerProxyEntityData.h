///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>

namespace fb {
	class HumanPlayerProxyEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("HumanPlayerProxyEntityData"); }
		virtual ~HumanPlayerProxyEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		HumanPlayerProxyEntityData() {
			m_enableOnDiedOnMeleeEvent = false;
			m_enableOnDiedInWaterEvent = false;
			m_enableOnDiedByDamageAreaEvent = false;
		};

		bool m_enableOnDiedOnMeleeEvent; // 0x18 (24)
		bool m_enableOnDiedInWaterEvent; // 0x19 (25)
		bool m_enableOnDiedByDamageAreaEvent; // 0x1A (26)
	}; // 0x20 (32)
}

