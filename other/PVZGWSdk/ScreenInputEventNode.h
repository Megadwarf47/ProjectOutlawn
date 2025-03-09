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
	class ScreenInputEventNode : public UINodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ScreenInputEventNode"); }
		virtual ~ScreenInputEventNode() override {}
		ScreenInputEventNode() {
		};

		CtrRef<UINodePort> m_in; // 0x28 (40)
	}; // 0x30 (48)
}

