///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/EntryClass.h>
#include <fb/EntryComponentHudData.h>
#include <fb/EntrySpottingSettings.h>
#include <fb/GameComponentData.h>
#include <fb/PoseConstraintsData.h>
#include <fb/RefArray.h>
#include <fb/Vec3.h>

namespace fb {
	class EntryComponentSoundData;
	class EntryInputActionMapsData;
	class GameAIEntryData;
	class InputActionMappingsData;
	class InputCurveData;
}

namespace fb {
	class EntryComponentData : public GameComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EntryComponentData"); }
		virtual ~EntryComponentData() override {}
		EntryComponentData() {
			m_entryClass = EntryClass::ecPrimary;
			m_entryOrderNumber = 0;
			m_enterImpulse = 0.f;
			m_entryRadius = 1.f;
			m_soldierTransitionInvisbleTime = 0.075f;
			m_numberOfStances = 1;
			m_entrySpottingSettings = EntrySpottingSettings::ESSDefault;
			m_triggerEventOnKey = 899534898;
			m_forbiddenForHuman = false;
			m_isAllowedToExitInAir = true;
			m_isShielded = false;
			m_lockSoldierAimingToEntry = true;
			m_showSoldierInEntry = true;
			m_show1pSoldierInEntry = false;
			m_stancesEnabled = false;
			m_showSoldierWeaponInEntry = false;
			m_show1pSoldierInEntryForPlayerOnly = false;
			m_show3pSoldierWeaponInEntry = true;
			m_showSoldierGearInEntry = false;
			m_allowRagdollFromEntry = true;
		};

		Vec3 m_soldierOffset; // 0x70 (112)
		EntryClass m_entryClass; // 0x80 (128)
		CtrRef<GameAIEntryData> m_aiData; // 0x88 (136)
		CtrRef<EntryInputActionMapsData> m_inputConceptDefinition; // 0x90 (144)
		CtrRef<InputActionMappingsData> m_inputMapping; // 0x98 (152)
		RefArray<InputCurveData> m_inputCurves; // 0xA0 (160)
		EntryComponentHudData m_hudData; // 0xA8 (168)
		s32 m_entryOrderNumber; // 0xB4 (180)
		float m_enterImpulse; // 0xB8 (184)
		float m_entryRadius; // 0xBC (188)
		float m_soldierTransitionInvisbleTime; // 0xC0 (192)
		s32 m_numberOfStances; // 0xC4 (196)
		EntrySpottingSettings m_entrySpottingSettings; // 0xC8 (200)
		CtrRef<EntryComponentSoundData> m_entryComponentSound; // 0xD0 (208)
		s32 m_triggerEventOnKey; // 0xD8 (216)
		bool m_forbiddenForHuman; // 0xDC (220)
		bool m_isAllowedToExitInAir; // 0xDD (221)
		bool m_isShielded; // 0xDE (222)
		bool m_lockSoldierAimingToEntry; // 0xDF (223)
		bool m_showSoldierInEntry; // 0xE0 (224)
		bool m_show1pSoldierInEntry; // 0xE1 (225)
		bool m_stancesEnabled; // 0xE2 (226)
		bool m_showSoldierWeaponInEntry; // 0xE3 (227)
		bool m_show1pSoldierInEntryForPlayerOnly; // 0xE4 (228)
		bool m_show3pSoldierWeaponInEntry; // 0xE5 (229)
		bool m_showSoldierGearInEntry; // 0xE6 (230)
		PoseConstraintsData m_poseConstraints; // 0xE7 (231)
		bool m_allowRagdollFromEntry; // 0xEA (234)
	}; // 0xF0 (240)
}

