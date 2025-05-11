///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/SpatialEntityData.h>

namespace fb {
	class WaterInteractTurbulenceDisturbEntityData : public SpatialEntityData {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("WaterInteractTurbulenceDisturbEntityData"); }
		virtual ~WaterInteractTurbulenceDisturbEntityData() override {}
		virtual Realm getRealm() const override { return Realm_Client; }
		WaterInteractTurbulenceDisturbEntityData() {
			m_disturbFreq = 30.f;
			m_areaSizeX = 0.f;
			m_areaSizeZ = 0.f;
			m_disturbSize = 0.5f;
			m_disturbVel = 5.f;
		};

		float m_disturbFreq; // 0x60 (96)
		float m_areaSizeX; // 0x64 (100)
		float m_areaSizeZ; // 0x68 (104)
		float m_disturbSize; // 0x6C (108)
		float m_disturbVel; // 0x70 (112)
	}; // 0x80 (128)
}

