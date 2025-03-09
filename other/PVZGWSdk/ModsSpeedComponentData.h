///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ModsComponentData.h>

namespace fb {
	class ModsSpeedComponentData : public ModsComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ModsSpeedComponentData"); }
		virtual ~ModsSpeedComponentData() override {}
		ModsSpeedComponentData() {
			m_speedMultiplier = 1.5f;
		};

		float m_speedMultiplier; // 0xD0 (208)
	}; // 0xE0 (224)
}

