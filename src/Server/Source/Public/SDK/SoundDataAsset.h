///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/Asset.h>
#include <fb/CtrRef.h>
#include <fb/SoundDataChunk.h>

namespace fb {
	class SoundDataPolicy;
}

namespace fb {
	class SoundDataAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoundDataAsset"); }
		virtual ~SoundDataAsset() override {}
		SoundDataAsset() {
			m_primePriority = 0;
			m_requestPriority = 0;
		};

		Array<SoundDataChunk> m_chunks; // 0x18 (24)
		CtrRef<SoundDataPolicy> m_policy; // 0x20 (32)
		u8 m_primePriority; // 0x28 (40)
		u8 m_requestPriority; // 0x29 (41)
	}; // 0x30 (48)
}

