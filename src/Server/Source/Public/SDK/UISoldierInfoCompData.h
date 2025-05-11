///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/String.h>
#include <fb/UIComponentData.h>

namespace fb {
	class UISoldierInfoCompData : public UIComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UISoldierInfoCompData"); }
		virtual ~UISoldierInfoCompData() override {}
		UISoldierInfoCompData() {
		};

		String m_skillStatCode; // 0x30 (48)
	}; // 0x38 (56)
}

