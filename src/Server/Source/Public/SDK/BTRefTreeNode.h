///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BTNodeData.h>
#include <fb/CtrRef.h>

namespace fb {
	class BehaviourTreeData;
}

namespace fb {
	class BTRefTreeNode : public BTNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BTRefTreeNode"); }
		virtual ~BTRefTreeNode() override {}
		BTRefTreeNode() {

			m_nodeType = ENodeType::ENodeType_Reference;
		};

		CtrRef<BehaviourTreeData> m_subTree; // 0x18 (24)
	}; // 0x20 (32)
}

