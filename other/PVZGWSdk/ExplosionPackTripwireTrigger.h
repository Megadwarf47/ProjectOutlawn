///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/ExplosionPackTrigger.h>

namespace fb {
	class TripwireEntityData;
}

namespace fb {
	class ExplosionPackTripwireTrigger : public ExplosionPackTrigger {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ExplosionPackTripwireTrigger"); }
		virtual ~ExplosionPackTripwireTrigger() override {}
		ExplosionPackTripwireTrigger() {
		};

		CtrRef<TripwireEntityData> m_tripwire; // 0x10 (16)
	}; // 0x18 (24)
}

