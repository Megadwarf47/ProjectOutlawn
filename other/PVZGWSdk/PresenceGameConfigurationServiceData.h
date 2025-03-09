///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/GameConfigurationContentMapping.h>
#include <fb/OnlineEnvironmentConsoleUrl.h>
#include <fb/PresenceServiceData.h>

namespace fb {
	class PresenceGameConfigurationServiceData : public PresenceServiceData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PresenceGameConfigurationServiceData"); }
		virtual ~PresenceGameConfigurationServiceData() override {}
		PresenceGameConfigurationServiceData() {
		};

		OnlineEnvironmentConsoleUrl m_configUrl; // 0x18 (24)
		Array<GameConfigurationContentMapping> m_contentMappings; // 0x20 (32)
	}; // 0x28 (40)
}

