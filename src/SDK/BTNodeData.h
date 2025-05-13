///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/ENodeType.h>

namespace fb {
	class BTNodeData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BTNodeData"); }
		virtual ~BTNodeData() override {}
		BTNodeData() {
			m_nodeType = ENodeType::ENodeType_Base;
			m_enabled = true;
		};

		ENodeType m_nodeType; // 0x10 (16)
		bool m_enabled; // 0x14 (20)
	}; // 0x18 (24)
}

