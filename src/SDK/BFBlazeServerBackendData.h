///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BlazeServerBackendData.h>
#include <fb/CtrRef.h>

namespace fb {
	class BattlelogConfigData;
}

namespace fb {
	class BFBlazeServerBackendData : public BlazeServerBackendData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BFBlazeServerBackendData"); }
		virtual ~BFBlazeServerBackendData() override {}
		BFBlazeServerBackendData() {
		};

		CtrRef<BattlelogConfigData> m_battlelogConfiguration; // 0x28 (40)
	}; // 0x30 (48)
}

