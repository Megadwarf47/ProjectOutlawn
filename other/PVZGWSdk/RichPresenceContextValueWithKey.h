///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/RichPresenceContextValue.h>
#include <fb/String.h>

namespace fb {
	class RichPresenceContextValueWithKey : public RichPresenceContextValue {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RichPresenceContextValueWithKey"); }
		virtual ~RichPresenceContextValueWithKey() override {}
		RichPresenceContextValueWithKey() {
		};

		String m_key; // 0x20 (32)
		Array<String> m_otherKeys; // 0x28 (40)
	}; // 0x30 (48)
}

