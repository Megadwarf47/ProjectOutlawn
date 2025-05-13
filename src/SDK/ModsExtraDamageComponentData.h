///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/ModsComponentData.h>

namespace fb {
	class ModsExtraDamageComponentData : public ModsComponentData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ModsExtraDamageComponentData"); }
		virtual ~ModsExtraDamageComponentData() override {}
		ModsExtraDamageComponentData() {
			m_damageMultiplier = 1.f;
		};

		float m_damageMultiplier; // 0xD0 (208)
	}; // 0xE0 (224)
}

