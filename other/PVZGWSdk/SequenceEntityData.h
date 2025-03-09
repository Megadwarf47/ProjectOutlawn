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
#include <fb/RefArray.h>
#include <fb/SequenceEventData.h>
#include <fb/UpdatePass.h>

namespace fb {
	class CustomSequenceTrackData;
	class PropertyTrackData;
}

namespace fb {
	class SequenceEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SequenceEntityData"); }
		virtual ~SequenceEntityData() override {}
		virtual Realm getRealm() const override { return m_realm; }
		SequenceEntityData() {
			m_sequenceStartTime = 0;
			m_sequenceLength = 10000;
			m_realm = Realm::Realm_Client;
			m_clientUpdatePass = UpdatePass::UpdatePass_PostFrame;
			m_serverUpdatePass = UpdatePass::UpdatePass_PreSim;
			m_externalTime = 0.f;
			m_playbackSpeed = 1.f;
			m_looping = false;
			m_autoStart = false;
			m_autoPlayFirstFrame = false;
			m_playInReverse = false;
		};

		Array<SequenceEventData> m_events; // 0x18 (24)
		s32 m_sequenceStartTime; // 0x20 (32)
		s32 m_sequenceLength; // 0x24 (36)
		Realm m_realm; // 0x28 (40)
		RefArray<PropertyTrackData> m_propertyTracks; // 0x30 (48)
		RefArray<CustomSequenceTrackData> m_customSequenceTracks; // 0x38 (56)
		UpdatePass m_clientUpdatePass; // 0x40 (64)
		UpdatePass m_serverUpdatePass; // 0x44 (68)
		float m_externalTime; // 0x48 (72)
		float m_playbackSpeed; // 0x4C (76)
		bool m_looping; // 0x50 (80)
		bool m_autoStart; // 0x51 (81)
		bool m_autoPlayFirstFrame; // 0x52 (82)
		bool m_playInReverse; // 0x53 (83)
	}; // 0x58 (88)
}

