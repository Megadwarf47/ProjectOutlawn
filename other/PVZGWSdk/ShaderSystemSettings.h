///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/QualityLevel.h>
#include <fb/String.h>
#include <fb/Vec3.h>

namespace fb {
	class ShaderSystemSettings : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ShaderSystemSettings"); }
		virtual ~ShaderSystemSettings() override {}
		ShaderSystemSettings() {
			m_frameMemoryBufferSize = 3145728;
			m_shaderQualityLevel = QualityLevel::QualityLevel_Low;
			m_debugNonFiniteColor = Vec3(1.f, 0.f, 0.f);
			m_mipmapBias = 0.f;
			m_minMipmap = 0.f;
			m_maxMipmap = 16.f;
			m_forceMaxAnisotropy = -1;
			m_maxAnisotropyLow = 2;
			m_maxAnisotropyMedium = 2;
			m_maxAnisotropyHigh = 2;
			m_maxAnisotropyUltra = 2;
			m_xenonTrilinearThreshold = 3;
			m_drawCallMultiplier = 1;
			m_overdrawMaxLayerCount = 30;
			m_dxMaxInstructionCount = 250;
			m_distortionMaxValueScale = 0.15f;
			m_subSurfaceScatteringMaxWidth = 5.f;
			m_dispatchPrepareJobCount = -1;
			m_xenonDispatchJobCount = 12;
			m_xenonDispatchJobPriority = 0;
			m_xenonDispatchBlocksPerJob = 128;
			m_xenonDispatchMinJobBlockCount = 40;
			m_xenonDispatchOnlyJob = -1;
			m_xenonDispatchCmdBufferSegmentSize = 32768;
			m_xenonDispatchCmdBufferSize = 0;
			m_ps3GeometryJobCount = 6;
			m_ps3GeometryJobPriority = 255;
			m_ps3DispatchJobCount = 6;
			m_ps3DispatchJobPriority = 255;
			m_ps3DispatchOnlyJob = -1;
			m_ps3DispatchBlocksPerJob = 16;
			m_ps3ZCullInFrontLimit = 50;
			m_ps3ZCullBehindLimit = 2000;
			m_ps3MinMipmap = 0;
			m_ps3MaxMipmap = 12;
			m_ps3GeometryYieldGranularity = 1.f;
			m_ps3GeometryYieldAggressiveGranularity = 0.05f;
			m_ps3DispatchYieldGranularity = 1.f;
			m_ps3DispatchYieldAggressiveGranularity = 0.05f;
			m_maxInstanceCount = 0;
			m_dxVsFunctionConstantBufferSize = 512;
			m_dxPsFunctionConstantBufferSize = 92;
			m_dxVsExternalConstantBufferSize = 32;
			m_dxPsExternalConstantBufferSize = 64;
			m_dxDispatchJobMinBlockCount = 1;
			m_dxDispatchJobBlocksPerCommandList = 100;
			m_dxInstancingBufferMethod = 0;
			m_dxConstantBufferMethod = 0;
			m_orbisDispatchJobCount = -1;
			m_orbisDispatchJobMinBlockCount = 4;
			m_orbisDispatchJobBlockSize = 64;
			m_orbisDispatchYieldGranularity = 0.5f;
			m_mantleDispatchJobMinBlockCount = 4;
			m_mantleDispatchJobBlockSize = 64;
			m_flushEnable = true;
			m_dispatchDirectEnable = true;
			m_drawStats = false;
			m_drawAdvancedStats = false;
			m_drawZOnly = true;
			m_drawOpaque = true;
			m_drawOpaqueAlphaTest = true;
			m_drawOpaqueAlphaTestSimple = true;
			m_drawTransparent = true;
			m_drawTransparentDecal = true;
			m_drawTransparentDepth = true;
			m_drawInlineBlocks = true;
			m_drawStreamedTextureBlocks = true;
			m_drawNonStreamedTextureBlocks = true;
			m_drawInstancedBlocks = true;
			m_drawNonInstancedBlocks = true;
			m_drawTileClassifiedBlocks = true;
			m_tileClassificationEnable = true;
			m_onDemandBuildingEnable = false;
			m_onDemandPrimingEnable = true;
			m_onDemandMonitoringEnable = true;
			m_databaseLoadingEnable = true;
			m_alphaBlendEnable = true;
			m_forceDoubleSided = false;
			m_forcePointFiltering = false;
			m_zeroViewportEnable = false;
			m_depthEnable = true;
			m_depthWriteEnable = true;
			m_depthTestEnable = true;
			m_stencilEnable = true;
			m_clipPlanesEnable = true;
			m_singlePrimitiveEnable = false;
			m_drawCallEnable = true;
			m_pixBlockEventsEnable = true;
			m_shaderPixScopeEnable = false;
			m_gcmReplayMarkersEnable = false;
			m_sortBlocksEnable = true;
			m_simpleTexturesEnable = false;
			m_simpleTextureFilteringEnable = false;
			m_logEnable = false;
			m_singleFrameLogEnable = false;
			m_singleFrameLogOverwrite = false;
			m_singleFrameBlockLogEnable = false;
			m_externalConstantsEnable = true;
			m_simplePixelShaderEnable = false;
			m_simpleVertexShaderEnable = false;
			m_pseudoInstancingEnable = true;
			m_statesEnable = true;
			m_pixelConstantsEnable = true;
			m_vertexConstantsEnable = true;
			m_pixelConstantRedundancyCheckingEnable = true;
			m_vertexConstantRedundancyCheckingEnable = true;
			m_boneConstantOptimizationEnable = true;
			m_textureGammaCorrectionEnable = true;
			m_dispatchExecuteEnable = true;
			m_dispatchSetupJobEnable = true;
			m_dispatchPrepareBlockEnable = false;
			m_xenonDispatchJobEnable = true;
			m_xenonDispatchAsyncCmdBufEnable = true;
			m_xenonDispatchBlockOnCmdBufEnable = false;
			m_xenonHiZEnable = true;
			m_ps3PixelShaderRedundancyCheckingEnable = true;
			m_ps3PixelShaderHashStoreEnable = true;
			m_ps3DispatchPrepareSpuJobEnable = true;
			m_ps3DispatchSetupSpuJobEnable = true;
			m_ps3GeometryJobEnable = true;
			m_ps3GeometryJobWithoutDispatchJobEnable = false;
			m_ps3GeometryDebugRenderEnable = false;
			m_ps3DrawEdgeGeometryEnable = true;
			m_ps3DrawNonEdgeGeometryEnable = true;
			m_ps3TriangleCullEnable = true;
			m_ps3TriangleFrustumCullEnable = true;
			m_ps3TriangleBackfaceCullEnable = true;
			m_ps3TriangleCullZPassEnable = true;
			m_ps3TriangleCullDoubleSidedEnable = true;
			m_ps3TriangleCull1BoneSkinningEnable = true;
			m_ps3TriangleCull4BoneSkinningEnable = true;
			m_ps3TrianglePartCullEnable = true;
			m_ps3DrawBlockCullEnable = true;
			m_ps3PartitionFrustumCullEnable = true;
			m_ps3PartitionClipPlaneCullEnable = true;
			m_ps3PartitionVolumeCullEnable = true;
			m_ps3SpuInstancingEnable = true;
			m_ps3SpuClipPlaneRejectEnable = true;
			m_ps3SpuCullVolumesEnable = true;
			m_ps3DispatchJobEnable = true;
			m_ps3DispatchSpuBufferLinkingEnable = true;
			m_ps3DispatchFrameBlockEnable = false;
			m_ps3FrameGpuWaitEnable = true;
			m_ps3SCullEnable = true;
			m_ps3ZCullEnable = true;
			m_ps3TxpDemotionEnable = false;
			m_ps3CmdBufVertexShaderInlineEnable = false;
			m_ps3CmdBufClearEnable = false;
			m_ps3SpuYieldingEnable = true;
			m_multisampleEnable = true;
			m_parallelShaderLoadingEnable = true;
			m_dxTransparencySupersamplingEnable = false;
			m_dxSamplerStatesEnable = true;
			m_dxBatchedSamplerStatesEnable = false;
			m_dxBatchedTexturesEnable = false;
			m_dxDispatchJobEnable = false;
			m_dxDispatchAsync = true;
			m_dxNullContextEnable = false;
			m_orbisDispatchAsync = true;
			m_gen4aPlacementConstantBufferEnable = true;
			m_mantlePrimePipelinesEnable = true;
			m_mantleDispatchJobEnable = true;
			m_mantleDispatchAsyncEnable = true;
		};

		u32 m_frameMemoryBufferSize; // 0x10 (16)
		QualityLevel m_shaderQualityLevel; // 0x14 (20)
		Vec3 m_debugNonFiniteColor; // 0x20 (32)
		float m_mipmapBias; // 0x30 (48)
		float m_minMipmap; // 0x34 (52)
		float m_maxMipmap; // 0x38 (56)
		s32 m_forceMaxAnisotropy; // 0x3C (60)
		u32 m_maxAnisotropyLow; // 0x40 (64)
		u32 m_maxAnisotropyMedium; // 0x44 (68)
		u32 m_maxAnisotropyHigh; // 0x48 (72)
		u32 m_maxAnisotropyUltra; // 0x4C (76)
		u32 m_xenonTrilinearThreshold; // 0x50 (80)
		u32 m_drawCallMultiplier; // 0x54 (84)
		u32 m_overdrawMaxLayerCount; // 0x58 (88)
		u32 m_dxMaxInstructionCount; // 0x5C (92)
		float m_distortionMaxValueScale; // 0x60 (96)
		float m_subSurfaceScatteringMaxWidth; // 0x64 (100)
		s32 m_dispatchPrepareJobCount; // 0x68 (104)
		u32 m_xenonDispatchJobCount; // 0x6C (108)
		u32 m_xenonDispatchJobPriority; // 0x70 (112)
		u32 m_xenonDispatchBlocksPerJob; // 0x74 (116)
		u32 m_xenonDispatchMinJobBlockCount; // 0x78 (120)
		s32 m_xenonDispatchOnlyJob; // 0x7C (124)
		u32 m_xenonDispatchCmdBufferSegmentSize; // 0x80 (128)
		u32 m_xenonDispatchCmdBufferSize; // 0x84 (132)
		u32 m_ps3GeometryJobCount; // 0x88 (136)
		u32 m_ps3GeometryJobPriority; // 0x8C (140)
		u32 m_ps3DispatchJobCount; // 0x90 (144)
		u32 m_ps3DispatchJobPriority; // 0x94 (148)
		s32 m_ps3DispatchOnlyJob; // 0x98 (152)
		u32 m_ps3DispatchBlocksPerJob; // 0x9C (156)
		u32 m_ps3ZCullInFrontLimit; // 0xA0 (160)
		u32 m_ps3ZCullBehindLimit; // 0xA4 (164)
		u32 m_ps3MinMipmap; // 0xA8 (168)
		u32 m_ps3MaxMipmap; // 0xAC (172)
		float m_ps3GeometryYieldGranularity; // 0xB0 (176)
		float m_ps3GeometryYieldAggressiveGranularity; // 0xB4 (180)
		float m_ps3DispatchYieldGranularity; // 0xB8 (184)
		float m_ps3DispatchYieldAggressiveGranularity; // 0xBC (188)
		u32 m_maxInstanceCount; // 0xC0 (192)
		u32 m_dxVsFunctionConstantBufferSize; // 0xC4 (196)
		u32 m_dxPsFunctionConstantBufferSize; // 0xC8 (200)
		u32 m_dxVsExternalConstantBufferSize; // 0xCC (204)
		u32 m_dxPsExternalConstantBufferSize; // 0xD0 (208)
		u32 m_dxDispatchJobMinBlockCount; // 0xD4 (212)
		u32 m_dxDispatchJobBlocksPerCommandList; // 0xD8 (216)
		u32 m_dxInstancingBufferMethod; // 0xDC (220)
		u32 m_dxConstantBufferMethod; // 0xE0 (224)
		s32 m_orbisDispatchJobCount; // 0xE4 (228)
		u32 m_orbisDispatchJobMinBlockCount; // 0xE8 (232)
		u32 m_orbisDispatchJobBlockSize; // 0xEC (236)
		float m_orbisDispatchYieldGranularity; // 0xF0 (240)
		String m_orbisPm4DisasmDispatch; // 0xF8 (248)
		u32 m_mantleDispatchJobMinBlockCount; // 0x100 (256)
		u32 m_mantleDispatchJobBlockSize; // 0x104 (260)
		bool m_flushEnable; // 0x108 (264)
		bool m_dispatchDirectEnable; // 0x109 (265)
		bool m_drawStats; // 0x10A (266)
		bool m_drawAdvancedStats; // 0x10B (267)
		bool m_drawZOnly; // 0x10C (268)
		bool m_drawOpaque; // 0x10D (269)
		bool m_drawOpaqueAlphaTest; // 0x10E (270)
		bool m_drawOpaqueAlphaTestSimple; // 0x10F (271)
		bool m_drawTransparent; // 0x110 (272)
		bool m_drawTransparentDecal; // 0x111 (273)
		bool m_drawTransparentDepth; // 0x112 (274)
		bool m_drawInlineBlocks; // 0x113 (275)
		bool m_drawStreamedTextureBlocks; // 0x114 (276)
		bool m_drawNonStreamedTextureBlocks; // 0x115 (277)
		bool m_drawInstancedBlocks; // 0x116 (278)
		bool m_drawNonInstancedBlocks; // 0x117 (279)
		bool m_drawTileClassifiedBlocks; // 0x118 (280)
		bool m_tileClassificationEnable; // 0x119 (281)
		bool m_onDemandBuildingEnable; // 0x11A (282)
		bool m_onDemandPrimingEnable; // 0x11B (283)
		bool m_onDemandMonitoringEnable; // 0x11C (284)
		bool m_databaseLoadingEnable; // 0x11D (285)
		bool m_alphaBlendEnable; // 0x11E (286)
		bool m_forceDoubleSided; // 0x11F (287)
		bool m_forcePointFiltering; // 0x120 (288)
		bool m_zeroViewportEnable; // 0x121 (289)
		bool m_depthEnable; // 0x122 (290)
		bool m_depthWriteEnable; // 0x123 (291)
		bool m_depthTestEnable; // 0x124 (292)
		bool m_stencilEnable; // 0x125 (293)
		bool m_clipPlanesEnable; // 0x126 (294)
		bool m_singlePrimitiveEnable; // 0x127 (295)
		bool m_drawCallEnable; // 0x128 (296)
		bool m_pixBlockEventsEnable; // 0x129 (297)
		bool m_shaderPixScopeEnable; // 0x12A (298)
		bool m_gcmReplayMarkersEnable; // 0x12B (299)
		bool m_sortBlocksEnable; // 0x12C (300)
		bool m_simpleTexturesEnable; // 0x12D (301)
		bool m_simpleTextureFilteringEnable; // 0x12E (302)
		bool m_logEnable; // 0x12F (303)
		bool m_singleFrameLogEnable; // 0x130 (304)
		bool m_singleFrameLogOverwrite; // 0x131 (305)
		bool m_singleFrameBlockLogEnable; // 0x132 (306)
		bool m_externalConstantsEnable; // 0x133 (307)
		bool m_simplePixelShaderEnable; // 0x134 (308)
		bool m_simpleVertexShaderEnable; // 0x135 (309)
		bool m_pseudoInstancingEnable; // 0x136 (310)
		bool m_statesEnable; // 0x137 (311)
		bool m_pixelConstantsEnable; // 0x138 (312)
		bool m_vertexConstantsEnable; // 0x139 (313)
		bool m_pixelConstantRedundancyCheckingEnable; // 0x13A (314)
		bool m_vertexConstantRedundancyCheckingEnable; // 0x13B (315)
		bool m_boneConstantOptimizationEnable; // 0x13C (316)
		bool m_textureGammaCorrectionEnable; // 0x13D (317)
		bool m_dispatchExecuteEnable; // 0x13E (318)
		bool m_dispatchSetupJobEnable; // 0x13F (319)
		bool m_dispatchPrepareBlockEnable; // 0x140 (320)
		bool m_xenonDispatchJobEnable; // 0x141 (321)
		bool m_xenonDispatchAsyncCmdBufEnable; // 0x142 (322)
		bool m_xenonDispatchBlockOnCmdBufEnable; // 0x143 (323)
		bool m_xenonHiZEnable; // 0x144 (324)
		bool m_ps3PixelShaderRedundancyCheckingEnable; // 0x145 (325)
		bool m_ps3PixelShaderHashStoreEnable; // 0x146 (326)
		bool m_ps3DispatchPrepareSpuJobEnable; // 0x147 (327)
		bool m_ps3DispatchSetupSpuJobEnable; // 0x148 (328)
		bool m_ps3GeometryJobEnable; // 0x149 (329)
		bool m_ps3GeometryJobWithoutDispatchJobEnable; // 0x14A (330)
		bool m_ps3GeometryDebugRenderEnable; // 0x14B (331)
		bool m_ps3DrawEdgeGeometryEnable; // 0x14C (332)
		bool m_ps3DrawNonEdgeGeometryEnable; // 0x14D (333)
		bool m_ps3TriangleCullEnable; // 0x14E (334)
		bool m_ps3TriangleFrustumCullEnable; // 0x14F (335)
		bool m_ps3TriangleBackfaceCullEnable; // 0x150 (336)
		bool m_ps3TriangleCullZPassEnable; // 0x151 (337)
		bool m_ps3TriangleCullDoubleSidedEnable; // 0x152 (338)
		bool m_ps3TriangleCull1BoneSkinningEnable; // 0x153 (339)
		bool m_ps3TriangleCull4BoneSkinningEnable; // 0x154 (340)
		bool m_ps3TrianglePartCullEnable; // 0x155 (341)
		bool m_ps3DrawBlockCullEnable; // 0x156 (342)
		bool m_ps3PartitionFrustumCullEnable; // 0x157 (343)
		bool m_ps3PartitionClipPlaneCullEnable; // 0x158 (344)
		bool m_ps3PartitionVolumeCullEnable; // 0x159 (345)
		bool m_ps3SpuInstancingEnable; // 0x15A (346)
		bool m_ps3SpuClipPlaneRejectEnable; // 0x15B (347)
		bool m_ps3SpuCullVolumesEnable; // 0x15C (348)
		bool m_ps3DispatchJobEnable; // 0x15D (349)
		bool m_ps3DispatchSpuBufferLinkingEnable; // 0x15E (350)
		bool m_ps3DispatchFrameBlockEnable; // 0x15F (351)
		bool m_ps3FrameGpuWaitEnable; // 0x160 (352)
		bool m_ps3SCullEnable; // 0x161 (353)
		bool m_ps3ZCullEnable; // 0x162 (354)
		bool m_ps3TxpDemotionEnable; // 0x163 (355)
		bool m_ps3CmdBufVertexShaderInlineEnable; // 0x164 (356)
		bool m_ps3CmdBufClearEnable; // 0x165 (357)
		bool m_ps3SpuYieldingEnable; // 0x166 (358)
		bool m_multisampleEnable; // 0x167 (359)
		bool m_parallelShaderLoadingEnable; // 0x168 (360)
		bool m_dxTransparencySupersamplingEnable; // 0x169 (361)
		bool m_dxSamplerStatesEnable; // 0x16A (362)
		bool m_dxBatchedSamplerStatesEnable; // 0x16B (363)
		bool m_dxBatchedTexturesEnable; // 0x16C (364)
		bool m_dxDispatchJobEnable; // 0x16D (365)
		bool m_dxDispatchAsync; // 0x16E (366)
		bool m_dxNullContextEnable; // 0x16F (367)
		bool m_orbisDispatchAsync; // 0x170 (368)
		bool m_gen4aPlacementConstantBufferEnable; // 0x171 (369)
		bool m_mantlePrimePipelinesEnable; // 0x172 (370)
		bool m_mantleDispatchJobEnable; // 0x173 (371)
		bool m_mantleDispatchAsyncEnable; // 0x174 (372)
	}; // 0x180 (384)
}

