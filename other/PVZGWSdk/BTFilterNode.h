///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BTConditionalNode.h>

namespace fb {
	class BTFilterNode : public BTConditionalNode {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BTFilterNode"); }
		virtual ~BTFilterNode() override {}
		BTFilterNode() {
			m_nodeType = ENodeType::ENodeType_Filter;
		};

	}; // 0x28 (40)
}

