///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/EditableAction.h>
#include <fb/String.h>

namespace fb {
	class OneOptionAxisEditableAction : public EditableAction {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("OneOptionAxisEditableAction"); }
		virtual ~OneOptionAxisEditableAction() override {}
		OneOptionAxisEditableAction() {
			m_invert = false;
		};

		String m_header; // 0x18 (24)
		bool m_invert; // 0x20 (32)
	}; // 0x28 (40)
}

