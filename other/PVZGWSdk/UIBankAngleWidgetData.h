///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BFUIWidgetEntityData.h>
#include <fb/String.h>

namespace fb {
	class UIBankAngleWidgetData : public BFUIWidgetEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIBankAngleWidgetData"); }
		virtual ~UIBankAngleWidgetData() override {}
		UIBankAngleWidgetData() {
			m_minAngle = -45;
			m_maxAngle = 45;
			m_markerOffsetY = 0;
			m_linesOffsetY = 0;
			m_mirrored = false;
		};

		s32 m_minAngle; // 0x68 (104)
		s32 m_maxAngle; // 0x6C (108)
		String m_markerTexture; // 0x70 (112)
		s32 m_markerOffsetY; // 0x78 (120)
		s32 m_linesOffsetY; // 0x7C (124)
		String m_linesTexture; // 0x80 (128)
		bool m_mirrored; // 0x88 (136)
	}; // 0x90 (144)
}

