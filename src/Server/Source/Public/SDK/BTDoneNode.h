///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BTNodeData.h>

namespace fb {
	class BTDoneNode : public BTNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BTDoneNode"); }
		virtual ~BTDoneNode() override {}
		BTDoneNode() {
			m_returnTrue = true;

			m_nodeType = ENodeType::ENodeType_Done;
		};

		bool m_returnTrue; // 0x18 (24)
	}; // 0x20 (32)
}

