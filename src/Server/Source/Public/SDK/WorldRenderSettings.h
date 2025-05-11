///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/PostProcessAAMode.h>
#include <fb/QualityLevel.h>
#include <fb/ScaleResampleMode.h>
#include <fb/Vec4.h>
#include <fb/WorldRenderSettingsBase.h>

namespace fb {
	class WorldRenderSettings : public WorldRenderSettingsBase {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WorldRenderSettings"); }
		virtual ~WorldRenderSettings() override {}
		WorldRenderSettings() {
			m_overlayColor = Vec4(0.6f, 1.f, 0.f, 0.3f);
			m_genericEntityMaxVisibleEntityCount = 10000;
			m_drawDebugGroundHeight = 0;
			m_decalVolumeScale = 1.f;
			m_gBufferLayout = 0;
			m_gBufferTestCount = 0;
			m_gBufferAlphaTestSimpleSmoothness = 0.3f;
			m_gBufferForceSmoothness = -1.f;
			m_gBufferForceSpecularAlbedo = -1.f;
			m_spotLightsAsConeLightsLevel = QualityLevel::QualityLevel_Low;
			m_lightTileMinArea = 0.03f;
			m_lightStencilMinArea = 0.1f;
			m_lightNarrowAngleThreshold = 1.f;
			m_outdoorLightTileBatchCount = 4;
			m_xenonDrawDebugLightTileGridMode = 0;
			m_xenonLightTileConstantBufferSize = 2097152;
			m_xenonLightTileMaxPointLightCount = 256;
			m_xenonLightTileMaxLineLightCount = 256;
			m_xenonLightTileMaxSpotLightCount = 256;
			m_ps3LightTileMethod = 1;
			m_ps3LightTileJobCount = 6;
			m_ps3LightTileJobPriority = 128;
			m_ps3LightTileJobYieldGranularity = 1.f;
			m_ps3LightTileJobYieldAggressiveGranularity = 0.05f;
			m_ps3LightTileJobMaxFbTileCount = 0;
			m_onlyLightTileIndex = -1;
			m_spotLightShadowmapResolution = 512;
			m_spotLightShadowmapQuality = 1;
			m_spotLightShadowmapPoissonFilterScale = 3.f;
			m_spotLightShadowmapLevel = QualityLevel::QualityLevel_Low;
			m_maxPointLightCount = 256;
			m_maxSpotLightCount = 256;
			m_maxSpotLightShadowCount = 4;
			m_maxDestructionVolumeCount = 256;
			m_maxDecalVolumeCount = 256;
			m_spotLightNearPlane = 0.1f;
			m_lightTileCsAvgLightCountPerTile = 64;
			m_lightLodFadeArea = 0.01f;
			m_lightLodMinArea = 0.005f;
			m_lightLodRadiusFactor = 1.f;
			m_lightLodSpecularFadeAreaStart = 0.01f;
			m_lightLodSpecularFadeAreaEnd = 0.005f;
			m_lightForceIntensity = -1.f;
			m_lightIntensityScale = 1.f;
			m_lightRadiusScale = 1.f;
			m_lightAttenuationThreshold = 0.01f;
			m_occlusionCullingWidth = 256;
			m_occlusionCullingHeight = 114;
			m_occlusionTriangleCount = 5000;
			m_shadowOcclusionCullingWidth = 256;
			m_shadowOcclusionCullingHeight = 128;
			m_shadowOcclusionTriangleCount = 5000;
			m_frustumSilhouetteCullingPadding = 0.f;
			m_onlyTileIndex = -1;
			m_planarReflectionViewScale = 0.4f;
			m_planarReflectionCullFOV = 0.5f;
			m_planarReflectionFarPlane = 200.f;
			m_drawDebugPlanarReflectionMode = 0;
			m_reflectionLodScale = 0.1f;
			m_postProcessAntialiasingMode = PostProcessAAMode::PostProcessAAMode_None;
			m_fxaaForceVendor = -1;
			m_renderScaleResampleMode = ScaleResampleMode::ScaleResampleMode_LanczosSeparable;
			m_lightCubeMapStencilMinArea = 0.9f;
			m_drawDebugIndirectCubeMapMipLevel = 0;
			m_drawDebugIndirectCubeMapIndex = 0;
			m_simpleRenderingEnable = false;
			m_genericEntityRendererEnable = true;
			m_zBufferShadowTestEnable = true;
			m_decalVolumeEnable = false;
			m_drawDebugDecalVolumes = false;
			m_drawDebugDestructionVolumes = false;
			m_lensFlaresEnable = true;
			m_drawDebugLensFlareOccluders = false;
			m_drawDebugLensFlares = false;
			m_lensFlareOcclusionEnable = true;
			m_cloudShadowEnable = true;
			m_overrideDynamicAO = true;
			m_drawDebugDynamicAO = false;
			m_emissiveEnable = true;
			m_unlitEnable = true;
			m_gBufferClearEnable = false;
			m_dxGBufferLight16BitEnable = false;
			m_dxGBufferNormal16BitEnable = false;
			m_gBufferAlphaTestSimpleEnable = true;
			m_gen4aEsramEnable = true;
			m_specularLightingEnable = true;
			m_skinLightingEnable = true;
			m_translucencyLightingEnable = true;
			m_dynamicEnvmapLightingEnable = true;
			m_outdoorLightEnable = true;
			m_pointLightsEnable = true;
			m_lineLightsEnable = true;
			m_coneLightsEnable = true;
			m_spotLightsEnable = true;
			m_lightProbesEnable = true;
			m_lightStencilMethodEnable = true;
			m_lightVolumeMethodEnable = true;
			m_lightVolumeDepthTestEnable = true;
			m_outdoorKeyLightEnable = true;
			m_outdoorSkyLightEnable = true;
			m_outdoorLightTilingEnable = true;
			m_outdoorLightTileRenderEnable = true;
			m_outdoorLightTileBlendEnable = true;
			m_outdoorLightTileSimpleShaderEnable = false;
			m_xenonOutdoorLightTilingEnable = true;
			m_xenonPointLightsTilingEnable = true;
			m_xenonSpotLightsTilingEnable = true;
			m_xenonLineLightsTilingEnable = true;
			m_xenonAsyncLightJobsEnable = true;
			m_xenonLightTileDownsampleSpecularCheckEnable = false;
			m_xenonLightTileCpuPointLightCullingEnable = true;
			m_xenonLightTileCpuSpotLightCullingEnable = true;
			m_ps3DepthBoundsLightCullingEnable = true;
			m_ps3LightTileJobYieldEnable = true;
			m_ps3LightTileClearAllEnable = false;
			m_ps3LightCullSpuJob = true;
			m_spotLightShadowmapEnable = true;
			m_radiositySpotLightShadowCullingEnable = true;
			m_lightTileCsPathEnable = true;
			m_lightTileMinMaxUseHTile = false;
			m_lightTileSplitCullingAndLighting = true;
			m_drawDebugGBuffer = false;
			m_drawDebugLightSources = false;
			m_drawDebugLightShadowSources = false;
			m_drawDebugLightTextureSources = false;
			m_drawDebugLightStats = false;
			m_drawDebugLightTiles = false;
			m_drawDebugLightTileVolumes = false;
			m_drawDebugLightTileFbGrid = false;
			m_drawDebugLightTileGrid = false;
			m_drawDebugLightTileSources = false;
			m_lightWidthEnable = true;
			m_lightIntensityNormalizationEnable = false;
			m_lightCullEnable = true;
			m_lightOcclusionCullEnable = true;
			m_lightDepthCullEnable = true;
			m_lightNormalCullEnable = true;
			m_lightConeCullEnable = true;
			m_lightTileOverlayEnable = true;
			m_lightAttenuationThresholdEnable = true;
			m_skyVisibilityEnvmapScalingEnable = true;
			m_shadowOcclusionCullingEnable = true;
			m_frustumSilhouetteCullingEnable = false;
			m_subSurfaceScatteringEnable = false;
			m_opaqueSortBySolutionEnable = true;
			m_mainOpaqueZPassEnable = false;
			m_planarReflectionEnable = true;
			m_planarReflectionFastHdrEnable = true;
			m_planarReflectionBlur = true;
			m_planarReflectionClippingEnable = true;
			m_drawDebugPlanarReflection = false;
			m_drawDebugPlanarReflectionCullFrustum = false;
			m_overlayEnable = true;
			m_smaaVelocityReprojectionEnable = true;
			m_smaaUseStencil = true;
			m_smaaPredicatedThresholdingEnable = true;
			m_viewFxEnable = true;
			m_renderScaleResampleEnable = true;
			m_lightCubeMapStencilEnable = true;
			m_drawDebugIndirectCubeMapEnable = false;
			m_debugDrawProceduralSkyGradient = false;
		};

		Vec4 m_overlayColor; // 0x150 (336)
		u32 m_genericEntityMaxVisibleEntityCount; // 0x160 (352)
		u32 m_drawDebugGroundHeight; // 0x164 (356)
		float m_decalVolumeScale; // 0x168 (360)
		u32 m_gBufferLayout; // 0x16C (364)
		u32 m_gBufferTestCount; // 0x170 (368)
		float m_gBufferAlphaTestSimpleSmoothness; // 0x174 (372)
		float m_gBufferForceSmoothness; // 0x178 (376)
		float m_gBufferForceSpecularAlbedo; // 0x17C (380)
		QualityLevel m_spotLightsAsConeLightsLevel; // 0x180 (384)
		float m_lightTileMinArea; // 0x184 (388)
		float m_lightStencilMinArea; // 0x188 (392)
		float m_lightNarrowAngleThreshold; // 0x18C (396)
		u32 m_outdoorLightTileBatchCount; // 0x190 (400)
		u32 m_xenonDrawDebugLightTileGridMode; // 0x194 (404)
		u32 m_xenonLightTileConstantBufferSize; // 0x198 (408)
		u32 m_xenonLightTileMaxPointLightCount; // 0x19C (412)
		u32 m_xenonLightTileMaxLineLightCount; // 0x1A0 (416)
		u32 m_xenonLightTileMaxSpotLightCount; // 0x1A4 (420)
		u32 m_ps3LightTileMethod; // 0x1A8 (424)
		u32 m_ps3LightTileJobCount; // 0x1AC (428)
		u32 m_ps3LightTileJobPriority; // 0x1B0 (432)
		float m_ps3LightTileJobYieldGranularity; // 0x1B4 (436)
		float m_ps3LightTileJobYieldAggressiveGranularity; // 0x1B8 (440)
		u32 m_ps3LightTileJobMaxFbTileCount; // 0x1BC (444)
		s32 m_onlyLightTileIndex; // 0x1C0 (448)
		u32 m_spotLightShadowmapResolution; // 0x1C4 (452)
		u32 m_spotLightShadowmapQuality; // 0x1C8 (456)
		float m_spotLightShadowmapPoissonFilterScale; // 0x1CC (460)
		QualityLevel m_spotLightShadowmapLevel; // 0x1D0 (464)
		u32 m_maxPointLightCount; // 0x1D4 (468)
		u32 m_maxSpotLightCount; // 0x1D8 (472)
		u32 m_maxSpotLightShadowCount; // 0x1DC (476)
		u32 m_maxDestructionVolumeCount; // 0x1E0 (480)
		u32 m_maxDecalVolumeCount; // 0x1E4 (484)
		float m_spotLightNearPlane; // 0x1E8 (488)
		u32 m_lightTileCsAvgLightCountPerTile; // 0x1EC (492)
		float m_lightLodFadeArea; // 0x1F0 (496)
		float m_lightLodMinArea; // 0x1F4 (500)
		float m_lightLodRadiusFactor; // 0x1F8 (504)
		float m_lightLodSpecularFadeAreaStart; // 0x1FC (508)
		float m_lightLodSpecularFadeAreaEnd; // 0x200 (512)
		float m_lightForceIntensity; // 0x204 (516)
		float m_lightIntensityScale; // 0x208 (520)
		float m_lightRadiusScale; // 0x20C (524)
		float m_lightAttenuationThreshold; // 0x210 (528)
		u32 m_occlusionCullingWidth; // 0x214 (532)
		u32 m_occlusionCullingHeight; // 0x218 (536)
		u32 m_occlusionTriangleCount; // 0x21C (540)
		u32 m_shadowOcclusionCullingWidth; // 0x220 (544)
		u32 m_shadowOcclusionCullingHeight; // 0x224 (548)
		u32 m_shadowOcclusionTriangleCount; // 0x228 (552)
		float m_frustumSilhouetteCullingPadding; // 0x22C (556)
		s32 m_onlyTileIndex; // 0x230 (560)
		float m_planarReflectionViewScale; // 0x234 (564)
		float m_planarReflectionCullFOV; // 0x238 (568)
		float m_planarReflectionFarPlane; // 0x23C (572)
		u32 m_drawDebugPlanarReflectionMode; // 0x240 (576)
		float m_reflectionLodScale; // 0x244 (580)
		PostProcessAAMode m_postProcessAntialiasingMode; // 0x248 (584)
		s32 m_fxaaForceVendor; // 0x24C (588)
		ScaleResampleMode m_renderScaleResampleMode; // 0x250 (592)
		float m_lightCubeMapStencilMinArea; // 0x254 (596)
		u32 m_drawDebugIndirectCubeMapMipLevel; // 0x258 (600)
		u32 m_drawDebugIndirectCubeMapIndex; // 0x25C (604)
		bool m_simpleRenderingEnable; // 0x260 (608)
		bool m_genericEntityRendererEnable; // 0x261 (609)
		bool m_zBufferShadowTestEnable; // 0x262 (610)
		bool m_decalVolumeEnable; // 0x263 (611)
		bool m_drawDebugDecalVolumes; // 0x264 (612)
		bool m_drawDebugDestructionVolumes; // 0x265 (613)
		bool m_lensFlaresEnable; // 0x266 (614)
		bool m_drawDebugLensFlareOccluders; // 0x267 (615)
		bool m_drawDebugLensFlares; // 0x268 (616)
		bool m_lensFlareOcclusionEnable; // 0x269 (617)
		bool m_cloudShadowEnable; // 0x26A (618)
		bool m_overrideDynamicAO; // 0x26B (619)
		bool m_drawDebugDynamicAO; // 0x26C (620)
		bool m_emissiveEnable; // 0x26D (621)
		bool m_unlitEnable; // 0x26E (622)
		bool m_gBufferClearEnable; // 0x26F (623)
		bool m_dxGBufferLight16BitEnable; // 0x270 (624)
		bool m_dxGBufferNormal16BitEnable; // 0x271 (625)
		bool m_gBufferAlphaTestSimpleEnable; // 0x272 (626)
		bool m_gen4aEsramEnable; // 0x273 (627)
		bool m_specularLightingEnable; // 0x274 (628)
		bool m_skinLightingEnable; // 0x275 (629)
		bool m_translucencyLightingEnable; // 0x276 (630)
		bool m_dynamicEnvmapLightingEnable; // 0x277 (631)
		bool m_outdoorLightEnable; // 0x278 (632)
		bool m_pointLightsEnable; // 0x279 (633)
		bool m_lineLightsEnable; // 0x27A (634)
		bool m_coneLightsEnable; // 0x27B (635)
		bool m_spotLightsEnable; // 0x27C (636)
		bool m_lightProbesEnable; // 0x27D (637)
		bool m_lightStencilMethodEnable; // 0x27E (638)
		bool m_lightVolumeMethodEnable; // 0x27F (639)
		bool m_lightVolumeDepthTestEnable; // 0x280 (640)
		bool m_outdoorKeyLightEnable; // 0x281 (641)
		bool m_outdoorSkyLightEnable; // 0x282 (642)
		bool m_outdoorLightTilingEnable; // 0x283 (643)
		bool m_outdoorLightTileRenderEnable; // 0x284 (644)
		bool m_outdoorLightTileBlendEnable; // 0x285 (645)
		bool m_outdoorLightTileSimpleShaderEnable; // 0x286 (646)
		bool m_xenonOutdoorLightTilingEnable; // 0x287 (647)
		bool m_xenonPointLightsTilingEnable; // 0x288 (648)
		bool m_xenonSpotLightsTilingEnable; // 0x289 (649)
		bool m_xenonLineLightsTilingEnable; // 0x28A (650)
		bool m_xenonAsyncLightJobsEnable; // 0x28B (651)
		bool m_xenonLightTileDownsampleSpecularCheckEnable; // 0x28C (652)
		bool m_xenonLightTileCpuPointLightCullingEnable; // 0x28D (653)
		bool m_xenonLightTileCpuSpotLightCullingEnable; // 0x28E (654)
		bool m_ps3DepthBoundsLightCullingEnable; // 0x28F (655)
		bool m_ps3LightTileJobYieldEnable; // 0x290 (656)
		bool m_ps3LightTileClearAllEnable; // 0x291 (657)
		bool m_ps3LightCullSpuJob; // 0x292 (658)
		bool m_spotLightShadowmapEnable; // 0x293 (659)
		bool m_radiositySpotLightShadowCullingEnable; // 0x294 (660)
		bool m_lightTileCsPathEnable; // 0x295 (661)
		bool m_lightTileMinMaxUseHTile; // 0x296 (662)
		bool m_lightTileSplitCullingAndLighting; // 0x297 (663)
		bool m_drawDebugGBuffer; // 0x298 (664)
		bool m_drawDebugLightSources; // 0x299 (665)
		bool m_drawDebugLightShadowSources; // 0x29A (666)
		bool m_drawDebugLightTextureSources; // 0x29B (667)
		bool m_drawDebugLightStats; // 0x29C (668)
		bool m_drawDebugLightTiles; // 0x29D (669)
		bool m_drawDebugLightTileVolumes; // 0x29E (670)
		bool m_drawDebugLightTileFbGrid; // 0x29F (671)
		bool m_drawDebugLightTileGrid; // 0x2A0 (672)
		bool m_drawDebugLightTileSources; // 0x2A1 (673)
		bool m_lightWidthEnable; // 0x2A2 (674)
		bool m_lightIntensityNormalizationEnable; // 0x2A3 (675)
		bool m_lightCullEnable; // 0x2A4 (676)
		bool m_lightOcclusionCullEnable; // 0x2A5 (677)
		bool m_lightDepthCullEnable; // 0x2A6 (678)
		bool m_lightNormalCullEnable; // 0x2A7 (679)
		bool m_lightConeCullEnable; // 0x2A8 (680)
		bool m_lightTileOverlayEnable; // 0x2A9 (681)
		bool m_lightAttenuationThresholdEnable; // 0x2AA (682)
		bool m_skyVisibilityEnvmapScalingEnable; // 0x2AB (683)
		bool m_shadowOcclusionCullingEnable; // 0x2AC (684)
		bool m_frustumSilhouetteCullingEnable; // 0x2AD (685)
		bool m_subSurfaceScatteringEnable; // 0x2AE (686)
		bool m_opaqueSortBySolutionEnable; // 0x2AF (687)
		bool m_mainOpaqueZPassEnable; // 0x2B0 (688)
		bool m_planarReflectionEnable; // 0x2B1 (689)
		bool m_planarReflectionFastHdrEnable; // 0x2B2 (690)
		bool m_planarReflectionBlur; // 0x2B3 (691)
		bool m_planarReflectionClippingEnable; // 0x2B4 (692)
		bool m_drawDebugPlanarReflection; // 0x2B5 (693)
		bool m_drawDebugPlanarReflectionCullFrustum; // 0x2B6 (694)
		bool m_overlayEnable; // 0x2B7 (695)
		bool m_smaaVelocityReprojectionEnable; // 0x2B8 (696)
		bool m_smaaUseStencil; // 0x2B9 (697)
		bool m_smaaPredicatedThresholdingEnable; // 0x2BA (698)
		bool m_viewFxEnable; // 0x2BB (699)
		bool m_renderScaleResampleEnable; // 0x2BC (700)
		bool m_lightCubeMapStencilEnable; // 0x2BD (701)
		bool m_drawDebugIndirectCubeMapEnable; // 0x2BE (702)
		bool m_debugDrawProceduralSkyGradient; // 0x2BF (703)
	}; // 0x2C0 (704)
}

