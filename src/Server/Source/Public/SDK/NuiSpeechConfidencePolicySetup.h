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
	class NuiSpeechConfidencePlatformPolicy;
}

namespace fb {
	class NuiSpeechConfidencePolicySetup : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("NuiSpeechConfidencePolicySetup"); }
		virtual ~NuiSpeechConfidencePolicySetup() override {}
		NuiSpeechConfidencePolicySetup() {
		};

		CtrRef<NuiSpeechConfidencePlatformPolicy> m_currentPlatformPolicy; // 0x18 (24)
	}; // 0x20 (32)
}

