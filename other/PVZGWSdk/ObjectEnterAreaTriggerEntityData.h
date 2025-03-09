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
	class ObjectEnterAreaTriggerEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ObjectEnterAreaTriggerEntityData"); }
		virtual ~ObjectEnterAreaTriggerEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		ObjectEnterAreaTriggerEntityData() {
			m_realm = Realm::Realm_Client;
			m_updatePass = UpdatePass::UpdatePass_PostFrame;
			m_autoStart = true;
		};

		Realm m_realm; // 0x18 (24)
		UpdatePass m_updatePass; // 0x1C (28)
		bool m_autoStart; // 0x20 (32)
	}; // 0x28 (40)
}

