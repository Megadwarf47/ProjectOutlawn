///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CommanderActionBaseData.h>
#include <fb/CtrRef.h>

namespace fb {
	class PrefabBlueprint;
}

namespace fb {
	class SectorJamActionData : public CommanderActionBaseData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SectorJamActionData"); }
		virtual ~SectorJamActionData() override {}
		SectorJamActionData() {
			m_jamRadius = 50.f;
			m_damagePulseFrequency = 1.f;
			m_empDamagePerSecond = 1000.f;

			m_actionType = CommanderActionType::CommanderActionType_SectorJam;
		};

		float m_jamRadius; // 0x30 (48)
		float m_damagePulseFrequency; // 0x34 (52)
		float m_empDamagePerSecond; // 0x38 (56)
		CtrRef<PrefabBlueprint> m_empDronePrefabBlueprint; // 0x40 (64)
	}; // 0x48 (72)
}

