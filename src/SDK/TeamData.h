///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/FactionId.h>
#include <fb/RefArray.h>
#include <fb/TeamAsset.h>

namespace fb {
	class CharacterCustomizationAsset;
	class VehicleCustomizationAsset;
}

namespace fb {
	class TeamData : public TeamAsset {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("TeamData"); }
		virtual ~TeamData() override {}
		TeamData() {
			m_faction = FactionId::FactionNeutral;
		};

		FactionId m_faction; // 0x18 (24)
		RefArray<CharacterCustomizationAsset> m_soldierCustomization; // 0x20 (32)
		RefArray<VehicleCustomizationAsset> m_vehicleCustomization; // 0x28 (40)
	}; // 0x30 (48)
}

