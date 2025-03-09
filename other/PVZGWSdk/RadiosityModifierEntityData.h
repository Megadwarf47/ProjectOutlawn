///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/SpatialEntityData.h>

namespace fb {
	class RadiosityModifierEntityData : public SpatialEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("RadiosityModifierEntityData"); }
		virtual ~RadiosityModifierEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		RadiosityModifierEntityData() {
			m_bounceScale = 1.f;
			m_sunScale = 1.f;
		};

		float m_bounceScale; // 0x60 (96)
		float m_sunScale; // 0x64 (100)
	}; // 0x70 (112)
}

