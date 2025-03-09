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
	class BTTaskFunc;
}

namespace fb {
	class BTTaskNode : public BTNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BTTaskNode"); }
		virtual ~BTTaskNode() override {}
		BTTaskNode() {

			m_nodeType = ENodeType::ENodeType_Task;
		};

		CtrRef<BTTaskFunc> m_task; // 0x18 (24)
	}; // 0x20 (32)
}

