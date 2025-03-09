///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/PhysicsMaterialRelationPropertyData.h>

namespace fb {
	class MaterialRelationDynamicFireData : public PhysicsMaterialRelationPropertyData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MaterialRelationDynamicFireData"); }
		virtual ~MaterialRelationDynamicFireData() override {}
		MaterialRelationDynamicFireData() {
			m_fireDamage = 50.f;
			m_cellDamageRadius = 1;
			m_canSetFire = false;
		};

		float m_fireDamage; // 0x10 (16)
		u32 m_cellDamageRadius; // 0x14 (20)
		bool m_canSetFire; // 0x18 (24)
	}; // 0x20 (32)
}

