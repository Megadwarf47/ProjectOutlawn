///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Asset.h>
#include <fb/CtrRef.h>

namespace fb {
	class AwardDataTree;
	class BattlepackAsset;
	class DogTagsAsset;
	class PersistenceData;
	class RankParamsAsset;
	class ScoringData;
	class SkillLevelParameters;
	class StatSpamSettings;
	class StaticUnlockList;
}

namespace fb {
	class PlayerTypeProfile : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PlayerTypeProfile"); }
		virtual ~PlayerTypeProfile() override {}
		PlayerTypeProfile() {
		};

		CtrRef<PersistenceData> m_values; // 0x18 (24)
		CtrRef<AwardDataTree> m_awards; // 0x20 (32)
		CtrRef<RankParamsAsset> m_rankParams; // 0x28 (40)
		CtrRef<ScoringData> m_scoring; // 0x30 (48)
		CtrRef<DogTagsAsset> m_dogTags; // 0x38 (56)
		CtrRef<BattlepackAsset> m_battlepacks; // 0x40 (64)
		CtrRef<SkillLevelParameters> m_skillLevelParams; // 0x48 (72)
		CtrRef<StaticUnlockList> m_staticUnlocks; // 0x50 (80)
		CtrRef<StatSpamSettings> m_spamSettings; // 0x58 (88)
		Array<String> m_orderedUnlockNames; // 0x60 (96)
	}; // 0x68 (104)
}

