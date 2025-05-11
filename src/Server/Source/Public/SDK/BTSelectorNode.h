///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BTNodeDataWithChildren.h>

namespace fb {
	class BTSelectorNode : public BTNodeDataWithChildren {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BTSelectorNode"); }
		virtual ~BTSelectorNode() override {}
		BTSelectorNode() {
			m_nodeType = ENodeType::ENodeType_Selector;
		};

	}; // 0x20 (32)
}

