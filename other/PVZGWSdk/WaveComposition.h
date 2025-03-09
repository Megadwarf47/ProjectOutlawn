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
	class WaveSubGroup;
}

namespace fb {
	class WaveComposition : public DataContainerPolicyAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WaveComposition"); }
		virtual ~WaveComposition() override {}
		WaveComposition() {
			m_specialWavePercentage = 0.f;
			m_randomizeSubgroupOrder = true;
			m_isHugeWave = false;
		};

		RefArray<WaveSubGroup> m_waveSubGroups; // 0x18 (24)
		float m_specialWavePercentage; // 0x20 (32)
		bool m_randomizeSubgroupOrder; // 0x24 (36)
		bool m_isHugeWave; // 0x25 (37)
	}; // 0x28 (40)
}

