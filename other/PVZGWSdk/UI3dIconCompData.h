///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/UIComponentData.h>
#include <fb/Vec2.h>

namespace fb {
	class UI3dIconCompData : public UIComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UI3dIconCompData"); }
		virtual ~UI3dIconCompData() override {}
		UI3dIconCompData() {
			m_iconSize = 30.f;
			m_snapSafeZone = 0.8f;
			m_snapCenterYOffset = 0.15f;
			m_shrinkSnapAnimationTime = 0.5f;
			m_trackerHudRadiusX = 0.85f;
			m_trackerHudRadiusY = 0.6f;
			m_maxLookAtThreshold = 10000.f;
			m_minLookAtThreshold = 10000.f;
			m_minLookAtThresholdDistance = 10000.f;
			m_drawDistance = 10000.f;
			m_fadeDistance = 0.f;
			m_fadeEndDistance = 10000.f;
			m_minimumDrawDistance = 0.f;
			m_minimumFadeDistance = 0.f;
			m_maxFarFade = 0.f;
			m_maxCloseFade = 0.f;
			m_showLabelRange = 0.f;
			m_teamRadioDistance = 30.f;
			m_scaleDistance = 60.f;
			m_maxScaleMod = 0.5f;
			m_maxXRotation = 0.f;
			m_maxYRotation = 0.f;
			m_horisontalOffset = 0.f;
			m_verticalOffset = 0.f;
			m_verticalOffsetScaleFactor = 0.f;
			m_verticalOffsetMaxOffset = 1000.f;
			m_showMedicHealthThreshold = 0.3f;
			m_showEngineerArmorThreshold = 0.3f;
			m_showSupportAmmoThreshold = 0.3f;
			m_maxTagUpdatesPerFrame = -1;
			m_snapIcons = false;
			m_circularSnap = true;
			m_onlyShowSnapped = false;
		};

		float m_iconSize; // 0x30 (48)
		float m_snapSafeZone; // 0x34 (52)
		float m_snapCenterYOffset; // 0x38 (56)
		float m_shrinkSnapAnimationTime; // 0x3C (60)
		float m_trackerHudRadiusX; // 0x40 (64)
		float m_trackerHudRadiusY; // 0x44 (68)
		float m_maxLookAtThreshold; // 0x48 (72)
		float m_minLookAtThreshold; // 0x4C (76)
		float m_minLookAtThresholdDistance; // 0x50 (80)
		float m_drawDistance; // 0x54 (84)
		float m_fadeDistance; // 0x58 (88)
		float m_fadeEndDistance; // 0x5C (92)
		float m_minimumDrawDistance; // 0x60 (96)
		float m_minimumFadeDistance; // 0x64 (100)
		float m_maxFarFade; // 0x68 (104)
		float m_maxCloseFade; // 0x6C (108)
		float m_showLabelRange; // 0x70 (112)
		float m_teamRadioDistance; // 0x74 (116)
		float m_scaleDistance; // 0x78 (120)
		float m_maxScaleMod; // 0x7C (124)
		float m_maxXRotation; // 0x80 (128)
		float m_maxYRotation; // 0x84 (132)
		float m_horisontalOffset; // 0x88 (136)
		float m_verticalOffset; // 0x8C (140)
		Vec2 m_pixelOffset; // 0x90 (144)
		float m_verticalOffsetScaleFactor; // 0x98 (152)
		float m_verticalOffsetMaxOffset; // 0x9C (156)
		float m_showMedicHealthThreshold; // 0xA0 (160)
		float m_showEngineerArmorThreshold; // 0xA4 (164)
		float m_showSupportAmmoThreshold; // 0xA8 (168)
		s32 m_maxTagUpdatesPerFrame; // 0xAC (172)
		bool m_snapIcons; // 0xB0 (176)
		bool m_circularSnap; // 0xB1 (177)
		bool m_onlyShowSnapped; // 0xB2 (178)
	}; // 0xB8 (184)
}

