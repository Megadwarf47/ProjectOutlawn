///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class PerfOverlaySettings : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PerfOverlaySettings"); }
		virtual ~PerfOverlaySettings() override {}
		PerfOverlaySettings() {
			m_drawGraphMethod = 0;
			m_drawFpsMethod = 0;
			m_fcatWidth = 20.f;
			m_legendDisplayFormat = 0;
			m_fpsTimePeriod = 0.5f;
			m_frameTimeSource = 0;
			m_enable = true;
			m_drawGraph = false;
			m_drawCpuGraph = true;
			m_drawGpuGraph = true;
			m_drawFrameGraph = false;
			m_drawFps = true;
			m_drawFcat = false;
			m_targetFpsIs60 = false;
			m_frameFileLogEnable = false;
		};

		u32 m_drawGraphMethod; // 0x10 (16)
		u32 m_drawFpsMethod; // 0x14 (20)
		float m_fcatWidth; // 0x18 (24)
		u32 m_legendDisplayFormat; // 0x1C (28)
		float m_fpsTimePeriod; // 0x20 (32)
		u32 m_frameTimeSource; // 0x24 (36)
		bool m_enable; // 0x28 (40)
		bool m_drawGraph; // 0x29 (41)
		bool m_drawCpuGraph; // 0x2A (42)
		bool m_drawGpuGraph; // 0x2B (43)
		bool m_drawFrameGraph; // 0x2C (44)
		bool m_drawFps; // 0x2D (45)
		bool m_drawFcat; // 0x2E (46)
		bool m_targetFpsIs60; // 0x2F (47)
		bool m_frameFileLogEnable; // 0x30 (48)
	}; // 0x38 (56)
}

