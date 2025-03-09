///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/BlurFilter.h>
#include <fb/BlurMethod.h>
#include <fb/DataContainer.h>
#include <fb/DofMethod.h>
#include <fb/DynamicAOMethod.h>
#include <fb/PostProcessDebugMode.h>
#include <fb/Vec2.h>
#include <fb/Vec3.h>
#include <fb/Vec4.h>

namespace fb {
	class GlobalPostProcessSettings : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("GlobalPostProcessSettings"); }
		virtual ~GlobalPostProcessSettings() override {}
		GlobalPostProcessSettings() {
			m_debugMode = PostProcessDebugMode::PpdmDefault;
			m_debugModeStep = 0;
			m_forceBloomScale = Vec3(-1.f, -1.f, -1.f);
			m_forceVignetteColor = Vec4(-1.f, -1.f, -1.f, -1.f);
			m_filmGrainColorScale = Vec3(0.005f, 0.005f, 0.005f);
			m_brightness = Vec3(1.f, 1.f, 1.f);
			m_contrast = Vec3(1.f, 1.f, 1.f);
			m_saturation = Vec3(1.f, 1.f, 1.f);
			m_bloomBlurFilter = BlurFilter::BfGaussian15Pixels;
			m_bloomBlurIterationCount = 1;
			m_ldrBloomRange = 0.05f;
			m_forceMiddleGray = -1.f;
			m_bloomPyramidLevelCount = 2;
			m_bloomPyramidFinalLevel = 0;
			m_bloomPyramidAttenuation = 0.5f;
			m_downsampleAverageStartMipmap = 1;
			m_ps3TiledLdrMipmapCount = 2;
			m_ps3TiledFloatMipmapCount = 2;
			m_ps3TiledBloomMipmapCount = 3;
			m_forceExposure = -1.f;
			m_forceDofEnable = -1;
			m_forceDofBlurFactor = -1.f;
			m_forceDofBlurAdd = -1.f;
			m_forceDofFocusDistance = -1.f;
			m_forceSimpleDofNearStart = -1.f;
			m_forceSimpleDofNearEnd = -1.f;
			m_forceSimpleDofFarStart = -1.f;
			m_forceSimpleDofFarEnd = -1.f;
			m_forceSimpleDofBlurMax = -1.f;
			m_forceSpriteDofNearStart = -1.f;
			m_forceSpriteDofNearEnd = -1.f;
			m_forceSpriteDofFarStart = -1.f;
			m_forceSpriteDofFarEnd = -1.f;
			m_forceSpriteDofBlurMax = -1.f;
			m_forceVignetteScale = Vec2(-1.f, -1.f);
			m_forceVignetteExponent = -1.f;
			m_forceTonemapMethod = -1;
			m_forceChromostereopsisEnable = -1;
			m_forceChromostereopsisOffset = -1;
			m_forceChromostereopsisScale = -1.f;
			m_filmGrainTextureScale = Vec2(1.f, 1.f);
			m_lensScopeColorScale = 6.f;
			m_hue = 0.f;
			m_uiBrightnessNorm = 0.5f;
			m_userBrightnessMin = 0.7f;
			m_userBrightnessMax = 1.3f;
			m_userBrightnessAddScale = 0.05f;
			m_userBrightnessMulScale = 1.f;
			m_lutGammaR = 1.f;
			m_lutGammaG = 1.f;
			m_lutGammaB = 1.f;
			m_lutGammaCurbOffset = 0.f;
			m_dofMethod = DofMethod::DofMethod_Gaussian;
			m_blurMethod = BlurMethod::BlurMethod_Gaussian;
			m_spriteDofMinRadiusLayer1 = 33.f;
			m_spriteDofMinradiusLayer2 = 33.f;
			m_spriteDofMergeColorThreshold = 0.2f;
			m_spriteDofMergeRadiusThreshold = 1.f;
			m_spriteDofDepthDiscontinuityThreshold = 0.15f;
			m_spriteDofActiveLayer = 7;
			m_spriteDofInfocusMultiplier = 1.f;
			m_spriteDofMaxBlurScale = 0.059259f;
			m_spriteDofEnergyScaler = 1.f;
			m_subSurfaceScatteringSampleCount = 8;
			m_dynamicAOMethod = DynamicAOMethod::DynamicAOMethod_HBAO;
			m_ironsightsDofResolutionFactor = 2;
			m_ironsightsBlurFilter = BlurFilter::BfGaussian7Pixels;
			m_ironsightsBlurFilter720p = BlurFilter::BfGaussian5Pixels;
			m_ironsightsHDRCompression = 1.f;
			m_ironsightsCoCScale = 3.5f;
			m_overrideIronsightsHipFade = 1.f;
			m_overrideIronsightsStartFade = 0.5f;
			m_overrideIronsightsFocalDistance = 1.5f;
			m_overrideIronsightsDofCircleDistance = 0.35f;
			m_hbaoRandomDirVariationCount = 1;
			m_hbaoQuality = 1;
			m_hbaoStepCount = 3.f;
			m_hbaoDirCount = 6.f;
			m_hbaoRandomTextureWidth = 4;
			m_hbaoMaxFootprintRadius = 0.05f;
			m_hbaoBilateralBlurRadius = 8;
			m_hbaoBilateralBlurSharpness = 8.f;
			m_hbaoTemporalFilterThreshold = 0.1f;
			m_hbaoTemporalFilterThreshold2 = 0.05f;
			m_hbaoTemporalFilterMaxNumFrames = 8;
			m_hbaoTemporalFilterDebugMode = 0;
			m_hbaoGaussianBlurSize = BlurFilter::BfGaussian9Pixels;
			m_hbaoForceVendor = -1;
			m_ps3EdgeMlaaThresholdBase = 10;
			m_ps3EdgeMlaaThresholdFactor = 89;
			m_ps3EdgeMlaaAbsoluteThreshold = 32;
			m_ps3EdgeMlaaJobCount = 5;
			m_ps3EdgeMlaaJobPriority = 128;
			m_hdrBlurEnable = false;
			m_hdrBloomEnable = true;
			m_bloomFastHdrEnable = true;
			m_ldr16BitBloomEnable = true;
			m_exposureClampEnable = true;
			m_directExposureEnable = false;
			m_drawDebugInfo = false;
			m_blurEnable = true;
			m_quarterDownsamplingEnable = false;
			m_blurBlendEnable = false;
			m_bloomEnable = true;
			m_bloomBlurEnable = true;
			m_bloomQuarterResEnable = true;
			m_bloomPyramidEnable = true;
			m_downsampleLogAverageEnable = true;
			m_downsampleBeforeBlurEnable = true;
			m_ps3CompressedRenderTargetsEnable = false;
			m_vignetteEnable = true;
			m_colorGradingEnable = true;
			m_colorTransformEnable = true;
			m_colorGradingForceUpdateAlways = false;
			m_filmGrainEnable = true;
			m_filmGrainLinearFilteringEnable = false;
			m_filmGrainRandomEnable = false;
			m_lensScopeEnable = true;
			m_userBrightnessLUTEnable = true;
			m_drawDebugUserBrightnessLUT = false;
			m_spriteDofEnable = false;
			m_spriteDofMergeEnable = true;
			m_spriteDofDepthFilterEnable = true;
			m_spriteDofBuffer32bitEnable = false;
			m_spriteDofHalfResolutionEnable = true;
			m_spriteDofInstancingEnable = true;
			m_dynamicAOEnable = true;
			m_ssaoBlurEnable = true;
			m_ironsightsDofEnable = false;
			m_forceIronsightsDofActive = false;
			m_ironsightsDofShareBloomDownsample = true;
			m_overrideIronsightsDofParams = false;
			m_overrideIronsightsDofCircleBlur = false;
			m_forceLensScopeActive = false;
			m_hbaoHalfResEnable = true;
			m_hbaoHalfResDepthEnable = true;
			m_hbaoVectorizedEnable = true;
			m_hbaoBilateralBlurEnable = true;
			m_hbaoBilateralBlurCsEnable = false;
			m_hbaoTemporalFilterEnable = true;
			m_hbaoGaussianBlurEnable = false;
			m_hbaoGaussianBlurHalfResEnable = true;
			m_ps3EdgeMlaaEnable = false;
			m_ps3EdgeMlaaCopyOnly = false;
			m_ps3EdgeMlaaShowEdges = false;
			m_ps3EdgeMlaaRelativeEdgeDetection = true;
			m_ps3EdgeMlaaGpuBlockEnable = true;
		};

		PostProcessDebugMode m_debugMode; // 0x10 (16)
		u32 m_debugModeStep; // 0x14 (20)
		Vec3 m_forceBloomScale; // 0x20 (32)
		Vec4 m_forceVignetteColor; // 0x30 (48)
		Vec3 m_filmGrainColorScale; // 0x40 (64)
		Vec3 m_brightness; // 0x50 (80)
		Vec3 m_contrast; // 0x60 (96)
		Vec3 m_saturation; // 0x70 (112)
		BlurFilter m_bloomBlurFilter; // 0x80 (128)
		u32 m_bloomBlurIterationCount; // 0x84 (132)
		float m_ldrBloomRange; // 0x88 (136)
		float m_forceMiddleGray; // 0x8C (140)
		u32 m_bloomPyramidLevelCount; // 0x90 (144)
		u32 m_bloomPyramidFinalLevel; // 0x94 (148)
		float m_bloomPyramidAttenuation; // 0x98 (152)
		u32 m_downsampleAverageStartMipmap; // 0x9C (156)
		u32 m_ps3TiledLdrMipmapCount; // 0xA0 (160)
		u32 m_ps3TiledFloatMipmapCount; // 0xA4 (164)
		u32 m_ps3TiledBloomMipmapCount; // 0xA8 (168)
		float m_forceExposure; // 0xAC (172)
		s32 m_forceDofEnable; // 0xB0 (176)
		float m_forceDofBlurFactor; // 0xB4 (180)
		float m_forceDofBlurAdd; // 0xB8 (184)
		float m_forceDofFocusDistance; // 0xBC (188)
		float m_forceSimpleDofNearStart; // 0xC0 (192)
		float m_forceSimpleDofNearEnd; // 0xC4 (196)
		float m_forceSimpleDofFarStart; // 0xC8 (200)
		float m_forceSimpleDofFarEnd; // 0xCC (204)
		float m_forceSimpleDofBlurMax; // 0xD0 (208)
		float m_forceSpriteDofNearStart; // 0xD4 (212)
		float m_forceSpriteDofNearEnd; // 0xD8 (216)
		float m_forceSpriteDofFarStart; // 0xDC (220)
		float m_forceSpriteDofFarEnd; // 0xE0 (224)
		float m_forceSpriteDofBlurMax; // 0xE4 (228)
		Vec2 m_forceVignetteScale; // 0xE8 (232)
		float m_forceVignetteExponent; // 0xF0 (240)
		s32 m_forceTonemapMethod; // 0xF4 (244)
		s32 m_forceChromostereopsisEnable; // 0xF8 (248)
		s32 m_forceChromostereopsisOffset; // 0xFC (252)
		float m_forceChromostereopsisScale; // 0x100 (256)
		Vec2 m_filmGrainTextureScale; // 0x104 (260)
		float m_lensScopeColorScale; // 0x10C (268)
		float m_hue; // 0x110 (272)
		float m_uiBrightnessNorm; // 0x114 (276)
		float m_userBrightnessMin; // 0x118 (280)
		float m_userBrightnessMax; // 0x11C (284)
		float m_userBrightnessAddScale; // 0x120 (288)
		float m_userBrightnessMulScale; // 0x124 (292)
		float m_lutGammaR; // 0x128 (296)
		float m_lutGammaG; // 0x12C (300)
		float m_lutGammaB; // 0x130 (304)
		float m_lutGammaCurbOffset; // 0x134 (308)
		DofMethod m_dofMethod; // 0x138 (312)
		BlurMethod m_blurMethod; // 0x13C (316)
		float m_spriteDofMinRadiusLayer1; // 0x140 (320)
		float m_spriteDofMinradiusLayer2; // 0x144 (324)
		float m_spriteDofMergeColorThreshold; // 0x148 (328)
		float m_spriteDofMergeRadiusThreshold; // 0x14C (332)
		float m_spriteDofDepthDiscontinuityThreshold; // 0x150 (336)
		u32 m_spriteDofActiveLayer; // 0x154 (340)
		float m_spriteDofInfocusMultiplier; // 0x158 (344)
		float m_spriteDofMaxBlurScale; // 0x15C (348)
		float m_spriteDofEnergyScaler; // 0x160 (352)
		s32 m_subSurfaceScatteringSampleCount; // 0x164 (356)
		DynamicAOMethod m_dynamicAOMethod; // 0x168 (360)
		u32 m_ironsightsDofResolutionFactor; // 0x16C (364)
		BlurFilter m_ironsightsBlurFilter; // 0x170 (368)
		BlurFilter m_ironsightsBlurFilter720p; // 0x174 (372)
		float m_ironsightsHDRCompression; // 0x178 (376)
		float m_ironsightsCoCScale; // 0x17C (380)
		float m_overrideIronsightsHipFade; // 0x180 (384)
		float m_overrideIronsightsStartFade; // 0x184 (388)
		float m_overrideIronsightsFocalDistance; // 0x188 (392)
		float m_overrideIronsightsDofCircleDistance; // 0x18C (396)
		u32 m_hbaoRandomDirVariationCount; // 0x190 (400)
		u32 m_hbaoQuality; // 0x194 (404)
		float m_hbaoStepCount; // 0x198 (408)
		float m_hbaoDirCount; // 0x19C (412)
		u32 m_hbaoRandomTextureWidth; // 0x1A0 (416)
		float m_hbaoMaxFootprintRadius; // 0x1A4 (420)
		u32 m_hbaoBilateralBlurRadius; // 0x1A8 (424)
		float m_hbaoBilateralBlurSharpness; // 0x1AC (428)
		float m_hbaoTemporalFilterThreshold; // 0x1B0 (432)
		float m_hbaoTemporalFilterThreshold2; // 0x1B4 (436)
		u32 m_hbaoTemporalFilterMaxNumFrames; // 0x1B8 (440)
		u32 m_hbaoTemporalFilterDebugMode; // 0x1BC (444)
		BlurFilter m_hbaoGaussianBlurSize; // 0x1C0 (448)
		s32 m_hbaoForceVendor; // 0x1C4 (452)
		u32 m_ps3EdgeMlaaThresholdBase; // 0x1C8 (456)
		u32 m_ps3EdgeMlaaThresholdFactor; // 0x1CC (460)
		u32 m_ps3EdgeMlaaAbsoluteThreshold; // 0x1D0 (464)
		u32 m_ps3EdgeMlaaJobCount; // 0x1D4 (468)
		u32 m_ps3EdgeMlaaJobPriority; // 0x1D8 (472)
		bool m_hdrBlurEnable; // 0x1DC (476)
		bool m_hdrBloomEnable; // 0x1DD (477)
		bool m_bloomFastHdrEnable; // 0x1DE (478)
		bool m_ldr16BitBloomEnable; // 0x1DF (479)
		bool m_exposureClampEnable; // 0x1E0 (480)
		bool m_directExposureEnable; // 0x1E1 (481)
		bool m_drawDebugInfo; // 0x1E2 (482)
		bool m_blurEnable; // 0x1E3 (483)
		bool m_quarterDownsamplingEnable; // 0x1E4 (484)
		bool m_blurBlendEnable; // 0x1E5 (485)
		bool m_bloomEnable; // 0x1E6 (486)
		bool m_bloomBlurEnable; // 0x1E7 (487)
		bool m_bloomQuarterResEnable; // 0x1E8 (488)
		bool m_bloomPyramidEnable; // 0x1E9 (489)
		bool m_downsampleLogAverageEnable; // 0x1EA (490)
		bool m_downsampleBeforeBlurEnable; // 0x1EB (491)
		bool m_ps3CompressedRenderTargetsEnable; // 0x1EC (492)
		bool m_vignetteEnable; // 0x1ED (493)
		bool m_colorGradingEnable; // 0x1EE (494)
		bool m_colorTransformEnable; // 0x1EF (495)
		bool m_colorGradingForceUpdateAlways; // 0x1F0 (496)
		bool m_filmGrainEnable; // 0x1F1 (497)
		bool m_filmGrainLinearFilteringEnable; // 0x1F2 (498)
		bool m_filmGrainRandomEnable; // 0x1F3 (499)
		bool m_lensScopeEnable; // 0x1F4 (500)
		bool m_userBrightnessLUTEnable; // 0x1F5 (501)
		bool m_drawDebugUserBrightnessLUT; // 0x1F6 (502)
		bool m_spriteDofEnable; // 0x1F7 (503)
		bool m_spriteDofMergeEnable; // 0x1F8 (504)
		bool m_spriteDofDepthFilterEnable; // 0x1F9 (505)
		bool m_spriteDofBuffer32bitEnable; // 0x1FA (506)
		bool m_spriteDofHalfResolutionEnable; // 0x1FB (507)
		bool m_spriteDofInstancingEnable; // 0x1FC (508)
		bool m_dynamicAOEnable; // 0x1FD (509)
		bool m_ssaoBlurEnable; // 0x1FE (510)
		bool m_ironsightsDofEnable; // 0x1FF (511)
		bool m_forceIronsightsDofActive; // 0x200 (512)
		bool m_ironsightsDofShareBloomDownsample; // 0x201 (513)
		bool m_overrideIronsightsDofParams; // 0x202 (514)
		bool m_overrideIronsightsDofCircleBlur; // 0x203 (515)
		bool m_forceLensScopeActive; // 0x204 (516)
		bool m_hbaoHalfResEnable; // 0x205 (517)
		bool m_hbaoHalfResDepthEnable; // 0x206 (518)
		bool m_hbaoVectorizedEnable; // 0x207 (519)
		bool m_hbaoBilateralBlurEnable; // 0x208 (520)
		bool m_hbaoBilateralBlurCsEnable; // 0x209 (521)
		bool m_hbaoTemporalFilterEnable; // 0x20A (522)
		bool m_hbaoGaussianBlurEnable; // 0x20B (523)
		bool m_hbaoGaussianBlurHalfResEnable; // 0x20C (524)
		bool m_ps3EdgeMlaaEnable; // 0x20D (525)
		bool m_ps3EdgeMlaaCopyOnly; // 0x20E (526)
		bool m_ps3EdgeMlaaShowEdges; // 0x20F (527)
		bool m_ps3EdgeMlaaRelativeEdgeDetection; // 0x210 (528)
		bool m_ps3EdgeMlaaGpuBlockEnable; // 0x211 (529)
	}; // 0x220 (544)
}

