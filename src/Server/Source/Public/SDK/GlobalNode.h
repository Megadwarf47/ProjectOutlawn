///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/RefArray.h>
#include <fb/UINodeData.h>

namespace fb {
	class UINodePort;
}

namespace fb {
	class GlobalNode : public UINodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("GlobalNode"); }
		virtual ~GlobalNode() override {}
		GlobalNode() {
		};

		RefArray<UINodePort> m_outputs; // 0x28 (40)
	}; // 0x30 (48)
}

