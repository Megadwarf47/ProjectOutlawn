///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CharacterStateData.h>

namespace fb {
	class OnGroundStateData : public CharacterStateData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("OnGroundStateData"); }
		virtual ~OnGroundStateData() override {}
		OnGroundStateData() {
			m_jumpDelay = 0.2f;
			m_jumpStaminaPenalty = 0.25f;
			m_allowedDistanceFromGround = 0.2f;
			m_groundHugging = true;
			m_limitDownwardVelocity = false;
		};

		float m_jumpDelay; // 0x18 (24)
		float m_jumpStaminaPenalty; // 0x1C (28)
		float m_allowedDistanceFromGround; // 0x20 (32)
		bool m_groundHugging; // 0x24 (36)
		bool m_limitDownwardVelocity; // 0x25 (37)
	}; // 0x28 (40)
}

