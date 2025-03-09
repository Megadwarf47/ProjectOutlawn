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
	class HighValueTargetActionData : public CommanderActionBaseData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("HighValueTargetActionData"); }
		virtual ~HighValueTargetActionData() override {}
		HighValueTargetActionData() {

			m_actionType = CommanderActionType::CommanderActionType_HighValueTarget;
		};

		CtrRef<PrefabBlueprint> m_hvtPrefabBlueprint; // 0x30 (48)
	}; // 0x38 (56)
}

