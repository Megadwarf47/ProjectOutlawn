///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/String.h>
#include <fb/Types.h>
#include <fb/UIElementColor.h>

namespace fb {
	class UIElementFontStyle;
}

namespace fb {
	struct UILockingConfiguration {
		UILockingConfiguration() {
			m_textScale = 1.f;
			m_textOffset = 0.f;
			m_distanceScale = 60.f;
			m_distanceMaxScaleMod = 0.8f;
			m_lockingQuadSpacingStart = 0;
			m_lockedQuadSpacing = 0;
			m_lockTextOffset = 64;
			m_distanceTextOffset = 64;
			m_lockingBlinkRate = 0.175f;
			m_pulseTargetChevronSpacing = 10;
			m_pulseDuration = 1.f;
			m_unavalibleAlpha = 0.f;
		};

		UIElementColor m_textColor; // 0x0 (0)
		CtrRef<UIElementFontStyle> m_font; // 0x20 (32)
		float m_textScale; // 0x28 (40)
		float m_textOffset; // 0x2C (44)
		float m_distanceScale; // 0x30 (48)
		float m_distanceMaxScaleMod; // 0x34 (52)
		String m_defaultTargetIcon; // 0x38 (56)
		String m_defaultChevronIcon; // 0x40 (64)
		s32 m_lockingQuadSpacingStart; // 0x48 (72)
		s32 m_lockedQuadSpacing; // 0x4C (76)
		s32 m_lockTextOffset; // 0x50 (80)
		String m_lockedText; // 0x58 (88)
		String m_lockedGuidingText; // 0x60 (96)
		String m_notLockedGuidingText; // 0x68 (104)
		s32 m_distanceTextOffset; // 0x70 (112)
		float m_lockingBlinkRate; // 0x74 (116)
		s32 m_pulseTargetChevronSpacing; // 0x78 (120)
		float m_pulseDuration; // 0x7C (124)
		float m_unavalibleAlpha; // 0x80 (128)
	}; // 0x90 (144)
}

