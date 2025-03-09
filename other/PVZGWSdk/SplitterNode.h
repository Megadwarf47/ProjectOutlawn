///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/RefArray.h>
#include <fb/UINodeData.h>

namespace fb {
	class UINodePort;
}

namespace fb {
	class SplitterNode : public UINodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SplitterNode"); }
		virtual ~SplitterNode() override {}
		SplitterNode() {
		};

		CtrRef<UINodePort> m_in; // 0x28 (40)
		RefArray<UINodePort> m_outputs; // 0x30 (48)
	}; // 0x38 (56)
}

