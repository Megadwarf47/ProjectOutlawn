///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioGraphNodePort.h>
#include <fb/AudioGraphNodePortGroup.h>

namespace fb {
	class MusicPlayerEntry : public AudioGraphNodePortGroup {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("MusicPlayerEntry"); }
		virtual ~MusicPlayerEntry() override {}
		MusicPlayerEntry() {
			m_targetNameHash = 0;
			m_isEvent = false;
		};

		AudioGraphNodePort m_in; // 0x10 (16)
		u32 m_targetNameHash; // 0x18 (24)
		bool m_isEvent; // 0x1C (28)
	}; // 0x20 (32)
}

