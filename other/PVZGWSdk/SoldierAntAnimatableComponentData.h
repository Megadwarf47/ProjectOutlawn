///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/LodAntAnimatableComponentData.h>
#include <fb/SoldierAntLodBinding.h>

namespace fb {
	class SoldierAntAnimatableComponentData : public LodAntAnimatableComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoldierAntAnimatableComponentData"); }
		virtual ~SoldierAntAnimatableComponentData() override {}
		SoldierAntAnimatableComponentData() {
			m_hideWeaponDefault = false;
			m_hideBodyPropDefault = true;
		};

		SoldierAntLodBinding m_soldierBinding; // 0x180 (384)
		bool m_hideWeaponDefault; // 0x248 (584)
		bool m_hideBodyPropDefault; // 0x249 (585)
	}; // 0x250 (592)
}

