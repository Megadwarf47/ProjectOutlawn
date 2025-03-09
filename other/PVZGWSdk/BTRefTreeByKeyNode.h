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
	class BTRefTreeKey;
}

namespace fb {
	class BTRefTreeByKeyNode : public BTNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BTRefTreeByKeyNode"); }
		virtual ~BTRefTreeByKeyNode() override {}
		BTRefTreeByKeyNode() {

			m_nodeType = ENodeType::ENodeType_RefByKey;
		};

		CtrRef<BTRefTreeKey> m_btRefTreeKey; // 0x18 (24)
	}; // 0x20 (32)
}

