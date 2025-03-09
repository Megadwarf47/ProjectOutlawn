///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioGraphNodePort.h>
#include <fb/AudioGraphNodePortGroup.h>
#include <fb/SoundGraphPluginRef.h>

namespace fb {
	class RouteEntry : public AudioGraphNodePortGroup {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RouteEntry"); }
		virtual ~RouteEntry() override {}
		RouteEntry() {
		};

		AudioGraphNodePort m_output; // 0x10 (16)
		AudioGraphNodePort m_amplitude; // 0x18 (24)
		SoundGraphPluginRef m_plugin; // 0x20 (32)
	}; // 0x28 (40)
}

