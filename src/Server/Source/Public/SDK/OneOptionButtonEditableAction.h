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
	class OneOptionButtonEditableAction : public EditableAction {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("OneOptionButtonEditableAction"); }
		virtual ~OneOptionButtonEditableAction() override {}
		OneOptionButtonEditableAction() {
		};

		String m_header; // 0x18 (24)
	}; // 0x20 (32)
}

