///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIWidgetEntityData.h>

namespace fb {
	class UISoldierStatusWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UISoldierStatusWidgetData"); }
		virtual ~UISoldierStatusWidgetData() override {}
		UISoldierStatusWidgetData() {
			m_maxGrenadesToDisplay = 3;
			m_reloadAreaHeight = 30;
			m_reloadAreaSpeed = 2.f;
			m_ammoAnimationDuration = 0.5f;
			m_ammoAnimationTargetScale = 1.25f;
			m_soldierHealthAnimationStartMinChange = 10;
			m_soldierHealthAnimationDuration = 0.5f;
			m_soldierHealthAnimationTargetScale = 1.25f;
			m_vehicleHealthAnimationDuration = 0.5f;
			m_vehicleHealthAnimationTargetScale = 1.25f;
		};

		u32 m_maxGrenadesToDisplay; // 0x68 (104)
		u32 m_reloadAreaHeight; // 0x6C (108)
		float m_reloadAreaSpeed; // 0x70 (112)
		float m_ammoAnimationDuration; // 0x74 (116)
		float m_ammoAnimationTargetScale; // 0x78 (120)
		s32 m_soldierHealthAnimationStartMinChange; // 0x7C (124)
		float m_soldierHealthAnimationDuration; // 0x80 (128)
		float m_soldierHealthAnimationTargetScale; // 0x84 (132)
		float m_vehicleHealthAnimationDuration; // 0x88 (136)
		float m_vehicleHealthAnimationTargetScale; // 0x8C (140)
	}; // 0x90 (144)
}

