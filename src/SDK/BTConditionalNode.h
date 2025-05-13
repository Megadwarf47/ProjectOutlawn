///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BTNodeDataWithChildren.h>
#include <fb/CtrRef.h>

namespace fb {
	class BTEvalFunc;
}

namespace fb {
	class BTConditionalNode : public BTNodeDataWithChildren {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BTConditionalNode"); }
		virtual ~BTConditionalNode() override {}
		BTConditionalNode() {
		};

		CtrRef<BTEvalFunc> m_eval; // 0x20 (32)
	}; // 0x28 (40)
}

