///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/String.h>
#include <fb/UIInputAction.h>
#include <fb/UIInputActionAxisDisplay.h>
#include <fb/UINPXLine.h>

namespace fb {
	class UINPXMenuTooltipLine : public UINPXLine {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UINPXMenuTooltipLine"); }
		virtual ~UINPXMenuTooltipLine() override {}
		UINPXMenuTooltipLine() {
			m_inputAction = UIInputAction::UIInputAction_NavigateUp;
			m_axis = UIInputActionAxisDisplay::UIInputActionAxisDisplay_Positive;
		};

		UIInputAction m_inputAction; // 0x10 (16)
		UIInputActionAxisDisplay m_axis; // 0x14 (20)
		String m_description; // 0x18 (24)
	}; // 0x20 (32)
}

