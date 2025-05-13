///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioGraphNodePort.h>
#include <fb/SoundBusData.h>
#include <fb/SoundGraphPluginRef.h>

namespace fb {
	class BusNodeData : public SoundBusData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BusNodeData"); }
		virtual ~BusNodeData() override {}
		BusNodeData() {
		};

		AudioGraphNodePort m_out; // 0x20 (32)
		SoundGraphPluginRef m_vuPlugin; // 0x28 (40)
	}; // 0x30 (48)
}

