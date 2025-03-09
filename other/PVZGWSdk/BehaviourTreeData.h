///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainerPolicyAsset.h>

namespace fb {
	class BTNodeData;
}

namespace fb {
	class BehaviourTreeData : public DataContainerPolicyAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BehaviourTreeData"); }
		virtual ~BehaviourTreeData() override {}
		BehaviourTreeData() {
		};

		CtrRef<BTNodeData> m_root; // 0x18 (24)
	}; // 0x20 (32)
}

