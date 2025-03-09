///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/SpatialEntityData.h>

namespace fb {
	class LocalWindForceEntityBaseData : public SpatialEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("LocalWindForceEntityBaseData"); }
		virtual ~LocalWindForceEntityBaseData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		LocalWindForceEntityBaseData() {
			m_strength = 5.f;
			m_variation = 0.2f;
			m_variationRate = 0.2f;
			m_microVariation = 0.f;
			m_hardness = 0.1f;
			m_forceAsInstantVelocity = 0.f;
		};

		float m_strength; // 0x60 (96)
		float m_variation; // 0x64 (100)
		float m_variationRate; // 0x68 (104)
		float m_microVariation; // 0x6C (108)
		float m_hardness; // 0x70 (112)
		float m_forceAsInstantVelocity; // 0x74 (116)
	}; // 0x80 (128)
}

