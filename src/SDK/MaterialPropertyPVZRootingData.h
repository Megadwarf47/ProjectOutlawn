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
	class MaterialPropertyPVZRootingData : public PhysicsMaterialRelationPropertyData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MaterialPropertyPVZRootingData"); }
		virtual ~MaterialPropertyPVZRootingData() override {}
		MaterialPropertyPVZRootingData() {
		};

		CtrRef<EffectBlueprint> m_rootingEffect; // 0x10 (16)
		CtrRef<EffectBlueprint> m_rootedEffect; // 0x18 (24)
		CtrRef<EffectBlueprint> m_unrootingEffect; // 0x20 (32)
	}; // 0x28 (40)
}

