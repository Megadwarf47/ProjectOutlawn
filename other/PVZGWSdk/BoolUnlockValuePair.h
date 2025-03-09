///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/UnlockValuePair.h>

namespace fb {
	class BoolUnlockValuePair : public UnlockValuePair {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BoolUnlockValuePair"); }
		virtual ~BoolUnlockValuePair() override {}
		BoolUnlockValuePair() {
			m_defaultValue = false;
			m_unlockedValue = false;
		};

		bool m_defaultValue; // 0x18 (24)
		bool m_unlockedValue; // 0x19 (25)
	}; // 0x20 (32)
}

