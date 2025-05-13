///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class RenderTestSettings : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RenderTestSettings"); }
		virtual ~RenderTestSettings() override {}
		RenderTestSettings() {
			m_case = 0;
			m_enable = false;
			m_drawEnable = false;
		};

		u32 m_case; // 0x10 (16)
		bool m_enable; // 0x14 (20)
		bool m_drawEnable; // 0x15 (21)
	}; // 0x18 (24)
}

