///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BasicUnlockInfo.h>
#include <fb/DataContainer.h>
#include <fb/String.h>

namespace fb {
	class ConsumableUnlock : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ConsumableUnlock"); }
		virtual ~ConsumableUnlock() override {}
		ConsumableUnlock() {
		};

		String m_code; // 0x10 (16)
		BasicUnlockInfo m_consumableUnlockInfo; // 0x18 (24)
	}; // 0x50 (80)
}

