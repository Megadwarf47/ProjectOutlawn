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
	class ParameterRouterEntry;
}

namespace fb {
	class ParameterRouterNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ParameterRouterNodeData"); }
		virtual ~ParameterRouterNodeData() override {}
		ParameterRouterNodeData() {
		};

		AudioGraphNodePort m_routeIn; // 0x10 (16)
		AudioGraphNodePort m_routeOut; // 0x18 (24)
		AudioGraphNodePort m_defaultOut; // 0x20 (32)
		RefArray<ParameterRouterEntry> m_parameterRouterEntries; // 0x28 (40)
	}; // 0x30 (48)
}

