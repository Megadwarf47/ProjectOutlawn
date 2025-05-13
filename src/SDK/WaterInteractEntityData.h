///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AmbientWaveSettings.h>
#include <fb/CtrRef.h>
#include <fb/GamePhysicsEntityData.h>
#include <fb/MaterialDecl.h>
#include <fb/PlatformScalableInt.h>
#include <fb/QualityScalableBool.h>
#include <fb/QualityScalableInt.h>
#include <fb/Vec3.h>
#include <fb/WaterEntityClipInfo.h>

namespace fb {
	class SurfaceShaderBaseAsset;
	class TextureAsset;
	class WaterEffectSetup;
}

namespace fb {
	class WaterInteractEntityData : public GamePhysicsEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WaterInteractEntityData"); }
		virtual ~WaterInteractEntityData() override {}
		WaterInteractEntityData() {
			m_projectorElevation = 8.f;
			m_waveAmplitudeScale = 1.f;
			m_choppiness = 1.f;
			m_tileDimension = 64.f;
			m_simulationResolution = PlatformScalableInt(64, 32, 32, 64, 64);
			m_detailTileDimension = 64.f;
			m_detailSimulationResolution = QualityScalableInt(32, 64, 64, 64);
			m_shoreWaveAmplitude = 0.3f;
			m_shoreWaveFrequency = 0.3f;
			m_shoreWindAngle = 0.f;
			m_shoreWindWavelength = 4.f;
			m_shoreWavelength = 4.f;
			m_shoreDepth = 16.f;
			m_interactiveWavesGridCount = QualityScalableInt(12, 16, 16, 16);
			m_interactiveWavesCellCount = QualityScalableInt(256, 256, 256, 256);
			m_interactiveWaveDisturbanceScale = 1.f;
			m_interactiveFoamHalfLife = 2.f;
			m_interactiveFoamTargetScale = 5.f;
			m_interactiveFoamSplatInterval = 0.1f;
			m_waveSimulation = true;
			m_visible = true;
			m_detailSimulation = QualityScalableBool(false, true, true, true);
			m_shorelineEnable = false;
			m_interactiveWavesEnable = QualityScalableBool(true, true, true, true);
		};

		Vec3 m_tileOffset; // 0x90 (144)
		AmbientWaveSettings m_ambientWaveSettings; // 0xA0 (160)
		AmbientWaveSettings m_detailWaveSettings; // 0x1A0 (416)
		CtrRef<SurfaceShaderBaseAsset> m_shader; // 0x2A0 (672)
		float m_projectorElevation; // 0x2A8 (680)
		float m_waveAmplitudeScale; // 0x2AC (684)
		float m_choppiness; // 0x2B0 (688)
		float m_tileDimension; // 0x2B4 (692)
		PlatformScalableInt m_simulationResolution; // 0x2B8 (696)
		float m_detailTileDimension; // 0x2CC (716)
		QualityScalableInt m_detailSimulationResolution; // 0x2D0 (720)
		CtrRef<WaterEffectSetup> m_effectSetup; // 0x2E0 (736)
		float m_shoreWaveAmplitude; // 0x2E8 (744)
		float m_shoreWaveFrequency; // 0x2EC (748)
		float m_shoreWindAngle; // 0x2F0 (752)
		float m_shoreWindWavelength; // 0x2F4 (756)
		float m_shoreWavelength; // 0x2F8 (760)
		float m_shoreDepth; // 0x2FC (764)
		MaterialDecl m_materialPair; // 0x300 (768)
		QualityScalableInt m_interactiveWavesGridCount; // 0x304 (772)
		QualityScalableInt m_interactiveWavesCellCount; // 0x314 (788)
		float m_interactiveWaveDisturbanceScale; // 0x324 (804)
		CtrRef<TextureAsset> m_interactiveFoamSplatTexture; // 0x328 (808)
		float m_interactiveFoamHalfLife; // 0x330 (816)
		float m_interactiveFoamTargetScale; // 0x334 (820)
		float m_interactiveFoamSplatInterval; // 0x338 (824)
		WaterEntityClipInfo m_clipInfo; // 0x33C (828)
		bool m_waveSimulation; // 0x341 (833)
		bool m_visible; // 0x342 (834)
		QualityScalableBool m_detailSimulation; // 0x343 (835)
		bool m_shorelineEnable; // 0x347 (839)
		QualityScalableBool m_interactiveWavesEnable; // 0x348 (840)
	}; // 0x350 (848)
}

