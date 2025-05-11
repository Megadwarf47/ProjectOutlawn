///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/SpawnReferenceObjectData.h>

namespace fb {
	class CharacterSpawnTemplateData;
}

namespace fb {
	class CharacterSpawnReferenceObjectData : public SpawnReferenceObjectData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CharacterSpawnReferenceObjectData"); }
		virtual ~CharacterSpawnReferenceObjectData() override {}
		CharacterSpawnReferenceObjectData() {
			m_vehicleEntryIndex = 0;
			m_humanTargetPreference = -1.f;
			m_menuShowOrder = 0;
			m_allowFallbackOnNextAvailabeVehicleEntry = false;
			m_spawnVisible = true;
			m_isTarget = true;
			m_affectMinimapPosition = true;
			m_showAsLabelOnly = false;
			m_showInMenu = true;

			m_tryToSpawnOutOfSight = true;
		};

		u32 m_vehicleEntryIndex; // 0x170 (368)
		CtrRef<CharacterSpawnTemplateData> m_template; // 0x178 (376)
		float m_humanTargetPreference; // 0x180 (384)
		s32 m_menuShowOrder; // 0x184 (388)
		bool m_allowFallbackOnNextAvailabeVehicleEntry; // 0x188 (392)
		bool m_spawnVisible; // 0x189 (393)
		bool m_isTarget; // 0x18A (394)
		bool m_affectMinimapPosition; // 0x18B (395)
		bool m_showAsLabelOnly; // 0x18C (396)
		bool m_showInMenu; // 0x18D (397)
	}; // 0x190 (400)
}

