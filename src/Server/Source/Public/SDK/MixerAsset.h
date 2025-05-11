///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/CtrRef.h>
#include <fb/RefArray.h>

namespace fb {
	class MixerGraphData;
	class MixerPreset;
}

namespace fb {
	class MixerAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MixerAsset"); }
		virtual ~MixerAsset() override {}
		MixerAsset() {
			m_bypass = false;
		};

		CtrRef<MixerGraphData> m_graph; // 0x18 (24)
		RefArray<MixerPreset> m_presets; // 0x20 (32)
		CtrRef<MixerPreset> m_defaultPreset; // 0x28 (40)
		bool m_bypass; // 0x30 (48)
	}; // 0x38 (56)
}

