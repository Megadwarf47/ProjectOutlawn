///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/AnimTangentType.h>
#include <fb/Types.h>

namespace fb {
	struct TransformPartPropertyKey {
		TransformPartPropertyKey() {
			m_value = 0.f;
			m_inAnimTangentType = AnimTangentType::kTangentFixed;
			m_inAngle = 0.f;
			m_inWeight = 1.f;
			m_outAnimTangentType = AnimTangentType::kTangentFixed;
			m_outAngle = 0.f;
			m_outWeight = 1.f;
		};

		float m_value; // 0x0 (0)
		AnimTangentType m_inAnimTangentType; // 0x4 (4)
		float m_inAngle; // 0x8 (8)
		float m_inWeight; // 0xC (12)
		AnimTangentType m_outAnimTangentType; // 0x10 (16)
		float m_outAngle; // 0x14 (20)
		float m_outWeight; // 0x18 (24)
	}; // 0x1C (28)
}

