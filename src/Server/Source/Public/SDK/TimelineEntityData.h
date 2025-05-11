///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/EntityData.h>
#include <fb/Realm.h>
#include <fb/UpdatePass.h>

namespace fb {
	class TimelineData;
}

namespace fb {
	class TimelineEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TimelineEntityData"); }
		virtual ~TimelineEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		TimelineEntityData() {
			m_realm = Realm::Realm_Client;
			m_clientUpdatePass = UpdatePass::UpdatePass_PostFrame;
			m_serverUpdatePass = UpdatePass::UpdatePass_PreSim;
			m_initTime = 0.f;
			m_startTime = 0.f;
			m_endTime = 10.f;
			m_jumpTime = 0.f;
			m_playbackRate = 1.f;
			m_externalTime = 0.f;
			m_autoPlay = false;
			m_autoInitConnectedProperties = false;
			m_resetOnFinished = true;
			m_allowAnimationCarryForward = false;
			m_looping = false;
			m_infinite = false;
		};

		Realm m_realm; // 0x18 (24)
		CtrRef<TimelineData> m_timelineData; // 0x20 (32)
		UpdatePass m_clientUpdatePass; // 0x28 (40)
		UpdatePass m_serverUpdatePass; // 0x2C (44)
		float m_initTime; // 0x30 (48)
		float m_startTime; // 0x34 (52)
		float m_endTime; // 0x38 (56)
		float m_jumpTime; // 0x3C (60)
		float m_playbackRate; // 0x40 (64)
		float m_externalTime; // 0x44 (68)
		bool m_autoPlay; // 0x48 (72)
		bool m_autoInitConnectedProperties; // 0x49 (73)
		bool m_resetOnFinished; // 0x4A (74)
		bool m_allowAnimationCarryForward; // 0x4B (75)
		bool m_looping; // 0x4C (76)
		bool m_infinite; // 0x4D (77)
	}; // 0x50 (80)
}

