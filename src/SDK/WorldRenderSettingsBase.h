///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/MipmapFilterMode.h>
#include <fb/Vec3.h>
#include <fb/WorldViewMode.h>

namespace fb {
	class WorldRenderSettingsBase : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WorldRenderSettingsBase"); }
		virtual ~WorldRenderSettingsBase() override {}
		WorldRenderSettingsBase() {
			m_cullScreenAreaScale = 1.f;
			m_viewportScale = 1.f;
			m_dynamicEnvmapDefaultPosition = Vec3(18.f, 3.f, 70.f);
			m_shadowViewportScale = 1.f;
			m_shadowmapMinFov = -1.f;
			m_shadowmapSizeZScale = 1.f;
			m_shadowmapResolution = 608;
			m_shadowmapQuality = 1;
			m_shadowmapPoissonFilterScale = 3.f;
			m_shadowmapSliceCount = 4;
			m_shadowmapSliceSchemeWeight = 0.8f;
			m_shadowmapFirstSliceScale = 1.f;
			m_shadowmapViewDistance = 100.f;
			m_shadowmapExtrusionLength = 400.f;
			m_shadowmapTransitionBlendAmount = 0.03f;
			m_motionBlurScale = 1.f;
			m_motionBlurFixedShutterTime = 0.008f;
			m_motionBlurMax = 1.f;
			m_motionBlurRadialBlurMax = 0.06f;
			m_motionBlurNoiseScale = 1.f;
			m_motionBlurQuality = 1;
			m_motionBlurDebugMode = 0;
			m_motionBlurMaxSampleCount = 20;
			m_forceMotionBlurDepthCutoff = -1.f;
			m_forceMotionBlurCutoffGradientScale = -1.f;
			m_motionBlurDepthCheckThreshold = 0.05f;
			m_motionBlurDepthCheckMaxDistance = 5.f;
			m_multisampleCount = 1;
			m_multisampleThreshold = 0.1f;
			m_onlyShadowmapSlice = -1;
			m_viewMode = WorldViewMode::WorldViewMode_Default;
			m_xenonHdrColorScale = 1.f;
			m_xenonHdrColorScaleFactor = 0.05f;
			m_skyEnvmapFilterWidth = 1.f;
			m_skyEnvmapResolution = 128;
			m_drawDebugSkyEnvmapMipLevel = 0;
			m_skyEnvmapFilterMode = MipmapFilterMode::MipmapFilterMode_Poisson13Clamped;
			m_skyEnvmapSidesPerFrameCount = 1;
			m_dynamicEnvmapFilterWidth = 1.f;
			m_dynamicEnvmapResolution = 256;
			m_drawDebugDynamicEnvmapMipLevel = 0;
			m_dynamicEnvmapFilterMode = MipmapFilterMode::MipmapFilterMode_Poisson13Clamped;
			m_hudTextureWidth = 512;
			m_hudTextureHeight = 512;
			m_shadowmapsEnable = true;
			m_transparencyShadowmapsEnable = false;
			m_transparencyShadowmapsHalfRes = false;
			m_shadowmapFixedMovementEnable = true;
			m_shadowmapFixedDepthEnable = false;
			m_shadowmapViewDistanceScaleEnable = true;
			m_shadowmapCullVolumeEnable = false;
			m_shadowmapAccumEnable = true;
			m_shadowmapAccumBilinearEnable = true;
			m_shadowmapTransitionBlendEnable = true;
			m_ps3ShadowmapTilingEnable = true;
			m_ps3Shadowmap16BitEnable = true;
			m_ps3SpotLightShadowmap16BitEnable = true;
			m_dxShadowmap16BitEnable = true;
			m_dxSpotLightShadowmap16BitEnable = true;
			m_applyShadowmapsEnable = true;
			m_generateShadowmapsEnable = true;
			m_simpleShadowmapsEnable = false;
			m_emitterShadowingBlendToggle = false;
			m_emitterShadowingManySamplesToggle = false;
			m_dxLinearDepth32BitFormatEnable = true;
			m_dxDepthBuffer32BitEnable = false;
			m_motionBlurEnable = false;
			m_motionBlurForceOn = false;
			m_motionBlurOptimalStableVelocityFormula = true;
			m_motionBlurStencilPassEnable = false;
			m_motionBlurGeometryPassEnable = true;
			m_motionBlurBackgroundPassEnable = true;
			m_motionBlurCenteredEnable = false;
			m_drawDebugMultisampleClassify = false;
			m_drawTransparent = true;
			m_drawTransparentDecal = true;
			m_enable = true;
			m_hdrEnable = true;
			m_readOnlyDepthEnable = true;
			m_consoleRenderTargetPoolSharingEnable = true;
			m_ps3RenderTargetPoolGBufferOffsetEnable = false;
			m_fastHdrEnable = false;
			m_xenonFloatDepthBufferEnable = true;
			m_ps3HdrClearEnable = false;
			m_ps3TilingEnable = true;
			m_ps3ZCullEnable = true;
			m_ps3SCullEnable = true;
			m_ps3ColorCompressionEnable = false;
			m_ps3TiledHalfTargetEnable = true;
			m_ps3TiledSSAOTargetsEnable = false;
			m_finalPostEnable = true;
			m_outputGammaCorrectionEnable = true;
			m_screenEffectEnable = true;
			m_drawLightSources = false;
			m_drawSolidBoundingBoxes = false;
			m_drawLineBoundingBoxes = false;
			m_drawBoundingSpheres = false;
			m_drawFrustums = false;
			m_drawDebugShadowmaps = false;
			m_drawDebugSpotLightShadowmaps = false;
			m_drawDebugSkyEnvmap = false;
			m_drawDebugVelocityBuffer = false;
			m_drawDebugZBufferEnable = false;
			m_drawDebugHalfResEnvironment = false;
			m_drawDebugDistortion = false;
			m_drawDebugVisibleEntityTypes = false;
			m_drawDebugSkyTextures = false;
			m_drawDebugMarschnerTextures = false;
			m_drawDebugDof = false;
			m_drawDebugDofFullscreen = false;
			m_drawDebugHalfResHdrTargets = false;
			m_wireframeEnable = false;
			m_zPassEnable = true;
			m_occluderMeshZPrepassEnable = false;
			m_occluderMeshZPrepassDebugEnable = false;
			m_halfResEnable = true;
			m_forceFullResEnable = false;
			m_halfResLensFlaresEnable = true;
			m_foregroundEnable = true;
			m_foregroundDepthClearEnable = true;
			m_foregroundZPassEnable = true;
			m_foregroundTransparentEnable = true;
			m_bilateralHalfResCompositeEnable = true;
			m_tiledHalfResCompositeEnable = true;
			m_tiledHalfResStencilOccludersEnable = true;
			m_skyEnable = true;
			m_skyFogEnable = true;
			m_skyHeightFogEnable = true;
			m_skyForwardScatteringEnable = true;
			m_distortionEnable = true;
			m_distortionHalfResEnable = true;
			m_distortion8BitEnable = false;
			m_distortionTilingEnable = true;
			m_staticEnvmapEnable = true;
			m_customEnvmapEnable = true;
			m_customEnvmapMipmapClampEnable = false;
			m_skyEnvmapEnable = true;
			m_skyEnvmapMipmapGenEnable = true;
			m_skyEnvmapUpdateEnable = true;
			m_skyEnvmapForceUpdateEnable = false;
			m_skyEnvmapUse8BitTexture = true;
			m_dynamicEnvmapEnable = false;
			m_dynamicEnvmapMipmapGenEnable = true;
			m_drawDebugDynamicEnvmap = false;
			m_hairCoverageEnable = false;
			m_setupJobEnable = true;
			m_finishSyncJobsFirstEnable = false;
			m_prepareDispatchListJobEnable = true;
		};

		float m_cullScreenAreaScale; // 0x10 (16)
		float m_viewportScale; // 0x14 (20)
		Vec3 m_motionBlurClearColor; // 0x20 (32)
		Vec3 m_dynamicEnvmapDefaultPosition; // 0x30 (48)
		float m_shadowViewportScale; // 0x40 (64)
		float m_shadowmapMinFov; // 0x44 (68)
		float m_shadowmapSizeZScale; // 0x48 (72)
		u32 m_shadowmapResolution; // 0x4C (76)
		u32 m_shadowmapQuality; // 0x50 (80)
		float m_shadowmapPoissonFilterScale; // 0x54 (84)
		u32 m_shadowmapSliceCount; // 0x58 (88)
		float m_shadowmapSliceSchemeWeight; // 0x5C (92)
		float m_shadowmapFirstSliceScale; // 0x60 (96)
		float m_shadowmapViewDistance; // 0x64 (100)
		float m_shadowmapExtrusionLength; // 0x68 (104)
		float m_shadowmapTransitionBlendAmount; // 0x6C (108)
		float m_motionBlurScale; // 0x70 (112)
		float m_motionBlurFixedShutterTime; // 0x74 (116)
		float m_motionBlurMax; // 0x78 (120)
		float m_motionBlurRadialBlurMax; // 0x7C (124)
		float m_motionBlurNoiseScale; // 0x80 (128)
		u32 m_motionBlurQuality; // 0x84 (132)
		u32 m_motionBlurDebugMode; // 0x88 (136)
		u32 m_motionBlurMaxSampleCount; // 0x8C (140)
		float m_forceMotionBlurDepthCutoff; // 0x90 (144)
		float m_forceMotionBlurCutoffGradientScale; // 0x94 (148)
		float m_motionBlurDepthCheckThreshold; // 0x98 (152)
		float m_motionBlurDepthCheckMaxDistance; // 0x9C (156)
		u32 m_multisampleCount; // 0xA0 (160)
		float m_multisampleThreshold; // 0xA4 (164)
		s32 m_onlyShadowmapSlice; // 0xA8 (168)
		WorldViewMode m_viewMode; // 0xAC (172)
		float m_xenonHdrColorScale; // 0xB0 (176)
		float m_xenonHdrColorScaleFactor; // 0xB4 (180)
		float m_skyEnvmapFilterWidth; // 0xB8 (184)
		u32 m_skyEnvmapResolution; // 0xBC (188)
		s32 m_drawDebugSkyEnvmapMipLevel; // 0xC0 (192)
		MipmapFilterMode m_skyEnvmapFilterMode; // 0xC4 (196)
		u32 m_skyEnvmapSidesPerFrameCount; // 0xC8 (200)
		float m_dynamicEnvmapFilterWidth; // 0xCC (204)
		u32 m_dynamicEnvmapResolution; // 0xD0 (208)
		s32 m_drawDebugDynamicEnvmapMipLevel; // 0xD4 (212)
		MipmapFilterMode m_dynamicEnvmapFilterMode; // 0xD8 (216)
		u32 m_hudTextureWidth; // 0xDC (220)
		u32 m_hudTextureHeight; // 0xE0 (224)
		bool m_shadowmapsEnable; // 0xE4 (228)
		bool m_transparencyShadowmapsEnable; // 0xE5 (229)
		bool m_transparencyShadowmapsHalfRes; // 0xE6 (230)
		bool m_shadowmapFixedMovementEnable; // 0xE7 (231)
		bool m_shadowmapFixedDepthEnable; // 0xE8 (232)
		bool m_shadowmapViewDistanceScaleEnable; // 0xE9 (233)
		bool m_shadowmapCullVolumeEnable; // 0xEA (234)
		bool m_shadowmapAccumEnable; // 0xEB (235)
		bool m_shadowmapAccumBilinearEnable; // 0xEC (236)
		bool m_shadowmapTransitionBlendEnable; // 0xED (237)
		bool m_ps3ShadowmapTilingEnable; // 0xEE (238)
		bool m_ps3Shadowmap16BitEnable; // 0xEF (239)
		bool m_ps3SpotLightShadowmap16BitEnable; // 0xF0 (240)
		bool m_dxShadowmap16BitEnable; // 0xF1 (241)
		bool m_dxSpotLightShadowmap16BitEnable; // 0xF2 (242)
		bool m_applyShadowmapsEnable; // 0xF3 (243)
		bool m_generateShadowmapsEnable; // 0xF4 (244)
		bool m_simpleShadowmapsEnable; // 0xF5 (245)
		bool m_emitterShadowingBlendToggle; // 0xF6 (246)
		bool m_emitterShadowingManySamplesToggle; // 0xF7 (247)
		bool m_dxLinearDepth32BitFormatEnable; // 0xF8 (248)
		bool m_dxDepthBuffer32BitEnable; // 0xF9 (249)
		bool m_motionBlurEnable; // 0xFA (250)
		bool m_motionBlurForceOn; // 0xFB (251)
		bool m_motionBlurOptimalStableVelocityFormula; // 0xFC (252)
		bool m_motionBlurStencilPassEnable; // 0xFD (253)
		bool m_motionBlurGeometryPassEnable; // 0xFE (254)
		bool m_motionBlurBackgroundPassEnable; // 0xFF (255)
		bool m_motionBlurCenteredEnable; // 0x100 (256)
		bool m_drawDebugMultisampleClassify; // 0x101 (257)
		bool m_drawTransparent; // 0x102 (258)
		bool m_drawTransparentDecal; // 0x103 (259)
		bool m_enable; // 0x104 (260)
		bool m_hdrEnable; // 0x105 (261)
		bool m_readOnlyDepthEnable; // 0x106 (262)
		bool m_consoleRenderTargetPoolSharingEnable; // 0x107 (263)
		bool m_ps3RenderTargetPoolGBufferOffsetEnable; // 0x108 (264)
		bool m_fastHdrEnable; // 0x109 (265)
		bool m_xenonFloatDepthBufferEnable; // 0x10A (266)
		bool m_ps3HdrClearEnable; // 0x10B (267)
		bool m_ps3TilingEnable; // 0x10C (268)
		bool m_ps3ZCullEnable; // 0x10D (269)
		bool m_ps3SCullEnable; // 0x10E (270)
		bool m_ps3ColorCompressionEnable; // 0x10F (271)
		bool m_ps3TiledHalfTargetEnable; // 0x110 (272)
		bool m_ps3TiledSSAOTargetsEnable; // 0x111 (273)
		bool m_finalPostEnable; // 0x112 (274)
		bool m_outputGammaCorrectionEnable; // 0x113 (275)
		bool m_screenEffectEnable; // 0x114 (276)
		bool m_drawLightSources; // 0x115 (277)
		bool m_drawSolidBoundingBoxes; // 0x116 (278)
		bool m_drawLineBoundingBoxes; // 0x117 (279)
		bool m_drawBoundingSpheres; // 0x118 (280)
		bool m_drawFrustums; // 0x119 (281)
		bool m_drawDebugShadowmaps; // 0x11A (282)
		bool m_drawDebugSpotLightShadowmaps; // 0x11B (283)
		bool m_drawDebugSkyEnvmap; // 0x11C (284)
		bool m_drawDebugVelocityBuffer; // 0x11D (285)
		bool m_drawDebugZBufferEnable; // 0x11E (286)
		bool m_drawDebugHalfResEnvironment; // 0x11F (287)
		bool m_drawDebugDistortion; // 0x120 (288)
		bool m_drawDebugVisibleEntityTypes; // 0x121 (289)
		bool m_drawDebugSkyTextures; // 0x122 (290)
		bool m_drawDebugMarschnerTextures; // 0x123 (291)
		bool m_drawDebugDof; // 0x124 (292)
		bool m_drawDebugDofFullscreen; // 0x125 (293)
		bool m_drawDebugHalfResHdrTargets; // 0x126 (294)
		bool m_wireframeEnable; // 0x127 (295)
		bool m_zPassEnable; // 0x128 (296)
		bool m_occluderMeshZPrepassEnable; // 0x129 (297)
		bool m_occluderMeshZPrepassDebugEnable; // 0x12A (298)
		bool m_halfResEnable; // 0x12B (299)
		bool m_forceFullResEnable; // 0x12C (300)
		bool m_halfResLensFlaresEnable; // 0x12D (301)
		bool m_foregroundEnable; // 0x12E (302)
		bool m_foregroundDepthClearEnable; // 0x12F (303)
		bool m_foregroundZPassEnable; // 0x130 (304)
		bool m_foregroundTransparentEnable; // 0x131 (305)
		bool m_bilateralHalfResCompositeEnable; // 0x132 (306)
		bool m_tiledHalfResCompositeEnable; // 0x133 (307)
		bool m_tiledHalfResStencilOccludersEnable; // 0x134 (308)
		bool m_skyEnable; // 0x135 (309)
		bool m_skyFogEnable; // 0x136 (310)
		bool m_skyHeightFogEnable; // 0x137 (311)
		bool m_skyForwardScatteringEnable; // 0x138 (312)
		bool m_distortionEnable; // 0x139 (313)
		bool m_distortionHalfResEnable; // 0x13A (314)
		bool m_distortion8BitEnable; // 0x13B (315)
		bool m_distortionTilingEnable; // 0x13C (316)
		bool m_staticEnvmapEnable; // 0x13D (317)
		bool m_customEnvmapEnable; // 0x13E (318)
		bool m_customEnvmapMipmapClampEnable; // 0x13F (319)
		bool m_skyEnvmapEnable; // 0x140 (320)
		bool m_skyEnvmapMipmapGenEnable; // 0x141 (321)
		bool m_skyEnvmapUpdateEnable; // 0x142 (322)
		bool m_skyEnvmapForceUpdateEnable; // 0x143 (323)
		bool m_skyEnvmapUse8BitTexture; // 0x144 (324)
		bool m_dynamicEnvmapEnable; // 0x145 (325)
		bool m_dynamicEnvmapMipmapGenEnable; // 0x146 (326)
		bool m_drawDebugDynamicEnvmap; // 0x147 (327)
		bool m_hairCoverageEnable; // 0x148 (328)
		bool m_setupJobEnable; // 0x149 (329)
		bool m_finishSyncJobsFirstEnable; // 0x14A (330)
		bool m_prepareDispatchListJobEnable; // 0x14B (331)
	}; // 0x150 (336)
}

