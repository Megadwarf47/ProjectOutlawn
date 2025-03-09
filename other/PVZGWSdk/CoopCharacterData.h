///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainerPolicyAsset.h>

namespace fb {
	class AISpawnData;
}

namespace fb {
	class CoopCharacterData : public DataContainerPolicyAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CoopCharacterData"); }
		virtual ~CoopCharacterData() override {}
		CoopCharacterData() {
			m_weight = 0.1f;
			m_rewardCoins = 5;
		};

		CtrRef<AISpawnData> m_spawnData; // 0x18 (24)
		float m_weight; // 0x20 (32)
		s32 m_rewardCoins; // 0x24 (36)
	}; // 0x28 (40)
}

