///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class GameRenderSettings : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("GameRenderSettings"); }
		virtual ~GameRenderSettings() override {}
		GameRenderSettings() {
			m_inactiveSkipFrameCount = 0;
			m_resolutionScale = 1.f;
			m_mantleEnable = -1;
			m_xenonRingBufferSize = 2097152;
			m_xenonLinearFrameBufferSize = 204800;
			m_xenonPresentImmediateThreshold = 100;
			m_xenonGammaRampType = 1;
			m_ps3VideoGamma = 1.f;
			m_ps3FrameMainBufferSize = 0;
			m_ps3FrameLocalBufferSize = 0;
			m_ps3VSyncMethod = 1;
			m_cameraCutMaxFrameTranslation = 2.f;
			m_nearPlane = 0.1f;
			m_viewDistance = 20000.f;
			m_forceFov = -1.f;
			m_fovMultiplier = 1.f;
			m_forceOrthoViewSize = 10.f;
			m_edgeModelScreenAreaScale = 1.f;
			m_edgeModelViewDistance = 50.f;
			m_edgeModelForceLod = -1;
			m_edgeModelLodScale = 1.f;
			m_edgeModelMaxVisibleInstanceCount = 2048;
			m_staticModelPartOcclusionMaxScreenArea = 0.07f;
			m_staticModelCullJobCount = 6;
			m_splitScreenTestViewCount = 1;
			m_splitScreenTestCase = 0;
			m_forceBlurAmount = -1.f;
			m_forceWorldFadeAmount = -1.f;
			m_stereoCrosshairMaxHitDepth = 100.f;
			m_stereoCrosshairRadius = 0.1f;
			m_stereoCrosshairDampingFactor = 0.1f;
			m_enable = true;
			m_nullRendererEnable = false;
			m_jobEnable = true;
			m_buildJobSyncEnable = false;
			m_earlyGpuSyncEnable = false;
			m_drawDebugInfo = false;
			m_drawScreenInfo = false;
			m_fullscreen = false;
			m_forceVSyncEnable = false;
			m_movieVSyncEnable = true;
			m_vSyncFlashTestEnable = false;
			m_xenonBufferTwoFramesEnable = true;
			m_xenonRes1280x704Enable = true;
			m_ps3LinearFrameCmdBufEnable = true;
			m_ps3CellMemoryTexturesEnable = false;
			m_gcmHudEnable = false;
			m_ps3Res1280x704Enable = true;
			m_gen4bColorRemap = true;
			m_gpuTextureCompressorEnable = true;
			m_emittersEnable = true;
			m_entityRenderEnable = true;
			m_debugRendererEnable = true;
			m_debugRenderServiceEnable = false;
			m_initialClearEnable = false;
			m_gpuProfilerEnable = true;
			m_forceOrthoViewEnable = false;
			m_forceSquareOrthoView = false;
			m_ignoreVisualEnvCameraParams = false;
			m_destructionVolumeDrawEnable = true;
			m_edgeModelsEnable = true;
			m_edgeModelCastShadowsEnable = false;
			m_edgeModelDepthBiasEnable = false;
			m_edgeModelShadowDepthBiasEnable = false;
			m_edgeModelSpuInstancingEnable = false;
			m_edgeModelUseMainLodEnable = false;
			m_edgeModelUseLodBox = true;
			m_edgeModelCullEnable = true;
			m_edgeModelFrustumCullEnable = true;
			m_edgeModelOcclusionCullEnable = true;
			m_edgeModelDrawBoxes = false;
			m_edgeModelDrawStats = false;
			m_staticModelEnable = true;
			m_staticModelMeshesEnable = true;
			m_staticModelZPassEnable = false;
			m_staticModelPartCullEnable = false;
			m_staticModelPartFrustumCullEnable = true;
			m_staticModelPartOcclusionCullEnable = true;
			m_staticModelPartShadowCullEnable = false;
			m_staticModelDrawBoxes = false;
			m_staticModelDrawStats = false;
			m_staticModelCullSpuJobEnable = true;
			m_staticModelSurfaceShaderTerrainAccessEnable = true;
			m_lockView = false;
			m_resetLockedView = false;
			m_secondaryStreamingViewEnable = true;
			m_fadeEnable = true;
			m_fadeWaitingEnable = true;
			m_blurEnable = true;
		};

		u32 m_inactiveSkipFrameCount; // 0x10 (16)
		float m_resolutionScale; // 0x14 (20)
		s32 m_mantleEnable; // 0x18 (24)
		u32 m_xenonRingBufferSize; // 0x1C (28)
		u32 m_xenonLinearFrameBufferSize; // 0x20 (32)
		u32 m_xenonPresentImmediateThreshold; // 0x24 (36)
		u32 m_xenonGammaRampType; // 0x28 (40)
		float m_ps3VideoGamma; // 0x2C (44)
		u32 m_ps3FrameMainBufferSize; // 0x30 (48)
		u32 m_ps3FrameLocalBufferSize; // 0x34 (52)
		u32 m_ps3VSyncMethod; // 0x38 (56)
		float m_cameraCutMaxFrameTranslation; // 0x3C (60)
		float m_nearPlane; // 0x40 (64)
		float m_viewDistance; // 0x44 (68)
		float m_forceFov; // 0x48 (72)
		float m_fovMultiplier; // 0x4C (76)
		float m_forceOrthoViewSize; // 0x50 (80)
		float m_edgeModelScreenAreaScale; // 0x54 (84)
		float m_edgeModelViewDistance; // 0x58 (88)
		s32 m_edgeModelForceLod; // 0x5C (92)
		float m_edgeModelLodScale; // 0x60 (96)
		u32 m_edgeModelMaxVisibleInstanceCount; // 0x64 (100)
		float m_staticModelPartOcclusionMaxScreenArea; // 0x68 (104)
		u32 m_staticModelCullJobCount; // 0x6C (108)
		u32 m_splitScreenTestViewCount; // 0x70 (112)
		u32 m_splitScreenTestCase; // 0x74 (116)
		float m_forceBlurAmount; // 0x78 (120)
		float m_forceWorldFadeAmount; // 0x7C (124)
		float m_stereoCrosshairMaxHitDepth; // 0x80 (128)
		float m_stereoCrosshairRadius; // 0x84 (132)
		float m_stereoCrosshairDampingFactor; // 0x88 (136)
		bool m_enable; // 0x8C (140)
		bool m_nullRendererEnable; // 0x8D (141)
		bool m_jobEnable; // 0x8E (142)
		bool m_buildJobSyncEnable; // 0x8F (143)
		bool m_earlyGpuSyncEnable; // 0x90 (144)
		bool m_drawDebugInfo; // 0x91 (145)
		bool m_drawScreenInfo; // 0x92 (146)
		bool m_fullscreen; // 0x93 (147)
		bool m_forceVSyncEnable; // 0x94 (148)
		bool m_movieVSyncEnable; // 0x95 (149)
		bool m_vSyncFlashTestEnable; // 0x96 (150)
		bool m_xenonBufferTwoFramesEnable; // 0x97 (151)
		bool m_xenonRes1280x704Enable; // 0x98 (152)
		bool m_ps3LinearFrameCmdBufEnable; // 0x99 (153)
		bool m_ps3CellMemoryTexturesEnable; // 0x9A (154)
		bool m_gcmHudEnable; // 0x9B (155)
		bool m_ps3Res1280x704Enable; // 0x9C (156)
		bool m_gen4bColorRemap; // 0x9D (157)
		bool m_gpuTextureCompressorEnable; // 0x9E (158)
		bool m_emittersEnable; // 0x9F (159)
		bool m_entityRenderEnable; // 0xA0 (160)
		bool m_debugRendererEnable; // 0xA1 (161)
		bool m_debugRenderServiceEnable; // 0xA2 (162)
		bool m_initialClearEnable; // 0xA3 (163)
		bool m_gpuProfilerEnable; // 0xA4 (164)
		bool m_forceOrthoViewEnable; // 0xA5 (165)
		bool m_forceSquareOrthoView; // 0xA6 (166)
		bool m_ignoreVisualEnvCameraParams; // 0xA7 (167)
		bool m_destructionVolumeDrawEnable; // 0xA8 (168)
		bool m_edgeModelsEnable; // 0xA9 (169)
		bool m_edgeModelCastShadowsEnable; // 0xAA (170)
		bool m_edgeModelDepthBiasEnable; // 0xAB (171)
		bool m_edgeModelShadowDepthBiasEnable; // 0xAC (172)
		bool m_edgeModelSpuInstancingEnable; // 0xAD (173)
		bool m_edgeModelUseMainLodEnable; // 0xAE (174)
		bool m_edgeModelUseLodBox; // 0xAF (175)
		bool m_edgeModelCullEnable; // 0xB0 (176)
		bool m_edgeModelFrustumCullEnable; // 0xB1 (177)
		bool m_edgeModelOcclusionCullEnable; // 0xB2 (178)
		bool m_edgeModelDrawBoxes; // 0xB3 (179)
		bool m_edgeModelDrawStats; // 0xB4 (180)
		bool m_staticModelEnable; // 0xB5 (181)
		bool m_staticModelMeshesEnable; // 0xB6 (182)
		bool m_staticModelZPassEnable; // 0xB7 (183)
		bool m_staticModelPartCullEnable; // 0xB8 (184)
		bool m_staticModelPartFrustumCullEnable; // 0xB9 (185)
		bool m_staticModelPartOcclusionCullEnable; // 0xBA (186)
		bool m_staticModelPartShadowCullEnable; // 0xBB (187)
		bool m_staticModelDrawBoxes; // 0xBC (188)
		bool m_staticModelDrawStats; // 0xBD (189)
		bool m_staticModelCullSpuJobEnable; // 0xBE (190)
		bool m_staticModelSurfaceShaderTerrainAccessEnable; // 0xBF (191)
		bool m_lockView; // 0xC0 (192)
		bool m_resetLockedView; // 0xC1 (193)
		bool m_secondaryStreamingViewEnable; // 0xC2 (194)
		bool m_fadeEnable; // 0xC3 (195)
		bool m_fadeWaitingEnable; // 0xC4 (196)
		bool m_blurEnable; // 0xC5 (197)
	}; // 0xC8 (200)
}

