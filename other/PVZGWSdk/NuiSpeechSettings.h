///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/RefArray.h>
#include <fb/SystemSettings.h>

namespace fb {
	class NuiSpeechConfidencePolicySetup;
	class NuiSpeechDialect;
}

namespace fb {
	class NuiSpeechSettings : public SystemSettings {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("NuiSpeechSettings"); }
		virtual ~NuiSpeechSettings() override {}
		NuiSpeechSettings() {
		};

		RefArray<NuiSpeechDialect> m_dialectsConfiguration; // 0x20 (32)
		CtrRef<NuiSpeechConfidencePolicySetup> m_defaultConfidencePolicy; // 0x28 (40)
	}; // 0x30 (48)
}

