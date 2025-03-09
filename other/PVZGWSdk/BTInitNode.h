///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BTNodeDataWithChildren.h>

namespace fb {
	class BTInitNode : public BTNodeDataWithChildren {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BTInitNode"); }
		virtual ~BTInitNode() override {}
		BTInitNode() {
			m_nodeType = ENodeType::ENodeType_Init;
		};

	}; // 0x20 (32)
}

