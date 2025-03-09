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
#include <fb/SoundDataReference.h>

namespace fb {
	class SoundScopeData;
}

namespace fb {
	class SoundAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoundAsset"); }
		virtual ~SoundAsset() override {}
		SoundAsset() {
		};

		CtrRef<SoundScopeData> m_scope; // 0x18 (24)
		Array<SoundDataReference> m_referencedData; // 0x20 (32)
	}; // 0x28 (40)
}

