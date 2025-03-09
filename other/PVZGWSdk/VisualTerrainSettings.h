///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/QualityLevel.h>
#include <fb/TerrainRenderMode.h>

namespace fb {
	class VisualTerrainSettings : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VisualTerrainSettings"); }
		virtual ~VisualTerrainSettings() override {}
		VisualTerrainSettings() {
			m_meshScatteringQualityLevel = QualityLevel::QualityLevel_Low;
			m_renderMode = TerrainRenderMode::TerrainRenderMode_Default;
			m_triangleSizeMin = -1.f;
			m_lodScale = 1.f;
			m_lodCenterExtrapolationDistanceMax = 50.f;
			m_lodCenterExtrapolationTime = 0.5f;
			m_textureSkipMipSpeed = 20.f;
			m_dxTessellatedTriWidth = 6.f;
			m_dxTessellationPatchShrink = 0.f;
			m_dxTessellationPatchFacesPerSide = 8;
			m_textureAtlasSampleCountXFactor = 1;
			m_textureAtlasSampleCountYFactor = 1;
			m_textureSamplesPerMeterMax = -1.f;
			m_textureDetailFalloffFactor = -1.f;
			m_textureDetailFalloffDistance = -1.f;
			m_textureDetailFalloffCurve = -1.f;
			m_textureInvisibleDetailReductionFactor = -1.f;
			m_textureOccludedDetailReductionFactor = -1.f;
			m_textureRenderJobCount = 1;
			m_textureRenderJobsLaunchedPerFrameCountMax = 1;
			m_textureTileSamplesPerSide = 256;
			m_textureTileBorderWidth = 1;
			m_textureLevelOffset = 1;
			m_textureClodFrameCount = 7;
			m_textureClodCutoffPriority = 4.f;
			m_textureStreamableTextureInstanceBufferSize = 65536;
			m_textureCompressJobCount = 4;
			m_textureCompressionQuality = 0;
			m_textureDetailSlopeBoost = 1.f;
			m_textureGenerationMipBias = -1.f;
			m_textureDirtyRetryRate = 0.1f;
			m_textureForceDrawPass = -1;
			m_textureQuadsPerTileLevel = 0;
			m_decalZPassDrawDistance = 30.f;
			m_decalOffsetY = 0.02f;
			m_decal3dFarDrawDistanceScaleFactor = 1.f;
			m_drawQuadtreeZoomIndex = -1;
			m_patchErrorFov = 0.01f;
			m_zPassDistance = 10.f;
			m_debugOverlayGridSize = 1.28f;
			m_debugOverlayIsolineSpacing = 1.f;
			m_slotReuseWaitCount = 1;
			m_buildJobCount = 5;
			m_dynamicMaskDecalWidthScale = 1.9f;
			m_maxNonVisibleTextureUpdateCount = 1;
			m_patchFacesPerSide = 16;
			m_tessellationFacesPerSideMin = 1;
			m_patchSlotCount = 368;
			m_occluderJobCount = 5;
			m_occluderPatchFacesPerSide = 4;
			m_occluderLodScale = 0.5f;
			m_occludedMinDistance = 32.f;
			m_meshScatteringCellPoolCapacity = 512;
			m_meshScatteringTreeNodePoolCapacity = 512;
			m_meshScatteringInvisibleCellFovFactor = 5.f;
			m_meshScatteringCullRecordCount = 512;
			m_meshScatteringBuildChannelCount = 2;
			m_meshScatteringBuildChannelsLaunchedPerFrameCountMax = 1;
			m_meshScatteringClodFrameCount = 15;
			m_meshScatteringWindSpeed = 1.f;
			m_meshScatteringInstancesPerCellMax = 2048;
			m_meshScatteringDensityMarginFactor = 1.3f;
			m_meshScatteringPregenerationDistanceRatio = 0.05f;
			m_meshScatteringKeepDistanceRatio = 0.05f;
			m_meshScatteringVirtualTextureBlurriness = -1;
			m_meshScatteringDistanceScaleFactor = 1.f;
			m_meshScatteringInstanceCullJobCount = 6;
			m_meshScatteringInstanceCullListCount = 350;
			m_meshScatteringSnappingGridMultiplierVertical = 1.f;
			m_meshScatteringSnappingGridMultiplierHorizontal = 8.f;
			m_wireframeEnable = false;
			m_enable = true;
			m_editServiceEnable = false;
			m_dxDisplacementMappingEnable = false;
			m_dxDensityMapEnable = true;
			m_vertexBufferHeightsEnable = true;
			m_drawVertexYTextureEnable = false;
			m_textureVtIndirectionJobEnable = true;
			m_textureVtIndirectionSpuJobEnable = true;
			m_textureStreamingPrioritizationJobEnable = true;
			m_textureStreamingPrioritizationSpuJobEnable = true;
			m_textureClodEnable = true;
			m_textureForceUpdateEnable = false;
			m_textureCompressFastAlgorithmEnable = true;
			m_textureCompressSpuJobsEnable = true;
			m_drawTextureDebugColors = false;
			m_textureDrawTerrainLayersEnable = true;
			m_textureKeepPoolFullEnable = true;
			m_textureLayerCullingEnable = true;
			m_gpuTextureCompressionEnable = true;
			m_textureBlockOnStreamingEnable = false;
			m_textureStreamingPrioritizationEnable = true;
			m_detailTextureStreamingPrioritizationEnable = true;
			m_meshScatteringMeshStreamingPrioritizationEnable = true;
			m_prioritizationSpuJobEnable = true;
			m_prioritizationOcclusionEnable = true;
			m_drawEnable = true;
			m_drawPatchesEnable = true;
			m_detailOverlayEnable = true;
			m_decalEnable = true;
			m_forceDecalReducedQuality = false;
			m_drawDecal2dEnable = true;
			m_drawDecal3dEnable = true;
			m_drawDecalZPassEnable = false;
			m_drawOnlyDecalZPassEnable = false;
			m_drawPatchBoxesEnable = false;
			m_drawBadPatchesEnable = false;
			m_drawTextureTileBoxesEnable = false;
			m_drawDebugTextEnable = false;
			m_drawDebugTexturesEnable = false;
			m_drawQuadtreesEnable = false;
			m_drawQuadtreeStatsEnable = false;
			m_drawQuadtreeAtlasTexturesEnable = false;
			m_drawWaterEnable = true;
			m_patchErrorFovEnable = false;
			m_debugOverlayGridEnable = false;
			m_debugOverlayIsolinesEnable = false;
			m_debugOverlayWireframeEnable = false;
			m_debugOverlaySketchTextureEnable = false;
			m_debugOverlayBrushEnable = false;
			m_forceGraphicsDriverCrash = false;
			m_forcePatchRebuildEnable = false;
			m_destroyAll = false;
			m_slotDebugOutputEnable = false;
			m_updateJobsEnable = true;
			m_cullSpuJobEnable = true;
			m_prepareBuildSpuJobEnable = true;
			m_buildSpuJobEnable = true;
			m_regenerateTexturesEnable = false;
			m_dynamicMaskEnable = true;
			m_patchLodTransitionsEnable = true;
			m_patchMaterialSortingEnable = false;
			m_cullSampleBoundingBoxHeightEnable = true;
			m_castShadowsEnable = false;
			m_castPlanarReflectionEnable = true;
			m_castEnvmapReflectionEnable = true;
			m_castDecal3dPlanarReflectionEnable = false;
			m_castDecal3dEnvmapReflectionEnable = false;
			m_globalColormapEnable = true;
			m_occluderEnable = true;
			m_occluderJobEnable = true;
			m_occluderSpuJobEnable = true;
			m_occluderBackFaceCullingEnable = true;
			m_occludedEnable = true;
			m_meshScatteringEnable = true;
			m_meshScatteringJobsEnable = true;
			m_meshScatteringCastShadowsEnable = true;
			m_drawMeshScatteringEnable = true;
			m_drawMeshScatteringCellBoxesEnable = false;
			m_drawMeshScatteringBatchBoxesEnable = false;
			m_drawMeshScatteringNodeBoxesEnable = false;
			m_drawMeshScatteringCulledCellBoxesEnable = false;
			m_drawMeshScatteringDebugMaskScaleTexturesEnable = false;
			m_drawMeshScatteringStatsEnable = false;
			m_drawMeshScatteringQuadtreeEnable = false;
			m_meshScatteringForceUpdateEnable = false;
			m_meshScatteringBuildVisibleFirst = true;
			m_meshScatteringCullSpuJobEnable = true;
			m_meshScatteringMergeInstanceLists = true;
			m_meshScatteringInstanceCullSpuJobEnable = true;
			m_meshScatteringPrioritizationSpuJobEnable = true;
			m_meshScatteringSpuJobEnable = true;
			m_meshScatteringInstanceCullBoxTestEnable = true;
			m_meshScatteringInstanceNewCodeEnable = true;
			m_meshScatteringInstanceFrustumCullEnable = true;
			m_meshScatteringInstanceOcclusionCullEnable = false;
			m_meshScatteringInstanceAdditionalCullEnable = true;
			m_drawMeshScatteringInstanceBoxesEnable = false;
			m_meshScatteringInstanceCullDynamicAllocEnable = false;
			m_ps3MeshScatteringInstanceCellMemoryEnable = true;
			m_meshScatteringWindEnable = true;
		};

		QualityLevel m_meshScatteringQualityLevel; // 0x10 (16)
		TerrainRenderMode m_renderMode; // 0x14 (20)
		float m_triangleSizeMin; // 0x18 (24)
		float m_lodScale; // 0x1C (28)
		float m_lodCenterExtrapolationDistanceMax; // 0x20 (32)
		float m_lodCenterExtrapolationTime; // 0x24 (36)
		float m_textureSkipMipSpeed; // 0x28 (40)
		float m_dxTessellatedTriWidth; // 0x2C (44)
		float m_dxTessellationPatchShrink; // 0x30 (48)
		u32 m_dxTessellationPatchFacesPerSide; // 0x34 (52)
		u32 m_textureAtlasSampleCountXFactor; // 0x38 (56)
		u32 m_textureAtlasSampleCountYFactor; // 0x3C (60)
		float m_textureSamplesPerMeterMax; // 0x40 (64)
		float m_textureDetailFalloffFactor; // 0x44 (68)
		float m_textureDetailFalloffDistance; // 0x48 (72)
		float m_textureDetailFalloffCurve; // 0x4C (76)
		float m_textureInvisibleDetailReductionFactor; // 0x50 (80)
		float m_textureOccludedDetailReductionFactor; // 0x54 (84)
		u32 m_textureRenderJobCount; // 0x58 (88)
		u32 m_textureRenderJobsLaunchedPerFrameCountMax; // 0x5C (92)
		u32 m_textureTileSamplesPerSide; // 0x60 (96)
		u32 m_textureTileBorderWidth; // 0x64 (100)
		s32 m_textureLevelOffset; // 0x68 (104)
		u32 m_textureClodFrameCount; // 0x6C (108)
		float m_textureClodCutoffPriority; // 0x70 (112)
		u32 m_textureStreamableTextureInstanceBufferSize; // 0x74 (116)
		u32 m_textureCompressJobCount; // 0x78 (120)
		s32 m_textureCompressionQuality; // 0x7C (124)
		float m_textureDetailSlopeBoost; // 0x80 (128)
		float m_textureGenerationMipBias; // 0x84 (132)
		float m_textureDirtyRetryRate; // 0x88 (136)
		s32 m_textureForceDrawPass; // 0x8C (140)
		u32 m_textureQuadsPerTileLevel; // 0x90 (144)
		float m_decalZPassDrawDistance; // 0x94 (148)
		float m_decalOffsetY; // 0x98 (152)
		float m_decal3dFarDrawDistanceScaleFactor; // 0x9C (156)
		s32 m_drawQuadtreeZoomIndex; // 0xA0 (160)
		float m_patchErrorFov; // 0xA4 (164)
		float m_zPassDistance; // 0xA8 (168)
		float m_debugOverlayGridSize; // 0xAC (172)
		float m_debugOverlayIsolineSpacing; // 0xB0 (176)
		u32 m_slotReuseWaitCount; // 0xB4 (180)
		u32 m_buildJobCount; // 0xB8 (184)
		float m_dynamicMaskDecalWidthScale; // 0xBC (188)
		u32 m_maxNonVisibleTextureUpdateCount; // 0xC0 (192)
		u32 m_patchFacesPerSide; // 0xC4 (196)
		u32 m_tessellationFacesPerSideMin; // 0xC8 (200)
		u32 m_patchSlotCount; // 0xCC (204)
		u32 m_occluderJobCount; // 0xD0 (208)
		u32 m_occluderPatchFacesPerSide; // 0xD4 (212)
		float m_occluderLodScale; // 0xD8 (216)
		float m_occludedMinDistance; // 0xDC (220)
		u32 m_meshScatteringCellPoolCapacity; // 0xE0 (224)
		u32 m_meshScatteringTreeNodePoolCapacity; // 0xE4 (228)
		float m_meshScatteringInvisibleCellFovFactor; // 0xE8 (232)
		u32 m_meshScatteringCullRecordCount; // 0xEC (236)
		u32 m_meshScatteringBuildChannelCount; // 0xF0 (240)
		u32 m_meshScatteringBuildChannelsLaunchedPerFrameCountMax; // 0xF4 (244)
		u32 m_meshScatteringClodFrameCount; // 0xF8 (248)
		float m_meshScatteringWindSpeed; // 0xFC (252)
		u32 m_meshScatteringInstancesPerCellMax; // 0x100 (256)
		float m_meshScatteringDensityMarginFactor; // 0x104 (260)
		float m_meshScatteringPregenerationDistanceRatio; // 0x108 (264)
		float m_meshScatteringKeepDistanceRatio; // 0x10C (268)
		s32 m_meshScatteringVirtualTextureBlurriness; // 0x110 (272)
		float m_meshScatteringDistanceScaleFactor; // 0x114 (276)
		u32 m_meshScatteringInstanceCullJobCount; // 0x118 (280)
		u32 m_meshScatteringInstanceCullListCount; // 0x11C (284)
		float m_meshScatteringSnappingGridMultiplierVertical; // 0x120 (288)
		float m_meshScatteringSnappingGridMultiplierHorizontal; // 0x124 (292)
		bool m_wireframeEnable; // 0x128 (296)
		bool m_enable; // 0x129 (297)
		bool m_editServiceEnable; // 0x12A (298)
		bool m_dxDisplacementMappingEnable; // 0x12B (299)
		bool m_dxDensityMapEnable; // 0x12C (300)
		bool m_vertexBufferHeightsEnable; // 0x12D (301)
		bool m_drawVertexYTextureEnable; // 0x12E (302)
		bool m_textureVtIndirectionJobEnable; // 0x12F (303)
		bool m_textureVtIndirectionSpuJobEnable; // 0x130 (304)
		bool m_textureStreamingPrioritizationJobEnable; // 0x131 (305)
		bool m_textureStreamingPrioritizationSpuJobEnable; // 0x132 (306)
		bool m_textureClodEnable; // 0x133 (307)
		bool m_textureForceUpdateEnable; // 0x134 (308)
		bool m_textureCompressFastAlgorithmEnable; // 0x135 (309)
		bool m_textureCompressSpuJobsEnable; // 0x136 (310)
		bool m_drawTextureDebugColors; // 0x137 (311)
		bool m_textureDrawTerrainLayersEnable; // 0x138 (312)
		bool m_textureKeepPoolFullEnable; // 0x139 (313)
		bool m_textureLayerCullingEnable; // 0x13A (314)
		bool m_gpuTextureCompressionEnable; // 0x13B (315)
		bool m_textureBlockOnStreamingEnable; // 0x13C (316)
		bool m_textureStreamingPrioritizationEnable; // 0x13D (317)
		bool m_detailTextureStreamingPrioritizationEnable; // 0x13E (318)
		bool m_meshScatteringMeshStreamingPrioritizationEnable; // 0x13F (319)
		bool m_prioritizationSpuJobEnable; // 0x140 (320)
		bool m_prioritizationOcclusionEnable; // 0x141 (321)
		bool m_drawEnable; // 0x142 (322)
		bool m_drawPatchesEnable; // 0x143 (323)
		bool m_detailOverlayEnable; // 0x144 (324)
		bool m_decalEnable; // 0x145 (325)
		bool m_forceDecalReducedQuality; // 0x146 (326)
		bool m_drawDecal2dEnable; // 0x147 (327)
		bool m_drawDecal3dEnable; // 0x148 (328)
		bool m_drawDecalZPassEnable; // 0x149 (329)
		bool m_drawOnlyDecalZPassEnable; // 0x14A (330)
		bool m_drawPatchBoxesEnable; // 0x14B (331)
		bool m_drawBadPatchesEnable; // 0x14C (332)
		bool m_drawTextureTileBoxesEnable; // 0x14D (333)
		bool m_drawDebugTextEnable; // 0x14E (334)
		bool m_drawDebugTexturesEnable; // 0x14F (335)
		bool m_drawQuadtreesEnable; // 0x150 (336)
		bool m_drawQuadtreeStatsEnable; // 0x151 (337)
		bool m_drawQuadtreeAtlasTexturesEnable; // 0x152 (338)
		bool m_drawWaterEnable; // 0x153 (339)
		bool m_patchErrorFovEnable; // 0x154 (340)
		bool m_debugOverlayGridEnable; // 0x155 (341)
		bool m_debugOverlayIsolinesEnable; // 0x156 (342)
		bool m_debugOverlayWireframeEnable; // 0x157 (343)
		bool m_debugOverlaySketchTextureEnable; // 0x158 (344)
		bool m_debugOverlayBrushEnable; // 0x159 (345)
		bool m_forceGraphicsDriverCrash; // 0x15A (346)
		bool m_forcePatchRebuildEnable; // 0x15B (347)
		bool m_destroyAll; // 0x15C (348)
		bool m_slotDebugOutputEnable; // 0x15D (349)
		bool m_updateJobsEnable; // 0x15E (350)
		bool m_cullSpuJobEnable; // 0x15F (351)
		bool m_prepareBuildSpuJobEnable; // 0x160 (352)
		bool m_buildSpuJobEnable; // 0x161 (353)
		bool m_regenerateTexturesEnable; // 0x162 (354)
		bool m_dynamicMaskEnable; // 0x163 (355)
		bool m_patchLodTransitionsEnable; // 0x164 (356)
		bool m_patchMaterialSortingEnable; // 0x165 (357)
		bool m_cullSampleBoundingBoxHeightEnable; // 0x166 (358)
		bool m_castShadowsEnable; // 0x167 (359)
		bool m_castPlanarReflectionEnable; // 0x168 (360)
		bool m_castEnvmapReflectionEnable; // 0x169 (361)
		bool m_castDecal3dPlanarReflectionEnable; // 0x16A (362)
		bool m_castDecal3dEnvmapReflectionEnable; // 0x16B (363)
		bool m_globalColormapEnable; // 0x16C (364)
		bool m_occluderEnable; // 0x16D (365)
		bool m_occluderJobEnable; // 0x16E (366)
		bool m_occluderSpuJobEnable; // 0x16F (367)
		bool m_occluderBackFaceCullingEnable; // 0x170 (368)
		bool m_occludedEnable; // 0x171 (369)
		bool m_meshScatteringEnable; // 0x172 (370)
		bool m_meshScatteringJobsEnable; // 0x173 (371)
		bool m_meshScatteringCastShadowsEnable; // 0x174 (372)
		bool m_drawMeshScatteringEnable; // 0x175 (373)
		bool m_drawMeshScatteringCellBoxesEnable; // 0x176 (374)
		bool m_drawMeshScatteringBatchBoxesEnable; // 0x177 (375)
		bool m_drawMeshScatteringNodeBoxesEnable; // 0x178 (376)
		bool m_drawMeshScatteringCulledCellBoxesEnable; // 0x179 (377)
		bool m_drawMeshScatteringDebugMaskScaleTexturesEnable; // 0x17A (378)
		bool m_drawMeshScatteringStatsEnable; // 0x17B (379)
		bool m_drawMeshScatteringQuadtreeEnable; // 0x17C (380)
		bool m_meshScatteringForceUpdateEnable; // 0x17D (381)
		bool m_meshScatteringBuildVisibleFirst; // 0x17E (382)
		bool m_meshScatteringCullSpuJobEnable; // 0x17F (383)
		bool m_meshScatteringMergeInstanceLists; // 0x180 (384)
		bool m_meshScatteringInstanceCullSpuJobEnable; // 0x181 (385)
		bool m_meshScatteringPrioritizationSpuJobEnable; // 0x182 (386)
		bool m_meshScatteringSpuJobEnable; // 0x183 (387)
		bool m_meshScatteringInstanceCullBoxTestEnable; // 0x184 (388)
		bool m_meshScatteringInstanceNewCodeEnable; // 0x185 (389)
		bool m_meshScatteringInstanceFrustumCullEnable; // 0x186 (390)
		bool m_meshScatteringInstanceOcclusionCullEnable; // 0x187 (391)
		bool m_meshScatteringInstanceAdditionalCullEnable; // 0x188 (392)
		bool m_drawMeshScatteringInstanceBoxesEnable; // 0x189 (393)
		bool m_meshScatteringInstanceCullDynamicAllocEnable; // 0x18A (394)
		bool m_ps3MeshScatteringInstanceCellMemoryEnable; // 0x18B (395)
		bool m_meshScatteringWindEnable; // 0x18C (396)
	}; // 0x190 (400)
}

