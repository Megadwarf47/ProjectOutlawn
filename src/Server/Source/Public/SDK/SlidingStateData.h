///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CharacterStateData.h>

namespace fb {
	class SlidingStateData : public CharacterStateData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SlidingStateData"); }
		virtual ~SlidingStateData() override {}
		SlidingStateData() {
			m_horizontalInputScale = 0.3f;
			m_gravityScale = 1.f;
		};

		float m_horizontalInputScale; // 0x18 (24)
		float m_gravityScale; // 0x1C (28)
	}; // 0x20 (32)
}

