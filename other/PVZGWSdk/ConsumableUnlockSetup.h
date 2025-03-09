///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/RefArray.h>

namespace fb {
	class ConsumableUnlock;
}

namespace fb {
	class ConsumableUnlockSetup : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ConsumableUnlockSetup"); }
		virtual ~ConsumableUnlockSetup() override {}
		ConsumableUnlockSetup() {
		};

		RefArray<ConsumableUnlock> m_consumableUnlocks; // 0x18 (24)
	}; // 0x20 (32)
}

