///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Asset.h>
#include <fb/KitPlayerRankLevelData.h>
#include <fb/RankChallengeMapping.h>
#include <fb/RefArray.h>

namespace fb {
	class PlayerRankLevelData;
	class RankLevelData;
}

namespace fb {
	class RankParamsAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RankParamsAsset"); }
		virtual ~RankParamsAsset() override {}
		RankParamsAsset() {
			m_rankLevelCap = 20;
			m_midLevelMilestoneCount = 5;
		};

		RefArray<RankLevelData> m_ranks; // 0x18 (24)
		u32 m_rankLevelCap; // 0x20 (32)
		Array<RankChallengeMapping> m_rankChallengeMapping; // 0x28 (40)
		u32 m_midLevelMilestoneCount; // 0x30 (48)
		RefArray<PlayerRankLevelData> m_playerRanks; // 0x38 (56)
		Array<KitPlayerRankLevelData> m_kitRankBuckets; // 0x40 (64)
	}; // 0x48 (72)
}

