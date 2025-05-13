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

namespace fb {
	class RandomMultiEventEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RandomMultiEventEntityData"); }
		virtual ~RandomMultiEventEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		RandomMultiEventEntityData() {
			m_realm = Realm::Realm_Server;
			m_uniformDistribution = true;
			m_disableOutputOnTrigger = false;
			m_resetOutputsWhenAllHasTriggered = true;
		};

		Realm m_realm; // 0x18 (24)
		Array<float> m_randomEventWeight; // 0x20 (32)
		bool m_uniformDistribution; // 0x28 (40)
		bool m_disableOutputOnTrigger; // 0x29 (41)
		bool m_resetOutputsWhenAllHasTriggered; // 0x2A (42)
	}; // 0x30 (48)
}

