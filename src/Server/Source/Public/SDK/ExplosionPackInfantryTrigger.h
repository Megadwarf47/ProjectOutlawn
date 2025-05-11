///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ExplosionPackTrigger.h>

namespace fb {
	class ExplosionPackInfantryTrigger : public ExplosionPackTrigger {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ExplosionPackInfantryTrigger"); }
		virtual ~ExplosionPackInfantryTrigger() override {}
		ExplosionPackInfantryTrigger() {
		};

	}; // 0x10 (16)
}

