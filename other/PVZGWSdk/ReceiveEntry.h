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
	class AudioGraphParameter;
}

namespace fb {
	class ReceiveEntry : public AudioGraphNodePortGroup {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ReceiveEntry"); }
		virtual ~ReceiveEntry() override {}
		ReceiveEntry() {
			m_parameter = 0.f;
			m_savedValue = 0.f;
		};

		AudioGraphNodePort m_out; // 0x10 (16)
		CtrRef<AudioGraphParameter> m_source; // 0x18 (24)
		float m_parameter; // 0x20 (32)
		float m_savedValue; // 0x24 (36)
	}; // 0x28 (40)
}

