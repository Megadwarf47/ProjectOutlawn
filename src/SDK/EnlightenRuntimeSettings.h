///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/SystemSettings.h>
#include <fb/Vec3.h>

namespace fb {
	class EnlightenRuntimeSettings : public SystemSettings {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EnlightenRuntimeSettings"); }
		virtual ~EnlightenRuntimeSettings() override {}
		EnlightenRuntimeSettings() {
			m_albedoDefaultColor = Vec3(0.3f, 0.3f, 0.3f);
			m_temporalCoherenceThreshold = 0.01f;
			m_skyBoxScale = 1.f;
			m_maxPerFrameSolveTime = 5.f;
			m_minSystemUpdateCount = 3;
			m_jobCount = 16;
			m_cubeMapMaxUpdateCount = 1;
			m_cubeMapConvolutionSampleCount = 32;
			m_cubeMapForceGlobalScale = -1.f;
			m_lightProbeMaxSourceSolveCount = 1024;
			m_lightProbeMaxInstanceUpdateCount = 512;
			m_lightProbeLookupTableGridRes = 32;
			m_localLightForceRadius = 1.f;
			m_drawDebugSystemDependenciesEnable = -1;
			m_drawDebugSystemBoundingBoxEnable = -1;
			m_drawDebugLightProbeSize = 0.5f;
			m_enable = true;
			m_forceDynamic = false;
			m_forceUpdateStaticLightingBuffersEnable = false;
			m_saveRadiosityTexturesEnable = false;
			m_jobsEnable = true;
			m_shadowsEnable = true;
			m_spotLightShadowsEnable = true;
			m_cubeMapsEnable = true;
			m_cubeMapMip0OnlyEnable = false;
			m_cubeMapCpuMipMapGenerationEnable = true;
			m_cubeMapConvolutionEnable = false;
			m_compensateSunShadowHeightScale = true;
			m_lightMapsEnable = true;
			m_lightProbeEnable = true;
			m_lightProbeNewSamplingEnable = true;
			m_lightProbeForceUpdate = false;
			m_lightProbeJobsEnable = true;
			m_localLightsEnable = true;
			m_localLightCullingEnable = true;
			m_localLightCustumFalloff = false;
			m_drawDebugCubeMaps = false;
			m_drawDebugEntities = false;
			m_drawDebugSystemsEnable = false;
			m_drawDebugLightProbes = false;
			m_drawDebugLightProbeGrid = false;
			m_drawDebugLightProbeOcclusion = false;
			m_drawDebugLightProbeStats = false;
			m_drawDebugLightProbeBoundingBoxes = false;
			m_drawSolveTaskPerformance = false;
			m_drawDebugColoringEnable = false;
			m_drawDebugTextures = false;
			m_drawDebugBackFaces = false;
			m_drawDebugTargetMeshes = true;
			m_drawWarningsEnable = true;
			m_albedoForceUpdateEnable = false;
			m_albedoForceColorEnable = false;
			m_terrainMapEnable = true;
			m_emissiveEnable = true;
		};

		Vec3 m_albedoDefaultColor; // 0x20 (32)
		float m_temporalCoherenceThreshold; // 0x30 (48)
		float m_skyBoxScale; // 0x34 (52)
		float m_maxPerFrameSolveTime; // 0x38 (56)
		u32 m_minSystemUpdateCount; // 0x3C (60)
		u32 m_jobCount; // 0x40 (64)
		u32 m_cubeMapMaxUpdateCount; // 0x44 (68)
		u32 m_cubeMapConvolutionSampleCount; // 0x48 (72)
		float m_cubeMapForceGlobalScale; // 0x4C (76)
		u32 m_lightProbeMaxSourceSolveCount; // 0x50 (80)
		u32 m_lightProbeMaxInstanceUpdateCount; // 0x54 (84)
		u32 m_lightProbeLookupTableGridRes; // 0x58 (88)
		float m_localLightForceRadius; // 0x5C (92)
		s32 m_drawDebugSystemDependenciesEnable; // 0x60 (96)
		s32 m_drawDebugSystemBoundingBoxEnable; // 0x64 (100)
		float m_drawDebugLightProbeSize; // 0x68 (104)
		bool m_enable; // 0x6C (108)
		bool m_forceDynamic; // 0x6D (109)
		bool m_forceUpdateStaticLightingBuffersEnable; // 0x6E (110)
		bool m_saveRadiosityTexturesEnable; // 0x6F (111)
		bool m_jobsEnable; // 0x70 (112)
		bool m_shadowsEnable; // 0x71 (113)
		bool m_spotLightShadowsEnable; // 0x72 (114)
		bool m_cubeMapsEnable; // 0x73 (115)
		bool m_cubeMapMip0OnlyEnable; // 0x74 (116)
		bool m_cubeMapCpuMipMapGenerationEnable; // 0x75 (117)
		bool m_cubeMapConvolutionEnable; // 0x76 (118)
		bool m_compensateSunShadowHeightScale; // 0x77 (119)
		bool m_lightMapsEnable; // 0x78 (120)
		bool m_lightProbeEnable; // 0x79 (121)
		bool m_lightProbeNewSamplingEnable; // 0x7A (122)
		bool m_lightProbeForceUpdate; // 0x7B (123)
		bool m_lightProbeJobsEnable; // 0x7C (124)
		bool m_localLightsEnable; // 0x7D (125)
		bool m_localLightCullingEnable; // 0x7E (126)
		bool m_localLightCustumFalloff; // 0x7F (127)
		bool m_drawDebugCubeMaps; // 0x80 (128)
		bool m_drawDebugEntities; // 0x81 (129)
		bool m_drawDebugSystemsEnable; // 0x82 (130)
		bool m_drawDebugLightProbes; // 0x83 (131)
		bool m_drawDebugLightProbeGrid; // 0x84 (132)
		bool m_drawDebugLightProbeOcclusion; // 0x85 (133)
		bool m_drawDebugLightProbeStats; // 0x86 (134)
		bool m_drawDebugLightProbeBoundingBoxes; // 0x87 (135)
		bool m_drawSolveTaskPerformance; // 0x88 (136)
		bool m_drawDebugColoringEnable; // 0x89 (137)
		bool m_drawDebugTextures; // 0x8A (138)
		bool m_drawDebugBackFaces; // 0x8B (139)
		bool m_drawDebugTargetMeshes; // 0x8C (140)
		bool m_drawWarningsEnable; // 0x8D (141)
		bool m_albedoForceUpdateEnable; // 0x8E (142)
		bool m_albedoForceColorEnable; // 0x8F (143)
		bool m_terrainMapEnable; // 0x90 (144)
		bool m_emissiveEnable; // 0x91 (145)
	}; // 0xA0 (160)
}

