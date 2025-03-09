///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/RefArray.h>

namespace fb {
	class WeaponVisualPair;
}

namespace fb {
	class WeaponVisualTable : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WeaponVisualTable"); }
		virtual ~WeaponVisualTable() override {}
		WeaponVisualTable() {
		};

		RefArray<WeaponVisualPair> m_visualUnlocks; // 0x10 (16)
	}; // 0x18 (24)
}

