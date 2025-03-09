///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/SpatialEntityData.h>

namespace fb {
	class LocalWindForceSamplerEntityData : public SpatialEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("LocalWindForceSamplerEntityData"); }
		virtual ~LocalWindForceSamplerEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		LocalWindForceSamplerEntityData() {
			m_radius = 5.f;
		};

		float m_radius; // 0x60 (96)
	}; // 0x70 (112)
}

