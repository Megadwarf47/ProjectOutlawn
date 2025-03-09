///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/EffectWithSpeedRange.h>
#include <fb/PhysicsMaterialRelationPropertyData.h>
#include <fb/RefArray.h>

namespace fb {
	class ObjectBlueprint;
}

namespace fb {
	class MaterialRelationEffectData : public PhysicsMaterialRelationPropertyData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MaterialRelationEffectData"); }
		virtual ~MaterialRelationEffectData() override {}
		MaterialRelationEffectData() {
			m_impactEffectMaxSpreadAngle = 0.f;
			m_mirrorImpactDirection = false;
			m_enableInheritedVelocity = false;
		};

		Array<EffectWithSpeedRange> m_impactEffects; // 0x10 (16)
		RefArray<ObjectBlueprint> m_impactDebris; // 0x18 (24)
		float m_impactEffectMaxSpreadAngle; // 0x20 (32)
		bool m_mirrorImpactDirection; // 0x24 (36)
		bool m_enableInheritedVelocity; // 0x25 (37)
	}; // 0x28 (40)
}

