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
	class SupplyDropActionData : public CommanderActionBaseData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SupplyDropActionData"); }
		virtual ~SupplyDropActionData() override {}
		SupplyDropActionData() {
			m_crateTimeToLive = 300.f;

			m_actionType = CommanderActionType::CommanderActionType_SupplyDrop;
		};

		CtrRef<PrefabBlueprint> m_cratePrefabBlueprint; // 0x30 (48)
		float m_crateTimeToLive; // 0x38 (56)
	}; // 0x40 (64)
}

