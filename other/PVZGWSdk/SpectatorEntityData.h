///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/EntityData.h>

namespace fb {
	class SpectatorViewData;
}

namespace fb {
	class SpectatorEntityData : public EntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SpectatorEntityData"); }
		virtual ~SpectatorEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		SpectatorEntityData() {
			m_corpseWatchMaxTimeSec = 2.5f;
			m_viewSyncTimeout = 5.f;
			m_viewSyncExtraFrames = 3;
			m_viewSyncExtraDelay = 0.1f;
			m_enabled = false;
			m_onlySameTeam = false;
		};

		CtrRef<SpectatorViewData> m_view; // 0x18 (24)
		float m_corpseWatchMaxTimeSec; // 0x20 (32)
		float m_viewSyncTimeout; // 0x24 (36)
		s32 m_viewSyncExtraFrames; // 0x28 (40)
		float m_viewSyncExtraDelay; // 0x2C (44)
		bool m_enabled; // 0x30 (48)
		bool m_onlySameTeam; // 0x31 (49)
	}; // 0x38 (56)
}

