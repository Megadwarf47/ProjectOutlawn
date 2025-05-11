///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/PersistenceData.h>

namespace fb {
	class ConsumableUnlockSetup;
}

namespace fb {
	class BFPersistenceData : public PersistenceData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BFPersistenceData"); }
		virtual ~BFPersistenceData() override {}
		BFPersistenceData() {
		};

		CtrRef<ConsumableUnlockSetup> m_consumableUnlockSetup; // 0x58 (88)
	}; // 0x60 (96)
}

