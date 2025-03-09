///////////////////////////////////////////////////////////////
//                                                           //
// This is an automatically generated file.                  //
// Do *NOT* modify unless you really know what you're doing. //
//                                                           //
///////////////////////////////////////////////////////////////

#pragma once

#include <fb/DataContainer.h>

namespace fb {
	class BangerSpawnImpulseParams : public DataContainer {
	public:
		virtual ClassInfo* getType() const override { return TypeManager::findClass("BangerSpawnImpulseParams"); }
		virtual ~BangerSpawnImpulseParams() override {}
		BangerSpawnImpulseParams() {
			m_minHorizontalAngle = -90.f;
			m_maxHorizontalAngle = 90.f;
			m_minVerticalAngle = 45.f;
			m_maxVerticalAngle = 85.f;
			m_minStrength = 15000.f;
			m_maxStrength = 15000.f;
			m_waterStrengthModifier = 0.007f;
			m_linearDamping = 0.f;
			m_angularDamping = 0.05f;
		};

		float m_minHorizontalAngle; // 0x10 (16)
		float m_maxHorizontalAngle; // 0x14 (20)
		float m_minVerticalAngle; // 0x18 (24)
		float m_maxVerticalAngle; // 0x1C (28)
		float m_minStrength; // 0x20 (32)
		float m_maxStrength; // 0x24 (36)
		float m_waterStrengthModifier; // 0x28 (40)
		float m_linearDamping; // 0x2C (44)
		float m_angularDamping; // 0x30 (48)
	}; // 0x38 (56)
}

