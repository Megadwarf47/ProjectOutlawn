///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/UIComponentData.h>

namespace fb {
	class UIPVZWeaponCompData : public UIComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIPVZWeaponCompData"); }
		virtual ~UIPVZWeaponCompData() override {}
		UIPVZWeaponCompData() {
			m_minHitIndicatorLimit = 0.f;
			m_normalHitIndicatorLimit = 25.f;
			m_maxHitIndicatorLimit = 50.f;
		};

		float m_minHitIndicatorLimit; // 0x30 (48)
		float m_normalHitIndicatorLimit; // 0x34 (52)
		float m_maxHitIndicatorLimit; // 0x38 (56)
	}; // 0x40 (64)
}

