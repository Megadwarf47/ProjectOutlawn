///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/String.h>
#include <fb/UIInputActionAxisDisplay.h>
#include <fb/UINPXLine.h>

namespace fb {
	class UINPXTooltipLine : public UINPXLine {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UINPXTooltipLine"); }
		virtual ~UINPXTooltipLine() override {}
		UINPXTooltipLine() {
			m_inputAction = 0;
			m_axis = UIInputActionAxisDisplay::UIInputActionAxisDisplay_Positive;
		};

		s32 m_inputAction; // 0x10 (16)
		UIInputActionAxisDisplay m_axis; // 0x14 (20)
		String m_description; // 0x18 (24)
	}; // 0x20 (32)
}

