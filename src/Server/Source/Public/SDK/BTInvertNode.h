///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BTNodeDataWithChildren.h>

namespace fb {
	class BTInvertNode : public BTNodeDataWithChildren {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BTInvertNode"); }
		virtual ~BTInvertNode() override {}
		BTInvertNode() {
			m_nodeType = ENodeType::ENodeType_Inverter;
		};

	}; // 0x20 (32)
}

