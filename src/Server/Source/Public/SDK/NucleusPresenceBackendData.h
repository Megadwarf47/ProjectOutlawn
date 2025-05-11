///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/NucleusEnvironmentConfiguration.h>
#include <fb/NucleusPlatformConfiguration.h>
#include <fb/PresenceBackendData.h>

namespace fb {
	class NucleusPresenceBackendData : public PresenceBackendData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("NucleusPresenceBackendData"); }
		virtual ~NucleusPresenceBackendData() override {}
		NucleusPresenceBackendData() {
		};

		Array<NucleusEnvironmentConfiguration> m_environments; // 0x18 (24)
		Array<NucleusPlatformConfiguration> m_platforms; // 0x20 (32)
	}; // 0x28 (40)
}

