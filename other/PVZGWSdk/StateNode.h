///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/LocalPlayerViewId.h>
#include <fb/RefArray.h>
#include <fb/UINodeData.h>

namespace fb {
	class UINodePort;
}

namespace fb {
	class StateNode : public UINodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("StateNode"); }
		virtual ~StateNode() override {}
		StateNode() {
			m_viewId = LocalPlayerViewId::LocalPlayerViewId_RootView;
			m_renderToTexture = false;
		};

		Guid m_screenPartitionGuid; // 0x28 (40)
		CtrRef<UINodePort> m_in; // 0x38 (56)
		CtrRef<UINodePort> m_show; // 0x40 (64)
		CtrRef<UINodePort> m_hide; // 0x48 (72)
		RefArray<UINodePort> m_inputs; // 0x50 (80)
		RefArray<UINodePort> m_outputs; // 0x58 (88)
		LocalPlayerViewId m_viewId; // 0x60 (96)
		bool m_renderToTexture; // 0x64 (100)
	}; // 0x68 (104)
}

