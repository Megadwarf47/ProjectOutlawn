///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/PhysicsMaterialRelationPropertyData.h>
#include <fb/Vec3.h>

namespace fb {
	class EffectBlueprint;
}

namespace fb {
	class MaterialPropertyTerrainData : public PhysicsMaterialRelationPropertyData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MaterialPropertyTerrainData"); }
		virtual ~MaterialPropertyTerrainData() override {}
		MaterialPropertyTerrainData() {
			m_dirtTriggerFactor = 0.f;
		};

		CtrRef<EffectBlueprint> m_destructionEffect; // 0x10 (16)
		float m_dirtTriggerFactor; // 0x18 (24)
		Vec3 m_dirtTriggerColor; // 0x20 (32)
	}; // 0x30 (48)
}

