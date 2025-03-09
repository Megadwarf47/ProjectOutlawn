///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/PvZWeaponsBinding.h>
#include <fb/SoldierWeaponsComponentData.h>

namespace fb {
	class PVZSoldierWeaponsComponentData : public SoldierWeaponsComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZSoldierWeaponsComponentData"); }
		virtual ~PVZSoldierWeaponsComponentData() override {}
		PVZSoldierWeaponsComponentData() {
			m_overheatingValue = 0.8f;
		};

		float m_overheatingValue; // 0x700 (1792)
		PvZWeaponsBinding m_pvZWeaponsAnimationBinding; // 0x704 (1796)
	}; // 0x760 (1888)
}

