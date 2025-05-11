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
	class EarlyWarningActionData : public CommanderActionBaseData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EarlyWarningActionData"); }
		virtual ~EarlyWarningActionData() override {}
		EarlyWarningActionData() {
			m_timeToLive = 30.f;

			m_actionType = CommanderActionType::CommanderActionType_EarlyWarning;
		};

		CtrRef<PrefabBlueprint> m_warningPrefabBlueprint; // 0x30 (48)
		float m_timeToLive; // 0x38 (56)
	}; // 0x40 (64)
}

