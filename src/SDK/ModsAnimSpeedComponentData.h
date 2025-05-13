///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ModsAnimSpeedComponentAnimationBinding.h>
#include <fb/ModsComponentData.h>

namespace fb {
	class ModsAnimSpeedComponentData : public ModsComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ModsAnimSpeedComponentData"); }
		virtual ~ModsAnimSpeedComponentData() override {}
		ModsAnimSpeedComponentData() {
			m_from = 1.f;
			m_to = 1.f;
			m_duration = 1.f;
		};

		float m_from; // 0xD0 (208)
		float m_to; // 0xD4 (212)
		float m_duration; // 0xD8 (216)
		ModsAnimSpeedComponentAnimationBinding m_animSpeedBinding; // 0xDC (220)
	}; // 0xF0 (240)
}

