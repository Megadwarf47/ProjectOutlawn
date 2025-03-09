///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/SoundTestTaskSpec.h>
#include <fb/String.h>

namespace fb {
	class SoundTestEventTask : public SoundTestTaskSpec {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoundTestEventTask"); }
		virtual ~SoundTestEventTask() override {}
		SoundTestEventTask() {
		};

		String m_eventName; // 0x20 (32)
	}; // 0x28 (40)
}

