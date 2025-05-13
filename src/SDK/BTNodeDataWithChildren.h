///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BTNodeData.h>
#include <fb/RefArray.h>

namespace fb {
	class BTNodeData;
}

namespace fb {
	class BTNodeDataWithChildren : public BTNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BTNodeDataWithChildren"); }
		virtual ~BTNodeDataWithChildren() override {}
		BTNodeDataWithChildren() {

			m_nodeType = ENodeType::ENodeType_Parent;
		};

		RefArray<BTNodeData> m_nodes; // 0x18 (24)
	}; // 0x20 (32)
}

