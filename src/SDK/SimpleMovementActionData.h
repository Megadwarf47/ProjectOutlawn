///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/SimpleMovementActionBaseData.h>

namespace fb {
	class SimpleMovementActionData : public SimpleMovementActionBaseData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SimpleMovementActionData"); }
		virtual ~SimpleMovementActionData() override {}
		SimpleMovementActionData() {
			m_level = 1.f;
			m_action = 0;
			m_specialAnimationIndex = -1;
			m_teleport = false;
			m_respawn = false;
		};

		float m_level; // 0x20 (32)
		s32 m_action; // 0x24 (36)
		s32 m_specialAnimationIndex; // 0x28 (40)
		bool m_teleport; // 0x2C (44)
		bool m_respawn; // 0x2D (45)
	}; // 0x30 (48)
}

