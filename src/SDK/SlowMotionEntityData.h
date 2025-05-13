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
	class SlowMotionEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SlowMotionEntityData"); }
		virtual ~SlowMotionEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		SlowMotionEntityData() {
			m_realm = Realm::Realm_ClientAndServer;
			m_timeScale = 1.f;
			m_scaleDownTransitionTime = 0.f;
			m_scaleUpTransitionTime = 0.f;
		};

		Realm m_realm; // 0x18 (24)
		float m_timeScale; // 0x1C (28)
		float m_scaleDownTransitionTime; // 0x20 (32)
		float m_scaleUpTransitionTime; // 0x24 (36)
	}; // 0x28 (40)
}

