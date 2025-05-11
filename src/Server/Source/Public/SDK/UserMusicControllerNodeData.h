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
	class UserMusicControllerNodeData : public AudioGraphNodeData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("UserMusicControllerNodeData"); }
		virtual ~UserMusicControllerNodeData() override {}
		UserMusicControllerNodeData() {
			m_restoreOnDeactivated = true;
		};

		AudioGraphNodePort m_override; // 0x10 (16)
		AudioGraphNodePort m_restore; // 0x18 (24)
		bool m_restoreOnDeactivated; // 0x20 (32)
	}; // 0x28 (40)
}

