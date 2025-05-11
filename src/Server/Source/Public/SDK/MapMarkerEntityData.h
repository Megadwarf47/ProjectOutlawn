///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/LinearTransform.h>
#include <fb/MapMarkerType.h>
#include <fb/SpatialEntityData.h>
#include <fb/String.h>
#include <fb/TeamId.h>
#include <fb/UIHudIcon.h>
#include <fb/Vec3.h>

namespace fb {
	class UIWorldIconBehavior;
}

namespace fb {
	class MapMarkerEntityData : public SpatialEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MapMarkerEntityData"); }
		virtual ~MapMarkerEntityData() override {}
		virtual bool getIsNetworkedResource() const override { return true; }
		MapMarkerEntityData() {
			m_nrOfPassengers = 0;
			m_nrOfEntries = 0;
			m_showRadius = 0.f;
			m_hideRadius = 0.f;
			m_blinkTime = 5.f;
			m_markerType = MapMarkerType::MMTMissionObjective;
			m_visibleForTeam = TeamId::TeamNeutral;
			m_ownerTeam = TeamId::TeamNeutral;
			m_hudIcon = UIHudIcon::UIHudIcon_ObjectiveGeneral;
			m_verticalOffset = 0.f;
			m_focusPointRadius = 80.f;
			m_focusPriority = 0;
			m_progressTime = 80.f;
			m_progress = 0.f;
			m_trackedPlayersInRange = 0;
			m_trackingPlayerRange = 10.f;
			m_instantFlagReturnRadius = 0.f;
			m_progressPlayerSpeedUpPercentage = 10.f;
			m_progressTime1Player = 0.f;
			m_progressMinTime = 15.f;
			m_isVisible = false;
			m_showAirTargetBox = true;
			m_isFocusPoint = true;
			m_snap = true;
			m_onlyShowSnapped = false;
			m_useMarkerTransform = false;
			m_showHighlight = false;
			m_serverControlledPosition = false;
			m_positionStatic = false;
			m_enabled = false;
			m_showDistanceInText = false;
			m_showProgress = false;
		};

		Vec3 m_baseTransform; // 0x60 (96)
		LinearTransform m_visualTransform; // 0x70 (112)
		String m_sid; // 0xB0 (176)
		String m_nameLetter; // 0xB8 (184)
		s32 m_nrOfPassengers; // 0xC0 (192)
		s32 m_nrOfEntries; // 0xC4 (196)
		float m_showRadius; // 0xC8 (200)
		float m_hideRadius; // 0xCC (204)
		float m_blinkTime; // 0xD0 (208)
		MapMarkerType m_markerType; // 0xD4 (212)
		TeamId m_visibleForTeam; // 0xD8 (216)
		TeamId m_ownerTeam; // 0xDC (220)
		UIHudIcon m_hudIcon; // 0xE0 (224)
		String m_iconName; // 0xE8 (232)
		CtrRef<UIWorldIconBehavior> m_iconBehavior; // 0xF0 (240)
		float m_verticalOffset; // 0xF8 (248)
		float m_focusPointRadius; // 0xFC (252)
		s32 m_focusPriority; // 0x100 (256)
		float m_progressTime; // 0x104 (260)
		float m_progress; // 0x108 (264)
		u32 m_trackedPlayersInRange; // 0x10C (268)
		float m_trackingPlayerRange; // 0x110 (272)
		float m_instantFlagReturnRadius; // 0x114 (276)
		float m_progressPlayerSpeedUpPercentage; // 0x118 (280)
		float m_progressTime1Player; // 0x11C (284)
		float m_progressMinTime; // 0x120 (288)
		bool m_isVisible; // 0x124 (292)
		bool m_showAirTargetBox; // 0x125 (293)
		bool m_isFocusPoint; // 0x126 (294)
		bool m_snap; // 0x127 (295)
		bool m_onlyShowSnapped; // 0x128 (296)
		bool m_useMarkerTransform; // 0x129 (297)
		bool m_showHighlight; // 0x12A (298)
		bool m_serverControlledPosition; // 0x12B (299)
		bool m_positionStatic; // 0x12C (300)
		bool m_enabled; // 0x12D (301)
		bool m_showDistanceInText; // 0x12E (302)
		bool m_showProgress; // 0x12F (303)
	}; // 0x130 (304)
}

