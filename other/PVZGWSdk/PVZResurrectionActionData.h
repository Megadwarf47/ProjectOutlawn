///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/PVZCommanderActionBaseData.h>

namespace fb {
	class PrefabBlueprint;
}

namespace fb {
	class PVZResurrectionActionData : public PVZCommanderActionBaseData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PVZResurrectionActionData"); }
		virtual ~PVZResurrectionActionData() override {}
		PVZResurrectionActionData() {

			m_actionType = PVZCommanderActionType::PVZCommanderActionType_Resurrection;
		};

		CtrRef<PrefabBlueprint> m_cratePrefabBlueprint; // 0x30 (48)
	}; // 0x38 (56)
}

