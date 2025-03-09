///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/String.h>

namespace fb {
	class SoundTestTaskSpec : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SoundTestTaskSpec"); }
		virtual ~SoundTestTaskSpec() override {}
		SoundTestTaskSpec() {
			m_duration = 0.f;
		};

		String m_description; // 0x10 (16)
		float m_duration; // 0x18 (24)
	}; // 0x20 (32)
}

