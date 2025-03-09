///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AIActorData.h>
#include <fb/Array.h>
#include <fb/CtrRef.h>
#include <fb/EActorRole.h>
#include <fb/PointOfInterestInfo.h>
#include <fb/TacticInfo.h>

namespace fb {
	class BehaviourModifierData;
	class TargetEvaluationConstantData;
}

namespace fb {
	class PVZAIActorData : public AIActorData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZAIActorData"); }
		virtual ~PVZAIActorData() override {}
		PVZAIActorData() {
			m_role = EActorRole::EActor_Zombie;
			m_isTurret = false;
			m_isHealer = false;
			m_isPrimaryHealer = false;
		};

		EActorRole m_role; // 0x28 (40)
		CtrRef<TargetEvaluationConstantData> m_targettingSettings; // 0x30 (48)
		CtrRef<BehaviourModifierData> m_behaviourModifiers; // 0x38 (56)
		PointOfInterestInfo m_interest; // 0x40 (64)
		Array<TacticInfo> m_tactics; // 0x60 (96)
		bool m_isTurret; // 0x68 (104)
		bool m_isHealer; // 0x69 (105)
		bool m_isPrimaryHealer; // 0x6A (106)
	}; // 0x70 (112)
}

