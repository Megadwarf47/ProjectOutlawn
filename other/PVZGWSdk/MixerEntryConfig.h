///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainer.h>

namespace fb {
	class AudioGraphParameter;
	class MixerAsset;
}

namespace fb {
	class MixerEntryConfig : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MixerEntryConfig"); }
		virtual ~MixerEntryConfig() override {}
		MixerEntryConfig() {
		};

		CtrRef<AudioGraphParameter> m_graphParameter; // 0x10 (16)
		CtrRef<MixerAsset> m_mixer; // 0x18 (24)
	}; // 0x20 (32)
}

