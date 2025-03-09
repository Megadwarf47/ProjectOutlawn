///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BTConditionalNode.h>

namespace fb {
	class BTIfNode : public BTConditionalNode {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BTIfNode"); }
		virtual ~BTIfNode() override {}
		BTIfNode() {
			m_nodeType = ENodeType::ENodeType_If;
		};

	}; // 0x28 (40)
}

