///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BTConditionalNode.h>

namespace fb {
	class BTWhileNode : public BTConditionalNode {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BTWhileNode"); }
		virtual ~BTWhileNode() override {}
		BTWhileNode() {
			m_returnTrue = true;

			m_nodeType = ENodeType::ENodeType_While;
		};

		bool m_returnTrue; // 0x28 (40)
	}; // 0x30 (48)
}

