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
	class VoiceOverGroup : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VoiceOverGroup"); }
		virtual ~VoiceOverGroup() override {}
		VoiceOverGroup() {
			m_priority = 0;
		};

		String m_name; // 0x10 (16)
		s32 m_priority; // 0x18 (24)
	}; // 0x20 (32)
}

