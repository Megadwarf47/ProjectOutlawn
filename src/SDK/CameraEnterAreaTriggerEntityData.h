///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EntityData.h>
#include <fb/UpdatePass.h>

namespace fb {
	class CameraEnterAreaTriggerEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CameraEnterAreaTriggerEntityData"); }
		virtual ~CameraEnterAreaTriggerEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		CameraEnterAreaTriggerEntityData() {
			m_updatePass = UpdatePass::UpdatePass_PostFrame;
			m_timeTreshold = 2.f;
			m_autoStart = true;
		};

		UpdatePass m_updatePass; // 0x18 (24)
		float m_timeTreshold; // 0x1C (28)
		bool m_autoStart; // 0x20 (32)
	}; // 0x28 (40)
}

