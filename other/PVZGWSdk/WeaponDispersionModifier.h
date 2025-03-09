///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/WeaponModifierBase.h>

namespace fb {
	class WeaponDispersionModifier : public WeaponModifierBase {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WeaponDispersionModifier"); }
		virtual ~WeaponDispersionModifier() override {}
		WeaponDispersionModifier() {
			m_horizontalModifier = 1.f;
			m_verticalModifier = 1.f;
		};

		float m_horizontalModifier; // 0x18 (24)
		float m_verticalModifier; // 0x1C (28)
	}; // 0x20 (32)
}

