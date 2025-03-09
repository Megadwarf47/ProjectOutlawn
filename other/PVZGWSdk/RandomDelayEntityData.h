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
	class RandomDelayEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RandomDelayEntityData"); }
		virtual ~RandomDelayEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		RandomDelayEntityData() {
			m_minDelay = 0.f;
			m_maxDelay = 0.f;
			m_realm = Realm::Realm_Client;
			m_autoStart = false;
			m_runOnce = false;
			m_trueRandom = false;
		};

		float m_minDelay; // 0x18 (24)
		float m_maxDelay; // 0x1C (28)
		Realm m_realm; // 0x20 (32)
		bool m_autoStart; // 0x24 (36)
		bool m_runOnce; // 0x25 (37)
		bool m_trueRandom; // 0x26 (38)
	}; // 0x28 (40)
}

