///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/SoundAsset.h>

namespace fb {
	class MixerAsset;
	class SoundGraphData;
}

namespace fb {
	class SoundGraphAsset : public SoundAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoundGraphAsset"); }
		virtual ~SoundGraphAsset() override {}
		SoundGraphAsset() {
		};

		CtrRef<SoundGraphData> m_graph; // 0x28 (40)
		CtrRef<MixerAsset> m_mixer; // 0x30 (48)
	}; // 0x38 (56)
}

