///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/UIWorldIconBehavior.h>
#include <fb/UIWorldIconFadeConfiguration.h>
#include <fb/UIWorldZoneDistanceConfiguration.h>
#include <fb/UIWorldZoneType.h>

namespace fb {
	class BFUIWorldIconBehavior : public UIWorldIconBehavior {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BFUIWorldIconBehavior"); }
		virtual ~BFUIWorldIconBehavior() override {}
		BFUIWorldIconBehavior() {
			m_scaleZone = UIWorldZoneType::UIWorldZoneType_Close;
			m_lowestScale = 0.5f;
			m_scaleDistance = 300.f;
			m_visibleOnMinimap = true;
			m_magneticToMinimap = true;
			m_visibleOnScreen = true;
			m_magneticToScreen = true;
			m_visibleBehind = true;
			m_visibleOnDeploy = true;
			m_scaleOrderIcon = false;
			m_useCustomZoneDistance = false;
		};

		UIWorldIconFadeConfiguration m_iconFadeConfig; // 0x18 (24)
		UIWorldIconFadeConfiguration m_labelFadeConfig; // 0x38 (56)
		UIWorldIconFadeConfiguration m_progressFadeConfig; // 0x58 (88)
		UIWorldIconFadeConfiguration m_distanceFadeConfig; // 0x78 (120)
		UIWorldZoneDistanceConfiguration m_customZoneDistanceConfig; // 0x98 (152)
		UIWorldZoneType m_scaleZone; // 0xA0 (160)
		float m_lowestScale; // 0xA4 (164)
		float m_scaleDistance; // 0xA8 (168)
		bool m_visibleOnMinimap; // 0xAC (172)
		bool m_magneticToMinimap; // 0xAD (173)
		bool m_visibleOnScreen; // 0xAE (174)
		bool m_magneticToScreen; // 0xAF (175)
		bool m_visibleBehind; // 0xB0 (176)
		bool m_visibleOnDeploy; // 0xB1 (177)
		bool m_scaleOrderIcon; // 0xB2 (178)
		bool m_useCustomZoneDistance; // 0xB3 (179)
	}; // 0xB8 (184)
}

