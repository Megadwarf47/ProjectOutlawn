///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class WeaponModifierBase : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WeaponModifierBase"); }
		virtual ~WeaponModifierBase() override {}
		WeaponModifierBase() {
			m_applyOrder = -1;
		};

		s32 m_applyOrder; // 0x10 (16)
	}; // 0x18 (24)
}

