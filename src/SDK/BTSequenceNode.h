///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BTNodeDataWithChildren.h>

namespace fb {
	class BTSequenceNode : public BTNodeDataWithChildren {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BTSequenceNode"); }
		virtual ~BTSequenceNode() override {}
		BTSequenceNode() {
			m_nodeType = ENodeType::ENodeType_Sequence;
		};

	}; // 0x20 (32)
}

