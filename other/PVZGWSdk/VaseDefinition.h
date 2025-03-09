///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Asset.h>
#include <fb/VaseAISpawnData.h>
#include <fb/VaseRewardSpawnData.h>

namespace fb {
	class VaseDefinition : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VaseDefinition"); }
		virtual ~VaseDefinition() override {}
		VaseDefinition() {
		};

		Array<VaseAISpawnData> m_aIdata; // 0x18 (24)
		Array<VaseRewardSpawnData> m_rewardData; // 0x20 (32)
	}; // 0x28 (40)
}

