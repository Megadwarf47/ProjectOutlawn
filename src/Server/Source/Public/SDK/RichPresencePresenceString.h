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
	class RichPresencePresenceString : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RichPresencePresenceString"); }
		virtual ~RichPresencePresenceString() override {}
		RichPresencePresenceString() {
			m_interpolated = false;
			m_index = 0;
		};

		String m_sid; // 0x10 (16)
		bool m_interpolated; // 0x18 (24)
		u8 m_index; // 0x19 (25)
	}; // 0x20 (32)
}

