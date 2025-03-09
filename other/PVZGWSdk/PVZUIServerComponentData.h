///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/PVZServerInfo.h>
#include <fb/RefArray.h>
#include <fb/UIComponentData.h>

namespace fb {
	class PlaylistUnlockAsset;
}

namespace fb {
	class PVZUIServerComponentData : public UIComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZUIServerComponentData"); }
		virtual ~PVZUIServerComponentData() override {}
		PVZUIServerComponentData() {
		};

		Array<PVZServerInfo> m_pvzServers; // 0x30 (48)
		RefArray<PlaylistUnlockAsset> m_playlistUnlocks; // 0x38 (56)
	}; // 0x40 (64)
}

