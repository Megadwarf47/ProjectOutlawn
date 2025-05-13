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
	class WaveComposition;
}

namespace fb {
	class WaveLevelData : public DataContainerPolicyAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WaveLevelData"); }
		virtual ~WaveLevelData() override {}
		WaveLevelData() {
		};

		RefArray<WaveComposition> m_waveCompositions; // 0x18 (24)
	}; // 0x20 (32)
}

