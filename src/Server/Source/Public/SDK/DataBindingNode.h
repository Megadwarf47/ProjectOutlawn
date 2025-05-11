///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/UINodeData.h>
#include <fb/UIWidgetEventID.h>

namespace fb {
	class UIDataBinding;
	class UINodePort;
}

namespace fb {
	class DataBindingNode : public UINodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DataBindingNode"); }
		virtual ~DataBindingNode() override {}
		DataBindingNode() {
			m_widgetEvent = UIWidgetEventID::UIWidgetEventID_None;
		};

		CtrRef<UINodePort> m_in; // 0x28 (40)
		CtrRef<UINodePort> m_out; // 0x30 (48)
		CtrRef<UIDataBinding> m_dataBinding; // 0x38 (56)
		UIWidgetEventID m_widgetEvent; // 0x40 (64)
	}; // 0x48 (72)
}

