///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainerPolicyAsset.h>
#include <fb/RefArray.h>

namespace fb {
	class CoopCharacterData;
}

namespace fb {
	class WaveBlueprints : public DataContainerPolicyAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WaveBlueprints"); }
		virtual ~WaveBlueprints() override {}
		WaveBlueprints() {
		};

		RefArray<CoopCharacterData> m_aiSpawnDataList; // 0x18 (24)
	}; // 0x20 (32)
}

