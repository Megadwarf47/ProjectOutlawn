///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/BlockageMode.h>
#include <fb/CtrRef.h>

namespace fb {
	class AutoObstacleTune;
	class CautionTune;
	class CustomMoverData;
	class FollowerTune;
	class GoalTune;
	class IdleTune;
	class JumperTune;
	class PathCreationOptions;
	class ProberTune;
	class PuppetTune;
	class RadiusData;
	class RepulsionAccelerationTune;
	class SurfaceOrientTune;
	class TurnInPlaceTune;
}

namespace fb {
	class MoverTune : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MoverTune"); }
		virtual ~MoverTune() override {}
		MoverTune() {
			m_speed = 3.6f;
			m_maxSpeedFraction = 2.f;
			m_bulk = 1.f;
			m_cruiseAcc = 3.6f;
			m_startStopAcc = 9.f;
			m_repulsorType = 0;
			m_flockAcc = 0.36f;
			m_maxFlockAccDist = 9.f;
			m_pathAcc = 1.8f;
			m_backpedalFraction = 1.2f;
			m_planLayer = 0;
			m_pathSharingPenalty = 0.f;
			m_maxPathSharingPenalty = 2.f;
			m_obstacleMode = BlockageMode::BLOCKED_IF_ANY_MATCH;
			m_obstacleBlockageFlags = 4294967295;
			m_repulsorBlockageFlags = 4294967295;
			m_repulsorIdentityFlags = 4294967295;
			m_linkUsageFlags = 4294967295;
			m_sidestepFraction = 0.2f;
			m_areaUsageFlags = 4294967295;
			m_allowDetour = false;
			m_clientMotion = false;
			m_ignoreUpsideDownMover = false;
		};

		float m_speed; // 0x18 (24)
		float m_maxSpeedFraction; // 0x1C (28)
		CtrRef<CustomMoverData> m_userData; // 0x20 (32)
		CtrRef<RadiusData> m_radiusData; // 0x28 (40)
		float m_bulk; // 0x30 (48)
		float m_cruiseAcc; // 0x34 (52)
		float m_startStopAcc; // 0x38 (56)
		s32 m_repulsorType; // 0x3C (60)
		float m_flockAcc; // 0x40 (64)
		float m_maxFlockAccDist; // 0x44 (68)
		float m_pathAcc; // 0x48 (72)
		CtrRef<CautionTune> m_cautionTune; // 0x50 (80)
		float m_backpedalFraction; // 0x58 (88)
		u32 m_planLayer; // 0x5C (92)
		float m_pathSharingPenalty; // 0x60 (96)
		float m_maxPathSharingPenalty; // 0x64 (100)
		BlockageMode m_obstacleMode; // 0x68 (104)
		u32 m_obstacleBlockageFlags; // 0x6C (108)
		CtrRef<AutoObstacleTune> m_autoObTune; // 0x70 (112)
		u32 m_repulsorBlockageFlags; // 0x78 (120)
		u32 m_repulsorIdentityFlags; // 0x7C (124)
		u32 m_linkUsageFlags; // 0x80 (128)
		CtrRef<PathCreationOptions> m_pathOptions; // 0x88 (136)
		CtrRef<JumperTune> m_jumperTune; // 0x90 (144)
		CtrRef<PuppetTune> m_puppetTune; // 0x98 (152)
		CtrRef<ProberTune> m_proberTune; // 0xA0 (160)
		CtrRef<GoalTune> m_goalTune; // 0xA8 (168)
		CtrRef<IdleTune> m_idleTune; // 0xB0 (176)
		CtrRef<TurnInPlaceTune> m_turnInPlace; // 0xB8 (184)
		CtrRef<RepulsionAccelerationTune> m_repulsionAccelerationTune; // 0xC0 (192)
		CtrRef<SurfaceOrientTune> m_surfaceOrientTune; // 0xC8 (200)
		float m_sidestepFraction; // 0xD0 (208)
		u32 m_areaUsageFlags; // 0xD4 (212)
		CtrRef<FollowerTune> m_followerTune; // 0xD8 (216)
		bool m_allowDetour; // 0xE0 (224)
		bool m_clientMotion; // 0xE1 (225)
		bool m_ignoreUpsideDownMover; // 0xE2 (226)
	}; // 0xE8 (232)
}

