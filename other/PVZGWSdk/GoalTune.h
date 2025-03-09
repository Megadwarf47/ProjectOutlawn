///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Asset.h>

namespace fb {
	class GoalTune : public Asset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("GoalTune"); }
		virtual ~GoalTune() override {}
		GoalTune() {
			m_preferredTurningRadius = 0.f;
			m_useCircularApproach = false;
		};

		float m_preferredTurningRadius; // 0x18 (24)
		bool m_useCircularApproach; // 0x1C (28)
	}; // 0x20 (32)
}

