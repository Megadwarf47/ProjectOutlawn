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
	class PhysicsEntry;
}

namespace fb {
	class PhysicsNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PhysicsNodeData"); }
		virtual ~PhysicsNodeData() override {}
		PhysicsNodeData() {
		};

		AudioGraphNodePort m_distance; // 0x10 (16)
		AudioGraphNodePort m_velocity; // 0x18 (24)
		AudioGraphNodePort m_relativeVelocity; // 0x20 (32)
		AudioGraphNodePort m_azimuth; // 0x28 (40)
		AudioGraphNodePort m_elevationAngle; // 0x30 (48)
		RefArray<PhysicsEntry> m_entries; // 0x38 (56)
	}; // 0x40 (64)
}

