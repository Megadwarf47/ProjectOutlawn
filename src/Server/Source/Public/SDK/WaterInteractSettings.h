///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/QualityLevel.h>
#include <fb/QualityScalableFloat.h>
#include <fb/SystemSettings.h>

namespace fb {
	class WaterInteractSettings : public SystemSettings {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WaterInteractSettings"); }
		virtual ~WaterInteractSettings() override {}
		WaterInteractSettings() {
			m_simulationJobCount = 6;
			m_waterQualityLevel = QualityLevel::QualityLevel_High;
			m_maxSimulationCount = 1;
			m_maxLiveEditingSimulationCount = 8;
			m_maxGridScale = 16.f;
			m_minGridScale = 4.f;
			m_interactInjectNoiseStrength = 0.f;
			m_interactMaxSlope = 2.f;
			m_interactUpdateFrequency = 60.f;
			m_minAmbientSimulationResolution = 32;
			m_maxAmbientSimulationResolution = 128;
			m_renderGridWidth = 256;
			m_renderGridHeight = 128;
			m_renderFixedAimDistance = 30.f;
			m_renderProjectorFarPlane = 5000.f;
			m_maxVisibleWaterSurfaceCount = 1;
			m_maxLiveEditingVisibleWaterSurfaceCount = 8;
			m_pcGridResolutionMultiplier = QualityScalableFloat(0.5f, 1.f, 1.f, 2.f);
			m_renderOcclusionCullJobCount = 6;
			m_renderOcclusionGridWidth = 8;
			m_renderOcclusionGridHeight = 8;
			m_virtualHeightfieldAtlasSize = 256;
			m_virtualHeightfieldIndirectionSize = 128;
			m_virtualHeightfieldQuantizationRange = 1.f;
			m_enable = true;
			m_drawEnable = true;
			m_enableJobs = true;
			m_enableSPUJobs = true;
			m_usePS3CellMemoryBuffers = false;
			m_enableSimulation = true;
			m_enableDisturbs = true;
			m_enableLOD = true;
			m_renderOcclusionCullEnable = true;
			m_renderGenerateDisplacementMipmaps = true;
			m_renderGenerateGradientMipmaps = true;
			m_renderDebugEnable = false;
			m_renderDebugTexturesEnable = true;
			m_renderDebugFreezeViewEnable = false;
			m_drawGridEnable = true;
			m_drawUpdateEnable = true;
		};

		u32 m_simulationJobCount; // 0x20 (32)
		QualityLevel m_waterQualityLevel; // 0x24 (36)
		u32 m_maxSimulationCount; // 0x28 (40)
		u32 m_maxLiveEditingSimulationCount; // 0x2C (44)
		float m_maxGridScale; // 0x30 (48)
		float m_minGridScale; // 0x34 (52)
		float m_interactInjectNoiseStrength; // 0x38 (56)
		float m_interactMaxSlope; // 0x3C (60)
		float m_interactUpdateFrequency; // 0x40 (64)
		u32 m_minAmbientSimulationResolution; // 0x44 (68)
		u32 m_maxAmbientSimulationResolution; // 0x48 (72)
		u32 m_renderGridWidth; // 0x4C (76)
		u32 m_renderGridHeight; // 0x50 (80)
		float m_renderFixedAimDistance; // 0x54 (84)
		float m_renderProjectorFarPlane; // 0x58 (88)
		u32 m_maxVisibleWaterSurfaceCount; // 0x5C (92)
		u32 m_maxLiveEditingVisibleWaterSurfaceCount; // 0x60 (96)
		QualityScalableFloat m_pcGridResolutionMultiplier; // 0x64 (100)
		u32 m_renderOcclusionCullJobCount; // 0x74 (116)
		u32 m_renderOcclusionGridWidth; // 0x78 (120)
		u32 m_renderOcclusionGridHeight; // 0x7C (124)
		s32 m_virtualHeightfieldAtlasSize; // 0x80 (128)
		s32 m_virtualHeightfieldIndirectionSize; // 0x84 (132)
		float m_virtualHeightfieldQuantizationRange; // 0x88 (136)
		bool m_enable; // 0x8C (140)
		bool m_drawEnable; // 0x8D (141)
		bool m_enableJobs; // 0x8E (142)
		bool m_enableSPUJobs; // 0x8F (143)
		bool m_usePS3CellMemoryBuffers; // 0x90 (144)
		bool m_enableSimulation; // 0x91 (145)
		bool m_enableDisturbs; // 0x92 (146)
		bool m_enableLOD; // 0x93 (147)
		bool m_renderOcclusionCullEnable; // 0x94 (148)
		bool m_renderGenerateDisplacementMipmaps; // 0x95 (149)
		bool m_renderGenerateGradientMipmaps; // 0x96 (150)
		bool m_renderDebugEnable; // 0x97 (151)
		bool m_renderDebugTexturesEnable; // 0x98 (152)
		bool m_renderDebugFreezeViewEnable; // 0x99 (153)
		bool m_drawGridEnable; // 0x9A (154)
		bool m_drawUpdateEnable; // 0x9B (155)
	}; // 0xA0 (160)
}

