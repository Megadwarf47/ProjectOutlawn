///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class LinkFlowTune : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("LinkFlowTune"); }
		virtual ~LinkFlowTune() override {}
		LinkFlowTune() {
			m_maxSimultaneous = 1;
		};

		u32 m_maxSimultaneous; // 0x10 (16)
	}; // 0x18 (24)
}

