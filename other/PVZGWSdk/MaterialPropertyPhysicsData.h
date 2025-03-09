///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/PhysicsMaterialRelationPropertyData.h>

namespace fb {
	class MaterialPropertyPhysicsData : public PhysicsMaterialRelationPropertyData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MaterialPropertyPhysicsData"); }
		virtual ~MaterialPropertyPhysicsData() override {}
		MaterialPropertyPhysicsData() {
			m_dynamicFrictionModifier = 1.f;
			m_staticFrictionModifier = 1.f;
			m_restitutionModifier = 1.f;
			m_resistance = 0.f;
		};

		float m_dynamicFrictionModifier; // 0x10 (16)
		float m_staticFrictionModifier; // 0x14 (20)
		float m_restitutionModifier; // 0x18 (24)
		float m_resistance; // 0x1C (28)
	}; // 0x20 (32)
}

