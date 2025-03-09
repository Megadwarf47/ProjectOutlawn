///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CtrRef.h>
#include <fb/LevelDescription.h>
#include <fb/LevelPreloadInfo.h>
#include <fb/RefArray.h>
#include <fb/String.h>
#include <fb/UnlockIdTable.h>
#include <fb/WorldData.h>

namespace fb {
	class AIManagerAsset;
	class AntProjectAsset;
	class CameraModeAsset;
	class CameraTransition;
	class EnlightenShaderDatabaseAsset;
	class FaceAnimationWaveMappings;
	class GameAISystem;
	class PathfindingBlobAsset;
	class StreamPoolPreset;
	class SubWorldReferenceObjectData;
	class VoiceOverLogicAsset;
	class VoiceOverSystemAsset;
}

namespace fb {
	class LevelData : public WorldData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("LevelData"); }
		virtual ~LevelData() override {}
		LevelData() {
			m_worldSizeXZ = 0.f;
			m_worldSizeMinY = -100.f;
			m_defaultFOV = 55.f;
			m_infantryFOVMultiplier = 1.f;
			m_maxVehicleHeight = 1000.f;
			m_hugeBroadPhase = false;
			m_freeStreamingEnable = true;
		};

		CtrRef<SubWorldReferenceObjectData> m_levelReference; // 0x60 (96)
		CtrRef<PathfindingBlobAsset> m_pathfindingBlobs; // 0x68 (104)
		CtrRef<AIManagerAsset> m_aiManager; // 0x70 (112)
		CtrRef<GameAISystem> m_aiSystem; // 0x78 (120)
		CtrRef<GameAISystem> m_aI2System; // 0x80 (128)
		float m_worldSizeXZ; // 0x88 (136)
		float m_worldSizeMinY; // 0x8C (140)
		LevelDescription m_levelDescription; // 0x90 (144)
		String m_gameConfigurationName; // 0xB0 (176)
		float m_defaultFOV; // 0xB8 (184)
		float m_infantryFOVMultiplier; // 0xBC (188)
		CtrRef<StreamPoolPreset> m_streamPoolPreset; // 0xC0 (192)
		CtrRef<VoiceOverSystemAsset> m_voiceOverSystem; // 0xC8 (200)
		RefArray<VoiceOverLogicAsset> m_voiceOverLogic; // 0xD0 (208)
		float m_maxVehicleHeight; // 0xD8 (216)
		CtrRef<EnlightenShaderDatabaseAsset> m_enlightenShaderDatabase; // 0xE0 (224)
		CtrRef<AntProjectAsset> m_antProjectAsset; // 0xE8 (232)
		String m_aerialHeightmapData; // 0xF0 (240)
		RefArray<CameraModeAsset> m_cameraModes; // 0xF8 (248)
		RefArray<CameraTransition> m_cameraTransitions; // 0x100 (256)
		LevelPreloadInfo m_preloadInfo; // 0x108 (264)
		CtrRef<FaceAnimationWaveMappings> m_faceAnimationsWaveMappings; // 0x118 (280)
		Array<String> m_autoLoadBundles; // 0x120 (288)
		UnlockIdTable m_unlockIdTable; // 0x128 (296)
		bool m_hugeBroadPhase; // 0x130 (304)
		bool m_freeStreamingEnable; // 0x131 (305)
	}; // 0x138 (312)
}

