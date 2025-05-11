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
	class RichPresenceContextValue : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RichPresenceContextValue"); }
		virtual ~RichPresenceContextValue() override {}
		RichPresenceContextValue() {
			m_index = 0;
		};

		String m_sid; // 0x10 (16)
		u8 m_index; // 0x18 (24)
	}; // 0x20 (32)
}

