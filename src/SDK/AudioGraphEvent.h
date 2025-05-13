///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AudioGraphParameter.h>

namespace fb {
	class AudioGraphEvent : public AudioGraphParameter {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("AudioGraphEvent"); }
		virtual ~AudioGraphEvent() override {}
		AudioGraphEvent() {
		};

	}; // 0x20 (32)
}

