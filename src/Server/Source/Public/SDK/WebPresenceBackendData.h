///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/PresenceBackendData.h>

namespace fb {
	class BattlelogConfigData;
}

namespace fb {
	class WebPresenceBackendData : public PresenceBackendData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WebPresenceBackendData"); }
		virtual ~WebPresenceBackendData() override {}
		WebPresenceBackendData() {
		};

		CtrRef<BattlelogConfigData> m_battlelogConfiguration; // 0x18 (24)
	}; // 0x20 (32)
}

