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
	class MaterialRelationVehicleData : public PhysicsMaterialRelationPropertyData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MaterialRelationVehicleData"); }
		virtual ~MaterialRelationVehicleData() override {}
		MaterialRelationVehicleData() {
		};

		CtrRef<EffectBlueprint> m_chassiEffect; // 0x10 (16)
		CtrRef<EffectBlueprint> m_trackEffect; // 0x18 (24)
		CtrRef<EffectBlueprint> m_wheelEffect; // 0x20 (32)
		CtrRef<EffectBlueprint> m_groundEffect; // 0x28 (40)
	}; // 0x30 (48)
}

