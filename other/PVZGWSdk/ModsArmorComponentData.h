///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ModsComponentData.h>

namespace fb {
	class ModsArmorComponentData : public ModsComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ModsArmorComponentData"); }
		virtual ~ModsArmorComponentData() override {}
		ModsArmorComponentData() {
			m_damageMultiplier = 0.6f;
			m_maximumPotentialDamageMitigation = -1.f;
		};

		float m_damageMultiplier; // 0xD0 (208)
		float m_maximumPotentialDamageMitigation; // 0xD4 (212)
	}; // 0xE0 (224)
}

