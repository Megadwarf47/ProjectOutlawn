///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/UnlockAsset.h>

namespace fb {
	class PlaylistUnlockAsset : public UnlockAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PlaylistUnlockAsset"); }
		virtual ~PlaylistUnlockAsset() override {}
		PlaylistUnlockAsset() {
			m_startRank = 0;
			m_endRank = 0;
		};

		Array<u32> m_playlistId; // 0x40 (64)
		s32 m_startRank; // 0x48 (72)
		s32 m_endRank; // 0x4C (76)
	}; // 0x50 (80)
}

