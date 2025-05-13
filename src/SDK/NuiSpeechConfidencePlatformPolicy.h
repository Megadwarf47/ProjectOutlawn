///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainer.h>
#include <fb/GamePlatform.h>
#include <fb/RefArray.h>

namespace fb {
	class NuiSpeechConfidenceDialectPolicy;
	class NuiSpeechConfidencePolicy;
}

namespace fb {
	class NuiSpeechConfidencePlatformPolicy : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("NuiSpeechConfidencePlatformPolicy"); }
		virtual ~NuiSpeechConfidencePlatformPolicy() override {}
		NuiSpeechConfidencePlatformPolicy() {
			m_platform = GamePlatform::GamePlatform_Ps3;
		};

		GamePlatform m_platform; // 0x10 (16)
		CtrRef<NuiSpeechConfidencePolicy> m_defaultPolicy; // 0x18 (24)
		RefArray<NuiSpeechConfidenceDialectPolicy> m_dialectPolicies; // 0x20 (32)
	}; // 0x28 (40)
}

