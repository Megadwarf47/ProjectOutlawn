///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainer.h>
#include <fb/EmittableAlignment.h>
#include <fb/EmittableType.h>
#include <fb/EmitterDrawOrder.h>
#include <fb/RefArray.h>
#include <fb/SurfaceShaderInstanceDataStruct.h>
#include <fb/Vec3.h>

namespace fb {
	class EffectParameter;
	class MeshAsset;
	class ProcessorData;
}

namespace fb {
	class EmitterTemplateData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EmitterTemplateData"); }
		virtual ~EmitterTemplateData() override {}
		EmitterTemplateData() {
			m_maxCount = 50;
			m_worldAlignmentDirection = Vec3(0.f, 1.f, 0.f);
			m_lifetime = 0.f;
			m_timeScale = 1.f;
			m_lifetimeFrameCount = 0;
			m_emittableType = EmittableType::EmittableType_Quad;
			m_emittableAlignment = EmittableAlignment::EmittableAlignment_Screen;
			m_motionStretchMultiplier = 1.f;
			m_motionStretchLengthClamp = 100.f;
			m_vertexPixelLightingBlendFactor = 0.7f;
			m_globalLocalNormalBlendFactor = 0.f;
			m_softParticlesFadeDistanceMultiplier = 0.f;
			m_lightWrapAroundFactor = 0.5f;
			m_bentNormalFactor = 1.f;
			m_lightMultiplier = 1.f;
			m_bendingFactor = 0.f;
			m_cameraBias = 0.f;
			m_emitterDrawOrder = EmitterDrawOrder::EmitterDrawOrder_Default;
			m_particleCullingFactor = 0.8f;
			m_minSpawnDistance = 0.f;
			m_maxSpawnDistance = 0.f;
			m_minScreenArea = 1.f;
			m_meshCullingDistance = 0.f;
			m_distanceScaleLength = 0.f;
			m_distanceScaleNearValue = 1.f;
			m_distanceScaleFarValue = 1.f;
			m_speedNormalizationValue = 50.f;
			m_windSpeedNormalizationValue = 50.f;
			m_cullFadeNearDistance = 0.f;
			m_cullFadeNearRange = 0.f;
			m_cullFadeFarDistance = 0.f;
			m_cullFadeFarRange = 0.f;
			m_repeatParticleSpawning = false;
			m_followSpawnSource = false;
			m_killParticlesWithEmitter = false;
			m_exclusionVolumeCullEnable = false;
			m_emissive = false;
			m_opaque = true;
			m_useCharacterLightProbes = false;
			m_forceNiceSorting = false;
			m_localSpace = false;
			m_cameraSpace = false;
			m_transparencySunShadowEnable = false;
			m_castPlanarReflectionEnable = false;
			m_forceFullRes = false;
			m_fogFade = true;
			m_acceptGlobalParameter1 = false;
			m_acceptGlobalParameter2 = false;
			m_acceptGlobalParameter3 = false;
			m_useOfCustomParamRandomSpawnValuesEnabled = false;
			m_emitterWindEvaluationEnable = false;
			m_emittableWindEvaluationEnable = false;
			m_groupEmittersWithSameBaseTextureOnly = false;
		};

		CtrRef<ProcessorData> m_rootProcessor; // 0x10 (16)
		u32 m_maxCount; // 0x18 (24)
		Vec3 m_worldAlignmentDirection; // 0x20 (32)
		float m_lifetime; // 0x30 (48)
		float m_timeScale; // 0x34 (52)
		u32 m_lifetimeFrameCount; // 0x38 (56)
		EmittableType m_emittableType; // 0x3C (60)
		EmittableAlignment m_emittableAlignment; // 0x40 (64)
		float m_motionStretchMultiplier; // 0x44 (68)
		float m_motionStretchLengthClamp; // 0x48 (72)
		CtrRef<MeshAsset> m_mesh; // 0x50 (80)
		float m_vertexPixelLightingBlendFactor; // 0x58 (88)
		float m_globalLocalNormalBlendFactor; // 0x5C (92)
		float m_softParticlesFadeDistanceMultiplier; // 0x60 (96)
		float m_lightWrapAroundFactor; // 0x64 (100)
		float m_bentNormalFactor; // 0x68 (104)
		float m_lightMultiplier; // 0x6C (108)
		float m_bendingFactor; // 0x70 (112)
		float m_cameraBias; // 0x74 (116)
		SurfaceShaderInstanceDataStruct m_shader; // 0x78 (120)
		EmitterDrawOrder m_emitterDrawOrder; // 0xA0 (160)
		float m_particleCullingFactor; // 0xA4 (164)
		float m_minSpawnDistance; // 0xA8 (168)
		float m_maxSpawnDistance; // 0xAC (172)
		float m_minScreenArea; // 0xB0 (176)
		float m_meshCullingDistance; // 0xB4 (180)
		float m_distanceScaleLength; // 0xB8 (184)
		float m_distanceScaleNearValue; // 0xBC (188)
		float m_distanceScaleFarValue; // 0xC0 (192)
		float m_speedNormalizationValue; // 0xC4 (196)
		float m_windSpeedNormalizationValue; // 0xC8 (200)
		RefArray<EffectParameter> m_perParticleEffectParameters; // 0xD0 (208)
		float m_cullFadeNearDistance; // 0xD8 (216)
		float m_cullFadeNearRange; // 0xDC (220)
		float m_cullFadeFarDistance; // 0xE0 (224)
		float m_cullFadeFarRange; // 0xE4 (228)
		bool m_repeatParticleSpawning; // 0xE8 (232)
		bool m_followSpawnSource; // 0xE9 (233)
		bool m_killParticlesWithEmitter; // 0xEA (234)
		bool m_exclusionVolumeCullEnable; // 0xEB (235)
		bool m_emissive; // 0xEC (236)
		bool m_opaque; // 0xED (237)
		bool m_useCharacterLightProbes; // 0xEE (238)
		bool m_forceNiceSorting; // 0xEF (239)
		bool m_localSpace; // 0xF0 (240)
		bool m_cameraSpace; // 0xF1 (241)
		bool m_transparencySunShadowEnable; // 0xF2 (242)
		bool m_castPlanarReflectionEnable; // 0xF3 (243)
		bool m_forceFullRes; // 0xF4 (244)
		bool m_fogFade; // 0xF5 (245)
		bool m_acceptGlobalParameter1; // 0xF6 (246)
		bool m_acceptGlobalParameter2; // 0xF7 (247)
		bool m_acceptGlobalParameter3; // 0xF8 (248)
		bool m_useOfCustomParamRandomSpawnValuesEnabled; // 0xF9 (249)
		bool m_emitterWindEvaluationEnable; // 0xFA (250)
		bool m_emittableWindEvaluationEnable; // 0xFB (251)
		bool m_groupEmittersWithSameBaseTextureOnly; // 0xFC (252)
	}; // 0x100 (256)
}

