///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/InputActionMappingData.h>
#include <fb/InputConceptIdentifiers.h>

namespace fb {
	class EntryInputActionMappingData : public InputActionMappingData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EntryInputActionMappingData"); }
		virtual ~EntryInputActionMappingData() override {}
		EntryInputActionMappingData() {
			m_actionIdentifier = 899534898;
			m_conceptIdentifier = InputConceptIdentifiers::ConceptUndefined;
		};

		s32 m_actionIdentifier; // 0x10 (16)
		InputConceptIdentifiers m_conceptIdentifier; // 0x14 (20)
	}; // 0x18 (24)
}

