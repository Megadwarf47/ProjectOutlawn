///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/PathfindingReplayMode.h>

namespace fb {
	class PathfindingDebugSettings : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PathfindingDebugSettings"); }
		virtual ~PathfindingDebugSettings() override {}
		PathfindingDebugSettings() {
			m_typesToDrawMask = 0;
			m_textStartX = 300;
			m_textStartY = 20;
			m_textOffsetY = 16;
			m_replayMode = PathfindingReplayMode::PathfindingReplayMode_Disabled;
			m_drawPolygonOutline = true;
			m_drawFilledPolygons = true;
			m_drawConnections = false;
			m_drawObstacles = true;
			m_drawAreaNormals = false;
			m_drawObstaclesFlags = false;
			m_drawAreaPenalty = false;
			m_drawAreaUsageFlags = false;
			m_drawColorizedAreaUsageFlags = false;
			m_drawLinkUsageDistance = true;
			m_drawLinkUsageFlags = false;
			m_drawLinkOriginalLocation = true;
			m_drawRecentNavProbes = false;
			m_drawMoverCylinders = true;
			m_drawMoverGoals = true;
			m_drawMoverGoalsReached = true;
			m_drawMoverName = true;
			m_drawMoverState = true;
			m_drawMoverAttractions = true;
			m_drawClientMotion = true;
			m_drawCurPathSection = true;
			m_drawFollowerGoal = false;
			m_drawNavigators = true;
			m_drawNavigatorGoal = false;
			m_drawNavigatorName = true;
			m_drawRepulsors = true;
			m_drawSpaceAxes = true;
			m_drawStats = false;
			m_drawMemory = false;
			m_drawTimings = false;
			m_originalPaths = false;
			m_randomPositions = false;
			m_potentialObstacles = false;
		};

		s32 m_typesToDrawMask; // 0x10 (16)
		s32 m_textStartX; // 0x14 (20)
		s32 m_textStartY; // 0x18 (24)
		s32 m_textOffsetY; // 0x1C (28)
		PathfindingReplayMode m_replayMode; // 0x20 (32)
		bool m_drawPolygonOutline; // 0x24 (36)
		bool m_drawFilledPolygons; // 0x25 (37)
		bool m_drawConnections; // 0x26 (38)
		bool m_drawObstacles; // 0x27 (39)
		bool m_drawAreaNormals; // 0x28 (40)
		bool m_drawObstaclesFlags; // 0x29 (41)
		bool m_drawAreaPenalty; // 0x2A (42)
		bool m_drawAreaUsageFlags; // 0x2B (43)
		bool m_drawColorizedAreaUsageFlags; // 0x2C (44)
		bool m_drawLinkUsageDistance; // 0x2D (45)
		bool m_drawLinkUsageFlags; // 0x2E (46)
		bool m_drawLinkOriginalLocation; // 0x2F (47)
		bool m_drawRecentNavProbes; // 0x30 (48)
		bool m_drawMoverCylinders; // 0x31 (49)
		bool m_drawMoverGoals; // 0x32 (50)
		bool m_drawMoverGoalsReached; // 0x33 (51)
		bool m_drawMoverName; // 0x34 (52)
		bool m_drawMoverState; // 0x35 (53)
		bool m_drawMoverAttractions; // 0x36 (54)
		bool m_drawClientMotion; // 0x37 (55)
		bool m_drawCurPathSection; // 0x38 (56)
		bool m_drawFollowerGoal; // 0x39 (57)
		bool m_drawNavigators; // 0x3A (58)
		bool m_drawNavigatorGoal; // 0x3B (59)
		bool m_drawNavigatorName; // 0x3C (60)
		bool m_drawRepulsors; // 0x3D (61)
		bool m_drawSpaceAxes; // 0x3E (62)
		bool m_drawStats; // 0x3F (63)
		bool m_drawMemory; // 0x40 (64)
		bool m_drawTimings; // 0x41 (65)
		bool m_originalPaths; // 0x42 (66)
		bool m_randomPositions; // 0x43 (67)
		bool m_potentialObstacles; // 0x44 (68)
	}; // 0x48 (72)
}

