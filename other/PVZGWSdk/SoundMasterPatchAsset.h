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
	class SoundBusData;
	class SoundGraphData;
}

namespace fb {
	class SoundMasterPatchAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoundMasterPatchAsset"); }
		virtual ~SoundMasterPatchAsset() override {}
		SoundMasterPatchAsset() {
		};

		CtrRef<SoundGraphData> m_graph; // 0x18 (24)
		RefArray<SoundBusData> m_busses; // 0x20 (32)
		CtrRef<SoundBusData> m_rwMovieBus; // 0x28 (40)
	}; // 0x30 (48)
}

