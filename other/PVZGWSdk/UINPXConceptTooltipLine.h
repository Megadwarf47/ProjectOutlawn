///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/InputConceptIdentifiers.h>
#include <fb/String.h>
#include <fb/UIInputActionAxisDisplay.h>
#include <fb/UINPXLine.h>

namespace fb {
	class UINPXConceptTooltipLine : public UINPXLine {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UINPXConceptTooltipLine"); }
		virtual ~UINPXConceptTooltipLine() override {}
		UINPXConceptTooltipLine() {
			m_conceptIdentifier = InputConceptIdentifiers::ConceptMoveFB;
			m_axis = UIInputActionAxisDisplay::UIInputActionAxisDisplay_Positive;
		};

		String m_actionMapsId; // 0x10 (16)
		InputConceptIdentifiers m_conceptIdentifier; // 0x18 (24)
		UIInputActionAxisDisplay m_axis; // 0x1C (28)
		String m_description; // 0x20 (32)
	}; // 0x28 (40)
}

