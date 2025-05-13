///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/InputConceptIdentifiers.h>
#include <fb/RefArray.h>
#include <fb/String.h>

namespace fb {
	class InputActionData;
}

namespace fb {
	class InputActionsData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("InputActionsData"); }
		virtual ~InputActionsData() override {}
		InputActionsData() {
			m_conceptIdentifier = InputConceptIdentifiers::ConceptUndefined;
			m_copyKeyBindingFrom = InputConceptIdentifiers::ConceptUndefined;
			m_hideInKeyBindings = false;
		};

		String m_nameSid; // 0x10 (16)
		InputConceptIdentifiers m_conceptIdentifier; // 0x18 (24)
		InputConceptIdentifiers m_copyKeyBindingFrom; // 0x1C (28)
		RefArray<InputActionData> m_inputActions; // 0x20 (32)
		bool m_hideInKeyBindings; // 0x28 (40)
	}; // 0x30 (48)
}

