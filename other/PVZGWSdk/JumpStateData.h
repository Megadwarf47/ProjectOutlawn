///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CharacterStateData.h>

namespace fb {
	class JumpStateData : public CharacterStateData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("JumpStateData"); }
		virtual ~JumpStateData() override {}
		JumpStateData() {
			m_jumpHeight = 1.f;
			m_forwardImpulse = 0.f;
			m_jumpEffectSize = 0.12f;
		};

		float m_jumpHeight; // 0x18 (24)
		float m_forwardImpulse; // 0x1C (28)
		float m_jumpEffectSize; // 0x20 (32)
	}; // 0x28 (40)
}

