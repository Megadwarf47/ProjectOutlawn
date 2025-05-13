///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Types.h>
#include <fb/Vec2.h>
#include <fb/Vec3.h>

namespace fb {
	struct MinimapData {
		MinimapData() {
			m_overlayColor = Vec3(1.f, 1.f, 1.f);
			m_position = Vec2(1145.f, 135.f);
			m_anchorPosHorizontal = 0.f;
			m_anchorPosVertical = 0.f;
			m_size = Vec2(210.f, 210.f);
			m_cameraFov = 25.f;
			m_cameraDistance = 150.f;
			m_cameraLookDistance = 150.f;
			m_overlayAlpha = 1.f;
			m_cameraRotation = 0.f;
			m_innerZoomFactor = 2;
			m_maxZoomLevels = 1;
			m_startZoomLevel = 1;
			m_rotationFromPlayer = true;
			m_positionFromPlayer = true;
			m_centerOnCombatArea = false;
		};

		Vec3 m_overlayColor; // 0x0 (0)
		Vec3 m_cameraPosition; // 0x10 (16)
		Vec2 m_position; // 0x20 (32)
		float m_anchorPosHorizontal; // 0x28 (40)
		float m_anchorPosVertical; // 0x2C (44)
		Vec2 m_size; // 0x30 (48)
		float m_cameraFov; // 0x38 (56)
		float m_cameraDistance; // 0x3C (60)
		float m_cameraLookDistance; // 0x40 (64)
		float m_overlayAlpha; // 0x44 (68)
		float m_cameraRotation; // 0x48 (72)
		s32 m_innerZoomFactor; // 0x4C (76)
		s32 m_maxZoomLevels; // 0x50 (80)
		s32 m_startZoomLevel; // 0x54 (84)
		bool m_rotationFromPlayer; // 0x58 (88)
		bool m_positionFromPlayer; // 0x59 (89)
		bool m_centerOnCombatArea; // 0x5A (90)
	}; // 0x60 (96)
}

