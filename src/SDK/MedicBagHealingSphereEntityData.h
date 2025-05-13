///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ExplosionPackEntityData.h>
#include <fb/HealingSphereData.h>

namespace fb {
	class MedicBagHealingSphereEntityData : public ExplosionPackEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MedicBagHealingSphereEntityData"); }
		virtual ~MedicBagHealingSphereEntityData() override {}
		MedicBagHealingSphereEntityData() {
		};

		HealingSphereData m_healer; // 0x190 (400)
	}; // 0x1A0 (416)
}

