///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CtrRef.h>
#include <fb/DataContainer.h>
#include <fb/RefArray.h>
#include <fb/String.h>

namespace fb {
	class RichPresenceContextValue;
}

namespace fb {
	class RichPresenceContext : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RichPresenceContext"); }
		virtual ~RichPresenceContext() override {}
		RichPresenceContext() {
			m_index = 0;
		};

		String m_name; // 0x10 (16)
		RefArray<RichPresenceContextValue> m_values; // 0x18 (24)
		CtrRef<RichPresenceContextValue> m_defaultValue; // 0x20 (32)
		String m_statCode; // 0x28 (40)
		u8 m_index; // 0x30 (48)
	}; // 0x38 (56)
}

