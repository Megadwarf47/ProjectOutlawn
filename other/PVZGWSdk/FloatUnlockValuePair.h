///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/UnlockValuePair.h>

namespace fb {
	class FloatUnlockValuePair : public UnlockValuePair {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("FloatUnlockValuePair"); }
		virtual ~FloatUnlockValuePair() override {}
		FloatUnlockValuePair() {
			m_defaultValue = 0.f;
			m_unlockedValue = 0.f;
		};

		float m_defaultValue; // 0x18 (24)
		float m_unlockedValue; // 0x1C (28)
	}; // 0x20 (32)
}

