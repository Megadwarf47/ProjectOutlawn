///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/PickupEntityData.h>

namespace fb {
	class KitPickupEntityData : public PickupEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("KitPickupEntityData"); }
		virtual ~KitPickupEntityData() override {}
		KitPickupEntityData() {
			m_keepAdditionalWeapons = true;
		};

		bool m_keepAdditionalWeapons; // 0xF0 (240)
	}; // 0x100 (256)
}

