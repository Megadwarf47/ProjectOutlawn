///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioGraphNodeData.h>
#include <fb/AudioGraphNodePort.h>

namespace fb {
	class CameraShakeNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("CameraShakeNodeData"); }
		virtual ~CameraShakeNodeData() override {}
		CameraShakeNodeData() {
		};

		AudioGraphNodePort m_pitch; // 0x10 (16)
		AudioGraphNodePort m_yaw; // 0x18 (24)
		AudioGraphNodePort m_roll; // 0x20 (32)
	}; // 0x28 (40)
}

