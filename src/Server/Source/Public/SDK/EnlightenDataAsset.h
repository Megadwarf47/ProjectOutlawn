///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>
#include <fb/CtrRef.h>

namespace fb {
	class TextureAsset;
}

namespace fb {
	class EnlightenDataAsset : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("EnlightenDataAsset"); }
		virtual ~EnlightenDataAsset() override {}
		EnlightenDataAsset() {
			m_databaseResource = ;
			m_systemGridSize = 64;
			m_systemLightmapSize = 128;
			m_maxSystemLightmapSize = 1024;
			m_systemInfluenceRadius = 40.f;
			m_clusterSize = 2.5f;
			m_irBudget = 32;
			m_irradianceQualityMultiplier = 1;
			m_visibilityThreshold = 0.25f;
			m_stitchingDistanceMultiplier = -1.f;
			m_maxPixelStitchingAngle = 0.5f;
			m_samplesPerCluster = 32;
			m_maxCpuThreadCount = 0;
			m_terrainProbeRes = 5;
			m_dynamicEnable = true;
			m_loadDebugData = true;
			m_dynamicXenonEnable = false;
			m_dynamicPs3Enable = false;
			m_gridBasedSystemGeneration = false;
			m_voxelBasedLeafClustering = true;
			m_pixelStitchingEnable = true;
			m_edgeStitchingEnable = true;
			m_terrainEnable = true;
		};

		CtrRef<TextureAsset> m_debugChartTexture; // 0x18 (24)
		ResourceRef m_databaseResource; // 0x20 (32)
		CtrRef<TextureAsset> m_debugBackFaceTexture; // 0x28 (40)
		CtrRef<TextureAsset> m_skyVisibilityTexture; // 0x30 (48)
		u32 m_systemGridSize; // 0x38 (56)
		s32 m_systemLightmapSize; // 0x3C (60)
		s32 m_maxSystemLightmapSize; // 0x40 (64)
		float m_systemInfluenceRadius; // 0x44 (68)
		float m_clusterSize; // 0x48 (72)
		u32 m_irBudget; // 0x4C (76)
		u32 m_irradianceQualityMultiplier; // 0x50 (80)
		float m_visibilityThreshold; // 0x54 (84)
		float m_stitchingDistanceMultiplier; // 0x58 (88)
		float m_maxPixelStitchingAngle; // 0x5C (92)
		u32 m_samplesPerCluster; // 0x60 (96)
		u32 m_maxCpuThreadCount; // 0x64 (100)
		u32 m_terrainProbeRes; // 0x68 (104)
		bool m_dynamicEnable; // 0x6C (108)
		bool m_loadDebugData; // 0x6D (109)
		bool m_dynamicXenonEnable; // 0x6E (110)
		bool m_dynamicPs3Enable; // 0x6F (111)
		bool m_gridBasedSystemGeneration; // 0x70 (112)
		bool m_voxelBasedLeafClustering; // 0x71 (113)
		bool m_pixelStitchingEnable; // 0x72 (114)
		bool m_edgeStitchingEnable; // 0x73 (115)
		bool m_terrainEnable; // 0x74 (116)
	}; // 0x78 (120)
}

