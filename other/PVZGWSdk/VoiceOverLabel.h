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
	class VoiceOverLabel : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("VoiceOverLabel"); }
		virtual ~VoiceOverLabel() override {}
		VoiceOverLabel() {
			m_nameHash = 0;
		};

		String m_name; // 0x10 (16)
		u32 m_nameHash; // 0x18 (24)
	}; // 0x20 (32)
}

