///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/InputConceptIdentifiers.h>

namespace fb {
	class EditableAction : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EditableAction"); }
		virtual ~EditableAction() override {}
		EditableAction() {
			m_concept = InputConceptIdentifiers::ConceptMoveFB;
		};

		InputConceptIdentifiers m_concept; // 0x10 (16)
	}; // 0x18 (24)
}

