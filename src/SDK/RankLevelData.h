///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/BasicUnlockInfo.h>
#include <fb/DataContainer.h>
#include <fb/String.h>

namespace fb {
	class RankLevelData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RankLevelData"); }
		virtual ~RankLevelData() override {}
		RankLevelData() {
			m_pointsNeeded = 1;
			m_rankNumber = -1;
		};

		String m_rankName; // 0x10 (16)
		u32 m_pointsNeeded; // 0x18 (24)
		String m_imageName; // 0x20 (32)
		String m_iconName; // 0x28 (40)
		String m_soundName; // 0x30 (48)
		Array<BasicUnlockInfo> m_unlockInfos; // 0x38 (56)
		s32 m_rankNumber; // 0x40 (64)
		Array<String> m_licenses; // 0x48 (72)
	}; // 0x50 (80)
}

