///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/String.h>
#include <fb/UINodeData.h>

namespace fb {
	class UINodePort;
}

namespace fb {
	class MovieNavigationNode : public UINodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MovieNavigationNode"); }
		virtual ~MovieNavigationNode() override {}
		MovieNavigationNode() {
			m_frame = 0;
			m_useLabel = true;
			m_play = true;
		};

		CtrRef<UINodePort> m_in; // 0x28 (40)
		CtrRef<UINodePort> m_out; // 0x30 (48)
		String m_movieClipPath; // 0x38 (56)
		String m_frameLabel; // 0x40 (64)
		u32 m_frame; // 0x48 (72)
		bool m_useLabel; // 0x4C (76)
		bool m_play; // 0x4D (77)
	}; // 0x50 (80)
}

