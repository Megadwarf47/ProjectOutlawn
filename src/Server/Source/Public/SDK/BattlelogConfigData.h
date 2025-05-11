///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/OnlineEnvironmentConsoleUrl.h>

namespace fb {
	class BattlelogConfigData : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BattlelogConfigData"); }
		virtual ~BattlelogConfigData() override {}
		BattlelogConfigData() {
		};

		OnlineEnvironmentConsoleUrl m_battlelogClientApiUrl; // 0x18 (24)
		OnlineEnvironmentConsoleUrl m_battlelogServerApiUrl; // 0x20 (32)
		OnlineEnvironmentConsoleUrl m_battlelogReportUrl; // 0x28 (40)
	}; // 0x30 (48)
}

