///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AreaValueTeam.h>
#include <fb/Array.h>
#include <fb/CapturableType.h>
#include <fb/CapturePointUIType.h>
#include <fb/CtrRef.h>
#include <fb/RefArray.h>
#include <fb/SpatialEntityData.h>
#include <fb/String.h>
#include <fb/TeamId.h>

namespace fb {
	class ObjectBlueprint;
	class UIWorldIconBehavior;
}

namespace fb {
	class CapturePointEntityData : public SpatialEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CapturePointEntityData"); }
		virtual ~CapturePointEntityData() override {}
		virtual bool getIsNetworkedResource() const override { return true; }
		CapturePointEntityData() {
			m_initialOwnerTeam = TeamId::TeamNeutral;
			m_captureRadius = 0.f;
			m_areaValue = 100;
			m_timeToGetControl = 10;
			m_timeToLoseControl = 10;
			m_returnMultiplier = 1.f;
			m_onlyTakeableByTeam = 0;
			m_minNrToTakeControl = 1;
			m_maxCaptureMultiplier = 4;
			m_addedMultiplierPerPlayer = 1.f;
			m_enemyTicketLossWhenCaptured = 0;
			m_spawnMenuListOrdinal = 0;
			m_capturableType = CapturableType::CTDefault;
			m_flagIndex = 0;
			m_showRadius = 0.f;
			m_hideRadius = 0.f;
			m_uiType = CapturePointUIType::CapturePointUIType_Default;
			m_verticalOffset = 0.f;
			m_enabled = true;
			m_isCapturedInUpperSphere = false;
			m_useAreaValuesPerTeam = false;
			m_intruderWarning = true;
			m_disableIfEnemyInside = false;
			m_disableWhenLosingControl = false;
			m_loseControlWhenNotClose = false;
			m_enabledByDefault = true;
			m_useSpawners = true;
			m_isVisible = false;
			m_showOnMinimap = false;
			m_drawBaseAsForwardBase = false;
			m_hoistFlag = true;
			m_startAtBottom = false;
			m_removeWhenCaptured = false;
			m_seesawCapturing = false;
			m_forceSpawnAtVehicle = false;
			m_useMirroredVehicleLayout = false;
			m_ctfBase = false;
		};

		RefArray<ObjectBlueprint> m_flagTemplates; // 0x60 (96)
		CtrRef<ObjectBlueprint> m_capturePoint; // 0x68 (104)
		TeamId m_initialOwnerTeam; // 0x70 (112)
		float m_captureRadius; // 0x74 (116)
		s32 m_areaValue; // 0x78 (120)
		Array<AreaValueTeam> m_areaValues; // 0x80 (128)
		s32 m_timeToGetControl; // 0x88 (136)
		s32 m_timeToLoseControl; // 0x8C (140)
		float m_returnMultiplier; // 0x90 (144)
		s32 m_onlyTakeableByTeam; // 0x94 (148)
		s32 m_minNrToTakeControl; // 0x98 (152)
		s32 m_maxCaptureMultiplier; // 0x9C (156)
		float m_addedMultiplierPerPlayer; // 0xA0 (160)
		s32 m_enemyTicketLossWhenCaptured; // 0xA4 (164)
		u32 m_spawnMenuListOrdinal; // 0xA8 (168)
		String m_intruderWarningSID; // 0xB0 (176)
		CapturableType m_capturableType; // 0xB8 (184)
		s32 m_flagIndex; // 0xBC (188)
		float m_showRadius; // 0xC0 (192)
		float m_hideRadius; // 0xC4 (196)
		CapturePointUIType m_uiType; // 0xC8 (200)
		float m_verticalOffset; // 0xCC (204)
		CtrRef<UIWorldIconBehavior> m_iconBehavior; // 0xD0 (208)
		String m_locationNameSid; // 0xD8 (216)
		String m_locationTextSid; // 0xE0 (224)
		CtrRef<ObjectBlueprint> m_ctfSoldierCarriedFlag; // 0xE8 (232)
		CtrRef<ObjectBlueprint> m_ctfVehicleCarriedFlag; // 0xF0 (240)
		bool m_enabled; // 0xF8 (248)
		bool m_isCapturedInUpperSphere; // 0xF9 (249)
		bool m_useAreaValuesPerTeam; // 0xFA (250)
		bool m_intruderWarning; // 0xFB (251)
		bool m_disableIfEnemyInside; // 0xFC (252)
		bool m_disableWhenLosingControl; // 0xFD (253)
		bool m_loseControlWhenNotClose; // 0xFE (254)
		bool m_enabledByDefault; // 0xFF (255)
		bool m_useSpawners; // 0x100 (256)
		bool m_isVisible; // 0x101 (257)
		bool m_showOnMinimap; // 0x102 (258)
		bool m_drawBaseAsForwardBase; // 0x103 (259)
		bool m_hoistFlag; // 0x104 (260)
		bool m_startAtBottom; // 0x105 (261)
		bool m_removeWhenCaptured; // 0x106 (262)
		bool m_seesawCapturing; // 0x107 (263)
		bool m_forceSpawnAtVehicle; // 0x108 (264)
		bool m_useMirroredVehicleLayout; // 0x109 (265)
		bool m_ctfBase; // 0x10A (266)
	}; // 0x110 (272)
}

