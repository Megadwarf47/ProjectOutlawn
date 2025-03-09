///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameParametersData.h>

namespace fb {
	class BFGameParametersData : public GameParametersData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BFGameParametersData"); }
		virtual ~BFGameParametersData() override {}
		BFGameParametersData() {
			m_enablePersistedGameId = false;
		};

		bool m_enablePersistedGameId; // 0x58 (88)
	}; // 0x60 (96)
}

