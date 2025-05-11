///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BTNodeDataWithChildren.h>

namespace fb {
	class BTWrapperNode : public BTNodeDataWithChildren {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BTWrapperNode"); }
		virtual ~BTWrapperNode() override {}
		BTWrapperNode() {
			m_returnTrue = true;

			m_nodeType = ENodeType::ENodeType_Wrapper;
		};

		bool m_returnTrue; // 0x20 (32)
	}; // 0x28 (40)
}

