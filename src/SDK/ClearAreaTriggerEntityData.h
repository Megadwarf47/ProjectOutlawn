///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/TeamId.h>
#include <fb/TriggerEntityData.h>

namespace fb {
	class ClearAreaTriggerEntityData : public TriggerEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ClearAreaTriggerEntityData"); }
		virtual ~ClearAreaTriggerEntityData() override {}
		virtual Realm getRealm() const override { return Realm_ClientAndServer; }
		ClearAreaTriggerEntityData() {
			m_teamOfImmortalSoldiers = TeamId::Team1;
			m_removeSoldiers = true;
			m_removeVehicles = true;
			m_removeBangers = true;
			m_removeEffects = true;
			m_removeMeshProxies = true;
			m_removeStaticModels = true;
			m_removeDebrisClusters = true;
			m_excludeImmortalSoldiersInTeam = true;
		};

		TeamId m_teamOfImmortalSoldiers; // 0x70 (112)
		bool m_removeSoldiers; // 0x74 (116)
		bool m_removeVehicles; // 0x75 (117)
		bool m_removeBangers; // 0x76 (118)
		bool m_removeEffects; // 0x77 (119)
		bool m_removeMeshProxies; // 0x78 (120)
		bool m_removeStaticModels; // 0x79 (121)
		bool m_removeDebrisClusters; // 0x7A (122)
		bool m_excludeImmortalSoldiersInTeam; // 0x7B (123)
	}; // 0x80 (128)
}

