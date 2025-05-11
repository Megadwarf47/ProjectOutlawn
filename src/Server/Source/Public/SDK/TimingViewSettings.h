///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/String.h>

namespace fb {
	class TimingViewSettings : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TimingViewSettings"); }
		virtual ~TimingViewSettings() override {}
		TimingViewSettings() {
			m_frameCount = 3;
			m_frameDelayCount = 2;
			m_timeRange = 100.f;
			m_timeOffset = 0.f;
			m_autolockThreshold = 0.f;
			m_legendScreenOffset = 450;
			m_legendColumnWidth = 210;
			m_legendDisplayMode = 0;
			m_averageFrameCount = 500;
			m_barMinTime = 0.0;
			m_barHeight = 18;
			m_barPad = 6;
			m_barSyncProcessor = -1;
			m_gpuBarFrameOffset = 1;
			m_maxCpuLegendColumnCount = -1;
			m_maxGpuLegendColumnCount = -1;
			m_maxSpuLegendColumnCount = -1;
			m_maxFrameEventCount = 10000;
			m_enable = false;
			m_drawEnable = true;
			m_drawBarsEnable = true;
			m_drawLegendEnable = true;
			m_drawCpuLegendEnable = true;
			m_drawGpuLegendEnable = true;
			m_drawSpuLegendEnable = true;
			m_snoopEnable = false;
			m_snoopOnly = false;
			m_sortByTime = false;
			m_filterEnable = false;
		};

		u32 m_frameCount; // 0x10 (16)
		u32 m_frameDelayCount; // 0x14 (20)
		float m_timeRange; // 0x18 (24)
		float m_timeOffset; // 0x1C (28)
		float m_autolockThreshold; // 0x20 (32)
		String m_autolockNameFilter; // 0x28 (40)
		s32 m_legendScreenOffset; // 0x30 (48)
		s32 m_legendColumnWidth; // 0x34 (52)
		s32 m_legendDisplayMode; // 0x38 (56)
		s32 m_averageFrameCount; // 0x3C (60)
		String m_snoopEventName; // 0x40 (64)
		String m_filterEventName; // 0x48 (72)
		double m_barMinTime; // 0x50 (80)
		u32 m_barHeight; // 0x58 (88)
		u32 m_barPad; // 0x5C (92)
		s32 m_barSyncProcessor; // 0x60 (96)
		s32 m_gpuBarFrameOffset; // 0x64 (100)
		s32 m_maxCpuLegendColumnCount; // 0x68 (104)
		s32 m_maxGpuLegendColumnCount; // 0x6C (108)
		s32 m_maxSpuLegendColumnCount; // 0x70 (112)
		u32 m_maxFrameEventCount; // 0x74 (116)
		bool m_enable; // 0x78 (120)
		bool m_drawEnable; // 0x79 (121)
		bool m_drawBarsEnable; // 0x7A (122)
		bool m_drawLegendEnable; // 0x7B (123)
		bool m_drawCpuLegendEnable; // 0x7C (124)
		bool m_drawGpuLegendEnable; // 0x7D (125)
		bool m_drawSpuLegendEnable; // 0x7E (126)
		bool m_snoopEnable; // 0x7F (127)
		bool m_snoopOnly; // 0x80 (128)
		bool m_sortByTime; // 0x81 (129)
		bool m_filterEnable; // 0x82 (130)
	}; // 0x88 (136)
}

