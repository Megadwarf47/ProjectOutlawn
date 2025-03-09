///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/CharacterStateData.h>

namespace fb {
	class SwimmingStateData : public CharacterStateData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("SwimmingStateData"); }
		virtual ~SwimmingStateData() override {}
		SwimmingStateData() {
			m_bodyUnderWater = 0.25f;
		};

		float m_bodyUnderWater; // 0x18 (24)
	}; // 0x20 (32)
}

