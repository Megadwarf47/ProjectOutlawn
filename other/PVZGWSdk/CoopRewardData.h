///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CoopRewardType.h>
#include <fb/DataContainerPolicyAsset.h>

namespace fb {
	class CoopRewardData : public DataContainerPolicyAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CoopRewardData"); }
		virtual ~CoopRewardData() override {}
		CoopRewardData() {
			m_rewardType = CoopRewardType::CoopRewardType_None;
		};

		CoopRewardType m_rewardType; // 0x18 (24)
	}; // 0x20 (32)
}

