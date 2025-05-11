///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioGraphParameterConfigData.h>
#include <fb/CtrRef.h>

namespace fb {
	class Asset;
}

namespace fb {
	class AudioGraphAssetParameterConfigData : public AudioGraphParameterConfigData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AudioGraphAssetParameterConfigData"); }
		virtual ~AudioGraphAssetParameterConfigData() override {}
		AudioGraphAssetParameterConfigData() {
		};

		CtrRef<Asset> m_asset; // 0x18 (24)
	}; // 0x20 (32)
}

