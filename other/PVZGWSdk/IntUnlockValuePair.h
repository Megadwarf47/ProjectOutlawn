///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/UnlockValuePair.h>

namespace fb {
	class IntUnlockValuePair : public UnlockValuePair {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("IntUnlockValuePair"); }
		virtual ~IntUnlockValuePair() override {}
		IntUnlockValuePair() {
			m_defaultValue = 0;
			m_unlockedValue = 0;
		};

		s32 m_defaultValue; // 0x18 (24)
		s32 m_unlockedValue; // 0x1C (28)
	}; // 0x20 (32)
}

