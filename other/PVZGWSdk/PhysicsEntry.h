///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioGraphNodePort.h>
#include <fb/AudioGraphNodePortGroup.h>
#include <fb/CtrRef.h>

namespace fb {
	class OutputNodeData;
}

namespace fb {
	class PhysicsEntry : public AudioGraphNodePortGroup {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PhysicsEntry"); }
		virtual ~PhysicsEntry() override {}
		PhysicsEntry() {
		};

		AudioGraphNodePort m_distance; // 0x10 (16)
		AudioGraphNodePort m_azimuth; // 0x18 (24)
		AudioGraphNodePort m_elevationAngle; // 0x20 (32)
		CtrRef<OutputNodeData> m_output; // 0x28 (40)
	}; // 0x30 (48)
}

