///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>

namespace fb {
	class JumperTune : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("JumperTune"); }
		virtual ~JumperTune() override {}
		JumperTune() {
			m_speed = 9.f;
			m_arcFraction = 0.25f;
			m_turnBeforeJumpAngle = 45.f;
			m_keepSpeedWhenSwapToDefault = false;
			m_onlyJumpToEndPoint = false;
		};

		float m_speed; // 0x18 (24)
		float m_arcFraction; // 0x1C (28)
		float m_turnBeforeJumpAngle; // 0x20 (32)
		bool m_keepSpeedWhenSwapToDefault; // 0x24 (36)
		bool m_onlyJumpToEndPoint; // 0x25 (37)
	}; // 0x28 (40)
}

