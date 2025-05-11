///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class OcclusionSettings : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("OcclusionSettings"); }
		virtual ~OcclusionSettings() override {}
		OcclusionSettings() {
			m_enable = true;
			m_coverageEnable = false;
			m_drawShadowZbuffer = false;
			m_drawZbuffer = false;
			m_drawSplitView = true;
			m_drawBinaryBuffer = false;
			m_drawCoverageBuffer = false;
		};

		bool m_enable; // 0x10 (16)
		bool m_coverageEnable; // 0x11 (17)
		bool m_drawShadowZbuffer; // 0x12 (18)
		bool m_drawZbuffer; // 0x13 (19)
		bool m_drawSplitView; // 0x14 (20)
		bool m_drawBinaryBuffer; // 0x15 (21)
		bool m_drawCoverageBuffer; // 0x16 (22)
	}; // 0x18 (24)
}

