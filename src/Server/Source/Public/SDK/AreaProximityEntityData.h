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
	class AreaProximityEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AreaProximityEntityData"); }
		virtual ~AreaProximityEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		AreaProximityEntityData() {
			m_realm = Realm::Realm_Client;
			m_updatePass = UpdatePass::UpdatePass_PostFrame;
			m_proximityDistance = 1.f;
			m_autoStart = true;
		};

		Realm m_realm; // 0x18 (24)
		UpdatePass m_updatePass; // 0x1C (28)
		float m_proximityDistance; // 0x20 (32)
		bool m_autoStart; // 0x24 (36)
	}; // 0x28 (40)
}

