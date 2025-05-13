///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/InputConceptIdentifiers.h>
#include <fb/Types.h>

namespace fb {
	struct UIInputConceptFilterData {
		UIInputConceptFilterData() {
			m_first = InputConceptIdentifiers::ConceptMoveFB;
			m_last = InputConceptIdentifiers::ConceptMoveFB;
			m_includeThisRange = false;
		};

		InputConceptIdentifiers m_first; // 0x0 (0)
		InputConceptIdentifiers m_last; // 0x4 (4)
		bool m_includeThisRange; // 0x8 (8)
	}; // 0xC (12)
}

