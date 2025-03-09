///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class MantleDisplaySettings : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MantleDisplaySettings"); }
		virtual ~MantleDisplaySettings() override {}
		MantleDisplaySettings() {
			m_maxValidationLevel = 0;
			m_validationLevel = 0;
			m_fullscreenHeight = 0;
			m_fullscreenWidth = 0;
			m_fullscreenRefreshRate = 0.f;
			m_fullscreenOutputIndex = 0;
			m_windowPositionX = 0;
			m_windowPositionY = 0;
			m_windowedHeight = 0;
			m_windowedWidth = 0;
			m_presentInterval = 1;
			m_renderAheadLimit = -1;
			m_gpuIndex = -1;
			m_multiGpuMaxCount = 4;
			m_crossDisplayPresent = -1;
			m_simulateMultiGpuCount = 0;
			m_framePacingMethod = 1;
			m_framePacingDampeningFactor = 0.95f;
			m_framePacingSpikeFilterThreshold = 1.f;
			m_framePacingHistorySize = 32;
			m_breakOnError = true;
			m_breakOnWarning = false;
			m_fullscreen = false;
			m_windowBordersEnable = true;
			m_vSyncEnable = false;
			m_memoryPoolingEnable = true;
			m_gpuProfilerEnable = true;
			m_multiGpuEnable = true;
			m_computeQueueEnable = true;
			m_dmaQueueEnable = true;
			m_timerQueueEnable = true;
			m_advancedMsaaEnable = true;
			m_fmaskEnable = true;
			m_timestampQueriesEnable = true;
			m_depthBoundsEnable = true;
			m_quadListEnable = false;
			m_rectListEnable = true;
			m_cmdBufferOptimizePipelineSwitch = true;
			m_cmdBufferOptimizeDescriptorSetSwitch = false;
			m_cmdBufferOptimizeGpuSmallBatch = false;
			m_cmdBufferOptimizeOneTimeEnable = true;
			m_renderAccessOptimalEnable = true;
			m_useReservedJobThreads = true;
			m_forceDriverPreferredMemoryLocations = false;
			m_videoSharedAsSystemSharedOnIntegrated = true;
			m_submitJobEnable = true;
			m_drawStats = false;
		};

		u32 m_maxValidationLevel; // 0x10 (16)
		u32 m_validationLevel; // 0x14 (20)
		u32 m_fullscreenHeight; // 0x18 (24)
		u32 m_fullscreenWidth; // 0x1C (28)
		float m_fullscreenRefreshRate; // 0x20 (32)
		s32 m_fullscreenOutputIndex; // 0x24 (36)
		s32 m_windowPositionX; // 0x28 (40)
		s32 m_windowPositionY; // 0x2C (44)
		u32 m_windowedHeight; // 0x30 (48)
		u32 m_windowedWidth; // 0x34 (52)
		s32 m_presentInterval; // 0x38 (56)
		s32 m_renderAheadLimit; // 0x3C (60)
		s32 m_gpuIndex; // 0x40 (64)
		u32 m_multiGpuMaxCount; // 0x44 (68)
		s32 m_crossDisplayPresent; // 0x48 (72)
		u32 m_simulateMultiGpuCount; // 0x4C (76)
		u32 m_framePacingMethod; // 0x50 (80)
		float m_framePacingDampeningFactor; // 0x54 (84)
		float m_framePacingSpikeFilterThreshold; // 0x58 (88)
		u32 m_framePacingHistorySize; // 0x5C (92)
		bool m_breakOnError; // 0x60 (96)
		bool m_breakOnWarning; // 0x61 (97)
		bool m_fullscreen; // 0x62 (98)
		bool m_windowBordersEnable; // 0x63 (99)
		bool m_vSyncEnable; // 0x64 (100)
		bool m_memoryPoolingEnable; // 0x65 (101)
		bool m_gpuProfilerEnable; // 0x66 (102)
		bool m_multiGpuEnable; // 0x67 (103)
		bool m_computeQueueEnable; // 0x68 (104)
		bool m_dmaQueueEnable; // 0x69 (105)
		bool m_timerQueueEnable; // 0x6A (106)
		bool m_advancedMsaaEnable; // 0x6B (107)
		bool m_fmaskEnable; // 0x6C (108)
		bool m_timestampQueriesEnable; // 0x6D (109)
		bool m_depthBoundsEnable; // 0x6E (110)
		bool m_quadListEnable; // 0x6F (111)
		bool m_rectListEnable; // 0x70 (112)
		bool m_cmdBufferOptimizePipelineSwitch; // 0x71 (113)
		bool m_cmdBufferOptimizeDescriptorSetSwitch; // 0x72 (114)
		bool m_cmdBufferOptimizeGpuSmallBatch; // 0x73 (115)
		bool m_cmdBufferOptimizeOneTimeEnable; // 0x74 (116)
		bool m_renderAccessOptimalEnable; // 0x75 (117)
		bool m_useReservedJobThreads; // 0x76 (118)
		bool m_forceDriverPreferredMemoryLocations; // 0x77 (119)
		bool m_videoSharedAsSystemSharedOnIntegrated; // 0x78 (120)
		bool m_submitJobEnable; // 0x79 (121)
		bool m_drawStats; // 0x7A (122)
	}; // 0x80 (128)
}

