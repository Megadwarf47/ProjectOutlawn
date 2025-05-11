///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/PhysicsMaterialRelationPropertyData.h>

namespace fb {
	class EffectBlueprint;
}

namespace fb {
	class MaterialPropertyPVZRoadieSprintData : public PhysicsMaterialRelationPropertyData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MaterialPropertyPVZRoadieSprintData"); }
		virtual ~MaterialPropertyPVZRoadieSprintData() override {}
		MaterialPropertyPVZRoadieSprintData() {
		};

		CtrRef<EffectBlueprint> m_roadieSprintEffect; // 0x10 (16)
	}; // 0x18 (24)
}

