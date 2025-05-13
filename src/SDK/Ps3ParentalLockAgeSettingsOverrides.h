///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/Array.h>
#include <fb/DataContainer.h>
#include <fb/Ps3ParentalLockAgeSettingsForCountry.h>

namespace fb {
	class Ps3ParentalLockAgeSettingsOverrides : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("Ps3ParentalLockAgeSettingsOverrides"); }
		virtual ~Ps3ParentalLockAgeSettingsOverrides() override {}
		Ps3ParentalLockAgeSettingsOverrides() {
		};

		Array<Ps3ParentalLockAgeSettingsForCountry> m_overrides; // 0x10 (16)
	}; // 0x18 (24)
}

