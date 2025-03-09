///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class DebugRenderSettings : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("DebugRenderSettings"); }
		virtual ~DebugRenderSettings() override {}
		DebugRenderSettings() {
			m_textViewDistance = 100.f;
			m_textQueueMaxLineCount = 10;
			m_textQueueTimeVisible = 1.f;
			m_processJobCount = -1;
			m_ps3SpuFrameBufferSize = 2097152;
			m_dxMaxVertexCount = 131072;
			m_enable = true;
			m_drawStatsEnable = false;
			m_textQueueLocationTop = true;
			m_ps3SpuEnable = false;
			m_dxLine2dAntialiasingEnable = false;
			m_dxLine3dAntialiasingEnable = true;
		};

		float m_textViewDistance; // 0x10 (16)
		u32 m_textQueueMaxLineCount; // 0x14 (20)
		float m_textQueueTimeVisible; // 0x18 (24)
		s32 m_processJobCount; // 0x1C (28)
		u32 m_ps3SpuFrameBufferSize; // 0x20 (32)
		u32 m_dxMaxVertexCount; // 0x24 (36)
		bool m_enable; // 0x28 (40)
		bool m_drawStatsEnable; // 0x29 (41)
		bool m_textQueueLocationTop; // 0x2A (42)
		bool m_ps3SpuEnable; // 0x2B (43)
		bool m_dxLine2dAntialiasingEnable; // 0x2C (44)
		bool m_dxLine3dAntialiasingEnable; // 0x2D (45)
	}; // 0x30 (48)
}

