///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioGraphNodeData.h>
#include <fb/AudioGraphNodePort.h>
#include <fb/RefArray.h>

namespace fb {
	class RouteEntry;
}

namespace fb {
	class RouteNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RouteNodeData"); }
		virtual ~RouteNodeData() override {}
		RouteNodeData() {
		};

		AudioGraphNodePort m_in; // 0x10 (16)
		RefArray<RouteEntry> m_routes; // 0x18 (24)
	}; // 0x20 (32)
}

