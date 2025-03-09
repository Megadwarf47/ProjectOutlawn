///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIWidgetEntityData.h>
#include <fb/CtrRef.h>
#include <fb/String.h>

namespace fb {
	class UIElementFontStyle;
}

namespace fb {
	class UIPitchLadderWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIPitchLadderWidgetData"); }
		virtual ~UIPitchLadderWidgetData() override {}
		UIPitchLadderWidgetData() {
			m_width = 250;
			m_lineSpacingDegrees = 5;
			m_lineSpacingPixels = 100;
			m_linesRotationFactor = 0.5f;
			m_offsetYHorizontalZeroAbove = 0;
			m_offsetYHorizontalNegative = 0;
			m_offsetXHorizontalLines = 0;
			m_numbersOffsetXPixels = 10;
			m_numbersOffsetYPixels = 0;
			m_useVelocityVector = true;
			m_virtualHorizon = false;
			m_useLeftSide = true;
			m_useRightSide = true;
			m_multiLine = true;
		};

		CtrRef<UIElementFontStyle> m_fontStyle; // 0x68 (104)
		u32 m_width; // 0x70 (112)
		String m_velocityVectorTexture; // 0x78 (120)
		u32 m_lineSpacingDegrees; // 0x80 (128)
		u32 m_lineSpacingPixels; // 0x84 (132)
		float m_linesRotationFactor; // 0x88 (136)
		String m_sideLexture; // 0x90 (144)
		String m_aboveZeroTexture; // 0x98 (152)
		String m_belowZeroTexture; // 0xA0 (160)
		String m_zeroTexture; // 0xA8 (168)
		s32 m_offsetYHorizontalZeroAbove; // 0xB0 (176)
		s32 m_offsetYHorizontalNegative; // 0xB4 (180)
		s32 m_offsetXHorizontalLines; // 0xB8 (184)
		s32 m_numbersOffsetXPixels; // 0xBC (188)
		s32 m_numbersOffsetYPixels; // 0xC0 (192)
		bool m_useVelocityVector; // 0xC4 (196)
		bool m_virtualHorizon; // 0xC5 (197)
		bool m_useLeftSide; // 0xC6 (198)
		bool m_useRightSide; // 0xC7 (199)
		bool m_multiLine; // 0xC8 (200)
	}; // 0xD0 (208)
}

