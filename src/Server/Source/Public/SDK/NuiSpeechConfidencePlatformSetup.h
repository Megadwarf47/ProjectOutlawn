///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/CtrRef.h>

namespace fb {
	class NuiSpeechConfidencePlatformSetupEntry;
}

namespace fb {
	class NuiSpeechConfidencePlatformSetup : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("NuiSpeechConfidencePlatformSetup"); }
		virtual ~NuiSpeechConfidencePlatformSetup() override {}
		NuiSpeechConfidencePlatformSetup() {
		};

		CtrRef<NuiSpeechConfidencePlatformSetupEntry> m_entry; // 0x18 (24)
	}; // 0x20 (32)
}

