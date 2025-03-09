///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/GroundHeightData.h>
#include <fb/SpatialEntityData.h>

namespace fb {
	class GroundHeightEntityData : public SpatialEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("GroundHeightEntityData"); }
		virtual ~GroundHeightEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		GroundHeightEntityData() {
		};

		GroundHeightData m_data; // 0x60 (96)
	}; // 0x80 (128)
}

