///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BlazeCreateGameParameters.h>
#include <fb/OnlineEnvironmentConsoleUrl.h>
#include <fb/ServerBackendData.h>

namespace fb {
	class BlazeServerBackendData : public ServerBackendData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BlazeServerBackendData"); }
		virtual ~BlazeServerBackendData() override {}
		BlazeServerBackendData() {
		};

		BlazeCreateGameParameters m_createParameters; // 0x18 (24)
		OnlineEnvironmentConsoleUrl m_configUrl; // 0x20 (32)
	}; // 0x28 (40)
}

