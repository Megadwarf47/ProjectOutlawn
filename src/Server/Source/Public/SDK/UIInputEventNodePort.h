///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/UIInputAction.h>
#include <fb/UINodePort.h>

namespace fb {
	class UIInputEventNodePort : public UINodePort {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UIInputEventNodePort"); }
		virtual ~UIInputEventNodePort() override {}
		UIInputEventNodePort() {
			m_inputEventType = UIInputAction::UIInputAction_NavigateUp;

			m_allowManualRemove = true;
		};

		UIInputAction m_inputEventType; // 0x28 (40)
	}; // 0x30 (48)
}

