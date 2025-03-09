///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ComponentData.h>
#include <fb/CtrRef.h>

namespace fb {
	class EffectBlueprint;
}

namespace fb {
	class BurningComponentData : public ComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BurningComponentData"); }
		virtual ~BurningComponentData() override {}
		BurningComponentData() {
		};

		CtrRef<EffectBlueprint> m_burningEffect; // 0x70 (112)
	}; // 0x80 (128)
}

