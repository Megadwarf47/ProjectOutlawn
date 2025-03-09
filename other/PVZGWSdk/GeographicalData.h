///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>
#include <fb/UIGeoLatitude.h>
#include <fb/UIGeoLongitude.h>

namespace fb {
	class GeographicalData : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("GeographicalData"); }
		virtual ~GeographicalData() override {}
		GeographicalData() {
			m_seaLevelOffset = 0.f;
		};

		UIGeoLatitude m_latitude; // 0x10 (16)
		UIGeoLongitude m_longitude; // 0x1C (28)
		float m_seaLevelOffset; // 0x28 (40)
	}; // 0x30 (48)
}

