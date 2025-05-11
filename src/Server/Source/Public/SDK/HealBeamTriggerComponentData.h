///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GameComponentData.h>

namespace fb {
	class HealBeamTriggerComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("HealBeamTriggerComponentData"); }
		virtual ~HealBeamTriggerComponentData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		HealBeamTriggerComponentData() {
		};

	}; // 0x70 (112)
}

