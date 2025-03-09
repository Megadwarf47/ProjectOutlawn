///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/Realm.h>
#include <fb/UpdatePass.h>

namespace fb {
	class StopWatchEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("StopWatchEntityData"); }
		virtual ~StopWatchEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		StopWatchEntityData() {
			m_realm = Realm::Realm_Server;
			m_updatePass = UpdatePass::UpdatePass_PreSim;
			m_multiplier = 1.f;
			m_triggerOnTime = 0.f;
		};

		Realm m_realm; // 0x18 (24)
		UpdatePass m_updatePass; // 0x1C (28)
		float m_multiplier; // 0x20 (32)
		float m_triggerOnTime; // 0x24 (36)
	}; // 0x28 (40)
}

