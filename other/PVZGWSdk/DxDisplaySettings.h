///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/String.h>
#include <fb/SystemSettings.h>

namespace fb {
	class DxDisplaySettings : public SystemSettings {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DxDisplaySettings"); }
		virtual ~DxDisplaySettings() override {}
		DxDisplaySettings() {
			m_fullscreenHeight = 0;
			m_fullscreenWidth = 0;
			m_fullscreenRefreshRate = 0.f;
			m_fullscreenOutputIndex = 0;
			m_windowPositionX = 0;
			m_windowPositionY = 0;
			m_windowedHeight = 0;
			m_windowedWidth = 0;
			m_presentImmediateThreshold = 0;
			m_presentInterval = 1;
			m_renderAheadLimit = -1;
			m_stereoDepth = 1.f;
			m_stereoConvergenceScale = 1.f;
			m_stereoSeparationScale = 1.f;
			m_stereoSoldierZoomConvergenceScale = 1.f;
			m_nvidiaMinDriverVersion = 33182;
			m_lowResDisplayPlaneScale = 0.833333f;
			m_resourceBreakAtId = -1;
			m_nullDriverEnable = false;
			m_refDriverEnable = false;
			m_warpDriverEnable = false;
			m_dx10Dot0Enable = false;
			m_dx10Dot1Enable = true;
			m_dx10PlusEnable = true;
			m_dx11Enable = true;
			m_dx11Dot1Enable = true;
			m_dx11Dot1RuntimeEnable = true;
			m_createMinimalWindow = false;
			m_driverInternalThreadingEnable = true;
			m_dxDiagDriverDetectionEnable = true;
			m_debugInfoEnable = false;
			m_debugInfoOutputEnable = true;
			m_debugBreakOnErrorEnable = false;
			m_debugBreakOnWarningEnable = false;
			m_debugBreakOnInfoEnable = false;
			m_fullscreenModeEnable = true;
			m_fullscreen = false;
			m_windowBordersEnable = true;
			m_vSyncEnable = false;
			m_tripleBufferingEnable = true;
			m_nvApiEnable = true;
			m_nvPerfHudEnable = false;
			m_annotationInterfaceEnable = true;
			m_stereoEnable = false;
			m_stereoSplitScreenEnable = false;
			m_minDriverRequired = true;
			m_amdQuadsEnable = false;
			m_depthBoundsExtensionEnable = true;
			m_multiGpuValidationEnable = false;
			m_discardFrameTempBuffersEnable = true;
			m_pixProfilingEnable = false;
			m_asyncCmdListExecutionEnable = false;
			m_videoOutSrgbFullEnable = true;
			m_videoOutSrgbToRec709Enable = false;
			m_endFrameJobEnable = false;
			m_lowResDisplayPlaneEnable = false;
			m_forceRenderTargetInEsramTest = false;
			m_resourcePrintLeaksAtExit = false;
		};

		Array<s32> m_debugBreakIgnoredIDs; // 0x20 (32)
		u32 m_fullscreenHeight; // 0x28 (40)
		u32 m_fullscreenWidth; // 0x2C (44)
		float m_fullscreenRefreshRate; // 0x30 (48)
		s32 m_fullscreenOutputIndex; // 0x34 (52)
		s32 m_windowPositionX; // 0x38 (56)
		s32 m_windowPositionY; // 0x3C (60)
		u32 m_windowedHeight; // 0x40 (64)
		u32 m_windowedWidth; // 0x44 (68)
		u32 m_presentImmediateThreshold; // 0x48 (72)
		s32 m_presentInterval; // 0x4C (76)
		s32 m_renderAheadLimit; // 0x50 (80)
		float m_stereoDepth; // 0x54 (84)
		float m_stereoConvergenceScale; // 0x58 (88)
		float m_stereoSeparationScale; // 0x5C (92)
		float m_stereoSoldierZoomConvergenceScale; // 0x60 (96)
		u32 m_nvidiaMinDriverVersion; // 0x64 (100)
		String m_amdMinDriverVersion; // 0x68 (104)
		float m_lowResDisplayPlaneScale; // 0x70 (112)
		s32 m_resourceBreakAtId; // 0x74 (116)
		bool m_nullDriverEnable; // 0x78 (120)
		bool m_refDriverEnable; // 0x79 (121)
		bool m_warpDriverEnable; // 0x7A (122)
		bool m_dx10Dot0Enable; // 0x7B (123)
		bool m_dx10Dot1Enable; // 0x7C (124)
		bool m_dx10PlusEnable; // 0x7D (125)
		bool m_dx11Enable; // 0x7E (126)
		bool m_dx11Dot1Enable; // 0x7F (127)
		bool m_dx11Dot1RuntimeEnable; // 0x80 (128)
		bool m_createMinimalWindow; // 0x81 (129)
		bool m_driverInternalThreadingEnable; // 0x82 (130)
		bool m_dxDiagDriverDetectionEnable; // 0x83 (131)
		bool m_debugInfoEnable; // 0x84 (132)
		bool m_debugInfoOutputEnable; // 0x85 (133)
		bool m_debugBreakOnErrorEnable; // 0x86 (134)
		bool m_debugBreakOnWarningEnable; // 0x87 (135)
		bool m_debugBreakOnInfoEnable; // 0x88 (136)
		bool m_fullscreenModeEnable; // 0x89 (137)
		bool m_fullscreen; // 0x8A (138)
		bool m_windowBordersEnable; // 0x8B (139)
		bool m_vSyncEnable; // 0x8C (140)
		bool m_tripleBufferingEnable; // 0x8D (141)
		bool m_nvApiEnable; // 0x8E (142)
		bool m_nvPerfHudEnable; // 0x8F (143)
		bool m_annotationInterfaceEnable; // 0x90 (144)
		bool m_stereoEnable; // 0x91 (145)
		bool m_stereoSplitScreenEnable; // 0x92 (146)
		bool m_minDriverRequired; // 0x93 (147)
		bool m_amdQuadsEnable; // 0x94 (148)
		bool m_depthBoundsExtensionEnable; // 0x95 (149)
		bool m_multiGpuValidationEnable; // 0x96 (150)
		bool m_discardFrameTempBuffersEnable; // 0x97 (151)
		bool m_pixProfilingEnable; // 0x98 (152)
		bool m_asyncCmdListExecutionEnable; // 0x99 (153)
		bool m_videoOutSrgbFullEnable; // 0x9A (154)
		bool m_videoOutSrgbToRec709Enable; // 0x9B (155)
		bool m_endFrameJobEnable; // 0x9C (156)
		bool m_lowResDisplayPlaneEnable; // 0x9D (157)
		bool m_forceRenderTargetInEsramTest; // 0x9E (158)
		bool m_resourcePrintLeaksAtExit; // 0x9F (159)
	}; // 0xA0 (160)
}

