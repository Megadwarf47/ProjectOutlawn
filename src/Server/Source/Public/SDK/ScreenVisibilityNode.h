///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/UINodeData.h>

namespace fb {
	class UINodePort;
}

namespace fb {
	class ScreenVisibilityNode : public UINodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ScreenVisibilityNode"); }
		virtual ~ScreenVisibilityNode() override {}
		ScreenVisibilityNode() {
			m_screenCount = 1;
			m_skipCount = 0;
			m_visible = true;
		};

		CtrRef<UINodePort> m_in; // 0x28 (40)
		CtrRef<UINodePort> m_out; // 0x30 (48)
		u32 m_screenCount; // 0x38 (56)
		u32 m_skipCount; // 0x3C (60)
		bool m_visible; // 0x40 (64)
	}; // 0x48 (72)
}

