///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/StateNode.h>
#include <fb/String.h>
#include <fb/UIPopupButton.h>

namespace fb {
	class DialogNode : public StateNode {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DialogNode"); }
		virtual ~DialogNode() override {}
		DialogNode() {
		};

		String m_dialogTitle; // 0x68 (104)
		String m_dialogText; // 0x70 (112)
		Array<UIPopupButton> m_buttons; // 0x78 (120)
	}; // 0x80 (128)
}

