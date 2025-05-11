///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/CtrRef.h>
#include <fb/DataContainer.h>
#include <fb/WeaponOverrideValue.h>

namespace fb {
	class DataContainer;
}

namespace fb {
	class WeaponOverrideData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WeaponOverrideData"); }
		virtual ~WeaponOverrideData() override {}
		WeaponOverrideData() {
		};

		CtrRef<DataContainer> m_data; // 0x10 (16)
		Array<WeaponOverrideValue> m_values; // 0x18 (24)
	}; // 0x20 (32)
}

