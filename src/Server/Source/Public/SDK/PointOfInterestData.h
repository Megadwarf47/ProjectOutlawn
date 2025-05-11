///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/PointOfInterestType.h>
#include <fb/SpatialEntityData.h>

namespace fb {
	class PointOfInterestData : public SpatialEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("PointOfInterestData"); }
		virtual ~PointOfInterestData() override {}
		virtual Realm getRealm() const override { return Realm_Server; }
		PointOfInterestData() {
			m_interestRadius = 5.f;
			m_interestType = PointOfInterestType::PointOfInterest_HighAttackArea;
			m_startEnabled = false;
			m_movable = false;
		};

		float m_interestRadius; // 0x60 (96)
		PointOfInterestType m_interestType; // 0x64 (100)
		bool m_startEnabled; // 0x68 (104)
		bool m_movable; // 0x69 (105)
	}; // 0x70 (112)
}

