///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/CtrRef.h>

namespace fb {
	class BehaviourTreeData;
}

namespace fb {
	class AIActorData : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AIActorData"); }
		virtual ~AIActorData() override {}
		AIActorData() {
			m_isPausedWhenActivated = true;
		};

		CtrRef<BehaviourTreeData> m_behaviourTree; // 0x18 (24)
		bool m_isPausedWhenActivated; // 0x20 (32)
	}; // 0x28 (40)
}

