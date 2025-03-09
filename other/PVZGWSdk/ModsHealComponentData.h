///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ModsComponentData.h>

namespace fb {
	class ModsHealComponentData : public ModsComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ModsHealComponentData"); }
		virtual ~ModsHealComponentData() override {}
		ModsHealComponentData() {
			m_healingAmount = 1.f;
		};

		float m_healingAmount; // 0xD0 (208)
	}; // 0xE0 (224)
}

