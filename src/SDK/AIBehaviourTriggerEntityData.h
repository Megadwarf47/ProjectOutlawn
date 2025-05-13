///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AreaTriggerEntityData.h>
#include <fb/CtrRef.h>
#include <fb/EActorRole.h>

namespace fb {
	class BehaviourTreeData;
}

namespace fb {
	class AIBehaviourTriggerEntityData : public AreaTriggerEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AIBehaviourTriggerEntityData"); }
		virtual ~AIBehaviourTriggerEntityData() override {}
		AIBehaviourTriggerEntityData() {
			m_roleFilter = EActorRole::EActor_Zombie;
			m_useFilterRole = false;
		};

		CtrRef<BehaviourTreeData> m_behaviour; // 0xD0 (208)
		EActorRole m_roleFilter; // 0xD8 (216)
		bool m_useFilterRole; // 0xDC (220)
	}; // 0xE0 (224)
}

