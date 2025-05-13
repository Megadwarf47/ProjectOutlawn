///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/ProximityObjectType.h>

namespace fb {
	class ProximityData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("ProximityData"); }
		virtual ~ProximityData() override {}
		ProximityData() {
			m_proximityType = ProximityObjectType::PotProximityDisabled;
		};

		ProximityObjectType m_proximityType; // 0x10 (16)
	}; // 0x18 (24)
}

