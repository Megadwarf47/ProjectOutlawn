///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AISpawnDataSwap.h>
#include <fb/Array.h>
#include <fb/DataContainerPolicyAsset.h>

namespace fb {
	class AISpawnDataRemap : public DataContainerPolicyAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AISpawnDataRemap"); }
		virtual ~AISpawnDataRemap() override {}
		AISpawnDataRemap() {
		};

		Array<AISpawnDataSwap> m_blueprintSwap; // 0x18 (24)
	}; // 0x20 (32)
}

