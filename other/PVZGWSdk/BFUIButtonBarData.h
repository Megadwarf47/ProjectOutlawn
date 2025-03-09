///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/String.h>
#include <fb/UIInputAction.h>

namespace fb {
	class BFUIButtonBarData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BFUIButtonBarData"); }
		virtual ~BFUIButtonBarData() override {}
		BFUIButtonBarData() {
			m_inputAction = UIInputAction::UIInputAction_NavigateUp;
			m_sortOrder = 0;
		};

		UIInputAction m_inputAction; // 0x10 (16)
		String m_sid; // 0x18 (24)
		s32 m_sortOrder; // 0x20 (32)
		String m_enabledProperty; // 0x28 (40)
	}; // 0x30 (48)
}

